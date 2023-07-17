// Sheet.cpp
// Created on 2023 Jul 17
#include "Sheet.h"

Sheet::Sheet(int width, int height)
    : width(width), height(height)
{
    for (int i = 0; i < width; i++) {
        this->data[i] = new Cell[height];
    }
}

Sheet::~Sheet() {
    for (int i = 0; i < width; i++) {
        delete [] this->data[i];
    }
}

