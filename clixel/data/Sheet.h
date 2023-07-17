// Sheet.h
// Created on 2023 Jul 17
#ifndef CLIXEL_SHEET_H
#define CLIXEL_SHEET_H

#include "Cell.h"

class Sheet {
private:
    Cell **data;
    int width;
    int height;

public:
    Sheet(int width, int height);
    ~Sheet();
};


#endif //CLIXEL_SHEET_H
