#include "Header.h"
#include <iostream>

int ask()
{
    std::cout << "Which values do you want to convert from? \n";
    std::cout << "Character and ASCII: '1'  Decimal and Hexadecimal: '2' Decimal and Binary: '3' Binary and Hexadecimal: '4' ";

    int choice{};
    std::cin >> choice;

    return choice;
}