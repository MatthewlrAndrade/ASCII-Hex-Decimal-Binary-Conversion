#include "Header.h"
#include <iostream>

int main()
{   
    //sends user to 'Ask.cpp' to determine which value conversion you want to perform
    int decide{ ask() };
    
    //If 1 was chosen when user was prompted, this will take you to 'Char and ASCII.cpp' for Character and ASCII conversion.
    if (decide == 1)
        choiceCharASCII();

    //If 2 was chosen when user was prompted, this will take you to 'Decimal and Hexadecimal.cpp' for Decimal and Hexadecimal conversion.
    else if (decide == 2)
        choiceDecHex();

    else if (decide == 3)
        choiceDecBin();

    else if (decide == 4)
        choiceHexBin();
    
    //If any other value is chosen when the user was prompted it will cause an error message from 'Invalid Handler.cpp'
    else
        invalid();

    return 0;
}