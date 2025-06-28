// Chapter3Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //Printing out prompt
    std::cout << "A cookie recipe calls for the following ingredients: 1.5 cups of sugar, 1 cup of butter, 2.75 cups of flour \n";
    std:: cout << "The recipe produces 48 cookies with this amount of ingredients.\n";
    
    //Declaring and assigning values to variables
    double flour, butter, sugar, x, xflour, xbutter, xsugar;
    flour = 2.75;
    butter = 1;
    sugar = 1.5;

    //Asking user how many cookies they want to make and assigning input to value
    std::cout << "How many cookies do you wish to bake? ";
    std::cin >> x;

    //Calculation
    xflour = flour * (x / 48);
    xbutter = butter * (x / 48);
    xsugar = sugar * (x / 48);

    //Print out results
    std::cout << "For " << x << " cookies, you need: \n" << xsugar << " cup(s) of sugar\n" << xbutter << " cup(s) of butter\n" << xflour << " cup(s) of flour";
}

