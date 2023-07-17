#pragma once
#include <string>

class Cell {
private:
  std::string data;
  bool isNumber;

  bool isNumeric(std::string str);

public:
  Cell() : data(""), isNumber(false) {}
  Cell(std::string str);
  Cell(const char *str);

  void setData(std::string str);
  void setData(const char *str);
};
