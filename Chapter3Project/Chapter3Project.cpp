// Chapter3Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	//Declaring variables
	double rate, compound, principal, interest, result, decimal;

	//Asking for values and assigning values to variables
	cout << "Interest rate? ";
	cin >> rate;
	cout << "Times compounded? ";
	cin >> compound;
	cout << "Principal? ";
	cin >> principal;
	cout << "Interest? ";
	cin >> interest;

	//Calculating
	decimal = rate / 100;
	result = principal * pow((1 + decimal / compound), compound);

	//Printing report

	cout << std::setw(10) << std::left << "\nInterest Rate: ";
	cout << std::setw(23) << std::right << rate << "%";

	cout << std::setw(10) << std::left << "\nTimes Compounded: ";
	cout << std::setw(18) << std::right << compound;

	cout << std::setw(10) << std::left << "\nPrincipal: ";
	cout << std::setw(23) << std::right << "$ " << principal;

	cout << std::setw(10) << std::left << "\nInterest: ";
	cout << std::setw(24) << std::right << "$ " << interest;

	cout << std::setw(10) << std::left << "\nAmount in Savings: ";
	cout << std::setw(15) << std::right << "$ " << result;
	
}

