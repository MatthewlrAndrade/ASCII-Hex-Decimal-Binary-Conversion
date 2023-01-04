#include <iostream>
#include "Header.h"

void decToHex();
void hexToDec();

//Allows you to select what conversion you want to perform.
void choiceDecHex()
{
	std::cout << "Decimal to Hexadecimal: '1' Hexadecimal to Decimal: '2'  ";

	int translateChoice{};
	std::cin >> translateChoice;

	if (translateChoice == 1)
		decToHex();

	else if (translateChoice == 2)
		hexToDec();

	else
		invalid();

	return;
}

void decToHex()
{
	//Values represent the min and max values of the 32-bit int type.
	std::cout << "Input an integer with no spaces or commas (min value is -2,147,483,648, max value is 2,147,483,647): \n";
	int dec1{};
	std::cin >> dec1;
	std::cout << dec1 << " in hexadecimal is " << std::hex << dec1 << '\n';
	
	return;
}

void hexToDec()
{	
	//Values represent the min and max values of the 32-bit int type.
	std::cout << "Input a hexadecimal value with no spaces or commas (min value is 80000000, max value is 7fffffff): \n";
	int hex1{};
	std::cin >> std::hex >> hex1;
	std::cout << std::hex << hex1 << " in decimal is " << std::dec << hex1 << '\n';
	
	return;
}





















//nice