// Sheet.h
// Created on 2023 Jul 17
#ifndef CLIXEL_SHEET_H
#define CLIXEL_SHEET_H

#include "Cell.h"
#include <vector>

class Sheet {
private:
    Cell **data;
    int row;
    int column;

public:
    Sheet(int row, int column);
    ~Sheet();
    std::vector<Cell> operator[](int index) const;
    void set(int r, int c, const std::string& value);
    void set(int r, int c, const char *value);
};


#endif //CLIXEL_SHEET_H
