#pragma once

#include <iostream>
#include <string>

void print(const char *str) { std::cout << str; }
void print(std::string str) { std::cout << str; }
void print(std::string &&str) { std::cout << str; }
void print(void *any) { std::cout << any; }
void println(const char *str) { std::cout << str << std::endl; }
void println(std::string str) { std::cout << str << std::endl; }
void println(std::string &&str) { std::cout << str << std::endl; }
void println(void *any) { std::cout << any << std::endl; }
