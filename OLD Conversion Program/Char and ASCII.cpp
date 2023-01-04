#include <iostream>
#include "Header.h"

void charASCII();
void asciiCHAR();

//Allows you to select what conversion you want to perform.
void choiceCharASCII()
{
	std::cout << "Character to ASCII code: '1' ASCII code to Character: '2'  ";

	int translateChoice{};
	std::cin >> translateChoice;

	if (translateChoice == 1)
		charASCII();

	else if (translateChoice == 2)
		asciiCHAR();

	else
		invalid();

	return;
}

//Converts a keyboard character to ASCII code.
void charASCII()
{
	std::cout << "Input only one keyboard character (any character after the first one will be ignored): \n";
	char ch1{};
	std::cin >> ch1;
	int ASCch1{ static_cast<int>(ch1) };
	std::cout << ch1 << " has ASCII code " << ASCch1 << '\n';

	return;
}

//Converts an ASCII code to a keyboard character.
void asciiCHAR()
{
	//32-254 is the range of valid ASCII codes.
	std::cout << "Input an integer between 32-254: \n";
	int ch2{};
	std::cin >> ch2;
	
	if (32 > ch2)
		invalid();

	else if (254 < ch2)
		invalid();

	else
		std::cout << ch2 << " is the character " << static_cast<char>(ch2) << '\n';

	return;
}

