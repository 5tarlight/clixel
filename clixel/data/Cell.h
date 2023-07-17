#pragma once
#include <string>

class Cell {
private:
  std::string data;
  bool isNumber;

  bool isNumeric(std::string str);

public:
  Cell() : data(""), isNumber(false) {}
};
