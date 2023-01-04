#include <iostream>
#include <string>
#include "Header.h"

void decToBin();
int binToDec();

//Allows you to select what conversion you want to perform.
void choiceDecBin()
{
	std::cout << "Decimal to Binary: '1' Binary to Decimal: '2'  ";

	int translateChoice{};
	std::cin >> translateChoice;

	if (translateChoice == 1)
		decToBin();

	else if (translateChoice == 2)
		binToDec();
		
	else
		invalid();

	return;
}

void decToBinConversion(int n)
{
	int binaryNumber[100], num = n;
	int i = 0;
	while (n > 0)
	{
		binaryNumber[i] = n % 2;
		n = n / 2;
		i++;
	}

	std::cout << "Binary form of " << num << " is ";
	for (int j = i - 1; j >= 0; j--)
		std::cout << binaryNumber[j];
}

void decToBin()
{
	int dec{};
	std::cout << "Enter a positive integer. (max value is 2,147,483,647) ";
	std::cin >> dec;

	if (dec < 0)
		invalid();

	else
		decToBinConversion(dec);

	return;
}

int binToDecConversion(std::string str)
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

int binToDec()
{
	std::string bin;
	std::cout << "Type in a string in binary (with no spaces). \n";
	std::cin >> bin;
	std::cout << bin << " after conversion into decimal is: " << binToDecConversion(bin);

	return 0;
}





