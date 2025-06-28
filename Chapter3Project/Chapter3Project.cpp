// Chapter3Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	//Assigning random numbers
	int num1 = std::rand();
	int num2 = std::rand();

	//Printing out problem
	std::cout << num1 << " + " << num2;

	//Requiring user to press enter before continuing
	std:: cout << "\nPress \"Enter\" to see solution";
	std:: cin.get();

	int result;
	result = num1 + num2;
	std::cout << result;
}

