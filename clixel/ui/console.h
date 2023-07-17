#pragma once

#include <iostream>
#include <string>
#include <utility>

void print(const char *str) { std::cout << str; }
void print(std::string str) { std::cout << str; }
void print(std::string &&str) { std::cout << str; }
void print(void *any) { std::cout << any; }
void println(const char *str) { std::cout << str << std::endl; }
void println(std::string str) { std::cout << str << std::endl; }
void println(std::string &&str) { std::cout << str << std::endl; }
void println(void *any) { std::cout << any << std::endl; }

int readInt() {
    int read;
    std::cin >> read;

    return read;
}

std::pair<int, int> readIntPair() {
    int a, b;
    std::cin >> a >> b;

    return std::make_pair(a, b);
}
