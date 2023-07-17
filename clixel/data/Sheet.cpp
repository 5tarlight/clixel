// Sheet.cpp
// Created on 2023 Jul 17
#include "Sheet.h"

Sheet::Sheet(int row, int column)
    : row(row), column(column)
{
    this->data = new Cell*[row];
    for (int i = 0; i < row; i++) {
        this->data[i] = new Cell[column];

        for (int j = 0; j < column; j++) {
            this->data[i][j] = Cell{};
        }
    }
}

Sheet::~Sheet() {
    for (int i = 0; i < row; i++) {
        delete [] this->data[i];
    }
}

std::vector<Cell> Sheet::operator[](int index) const {
    if (index > this->row) {
        return std::vector<Cell>{};
    }

    Cell *series = this->data[index];

    std::vector<Cell> result = std::vector<Cell>{};

    for (int i = 0; i < this->column; i++) {
        result.push_back(series[i]);
    }

    return result;
}

void Sheet::set(int r, int c, const std::string& value) {
    if (
        r < 0 || r >= this->row ||
        c < 0 || c >= this->column
    ) {
        return;
    }

    this->data[r][c] = Cell{value};
}

void Sheet::set(int r, int c, const char *value) {
    if (
        r < 0 || r >= this->row ||
        c < 0 || c >= this->column
    ) {
        return;
    }

    this->data[r][c] = Cell{value};
}
