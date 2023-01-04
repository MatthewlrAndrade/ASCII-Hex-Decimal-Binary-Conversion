#include <iostream>
#include <string>
#include "Header.h"

void hexToBin();
int binToHex();

//Allows you to select what conversion you want to perform.
void choiceHexBin()
{
	std::cout << "Hexadecimal to Binary: '1' Binary to Hexadecimal: '2'  ";

	int translateChoice{};
	std::cin >> translateChoice;

	if (translateChoice == 1)
		hexToBin();

	else if (translateChoice == 2)
		binToHex();

	else
		invalid();

	return;
}

void hexToBinConversion(int n)
{
	int binaryNumber[100], num = n;
	int i = 0;
	while (n > 0)
	{
		binaryNumber[i] = n % 2;
		n = n / 2;
		i++;
	}

	std::cout << "Binary form of " << std::hex << num << " is ";
	for (int j = i - 1; j >= 0; j--)
		std::cout << binaryNumber[j];
}

void hexToBin()
{
	int hex2{};
	std::cout << "Enter a hexadecimal value from 0-7fffffff. ";
	std::cin >> std::hex >> hex2;

	if (hex2 < 0x0)
		invalid();

	else
		hexToBinConversion(hex2);

	return;
}

int binToHexConversion(std::string str)
{
	std::string n = str;
	int val = 0;
	int temp = 1;
	int len = n.length();
	for (int i = len - 1; i >= 0; i--)
	{
		if (n[i] == '1')
			val += temp;
		temp = temp * 2;
	}

	return val;
}

int binToHex()
{
	std::string bin2;
	std::cout << "Type in a string in binary (with no spaces). \n";
	std::cin >> bin2;
	std::cout << bin2 << " after conversion into hexadecimal is: " << std::hex << binToHexConversion(bin2);

	return 0;
}


