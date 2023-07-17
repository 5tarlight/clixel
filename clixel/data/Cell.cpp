#include "Cell.h"

#include <utility>

bool Cell::isNumeric(std::string str) {
  return !str.empty() &&
     std::find_if(str.begin(), str.end(), [](unsigned char c) {
       return !std::isdigit(c);
     }) == str.end();
}

Cell::Cell(std::string str): data(str), isNumber(isNumeric(str)) {}

Cell::Cell(const char *str): data(str) {
    this->isNumeric(this->data);
}

void Cell::setData(std::string str) {
    this->data = std::string(std::move(str));
}

void Cell::setData(const char *str) {
    this->data = std::string(str);
}
