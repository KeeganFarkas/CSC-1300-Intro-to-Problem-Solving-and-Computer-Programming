/*
    Title:      lab_2b.cpp
    Author:     Keegan Farkas
    Date:       9/3/21
    Purpose:    This program is written to help customers at a
                convenience store calculate the total cost of
                purchasing varying amounts of 2 different items.
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    string Item1, Item2;
    int Item1Quantity, Item2Quantity;
    float Item1Price, Item2Price, TotalPrice;
    const  float SalesTax = 1.0975;

    cout <<	setprecision(2) << fixed << showpoint;
    cout << "\n\nPlease input the name of the first item:  ";

    getline(cin, Item1);

    cout << "Please input the number of " << Item1 << " bought:  ";

    cin >> Item1Quantity;

    cout << "Please input the price of " << Item1 << ":  $";

    cin >> Item1Price;

    cout << "\n\nPlease input the name of the second item:  ";

    cin.ignore();

    getline(cin, Item2);

    cout << "Please input the number of " << Item2 << " bought:  ";

    cin >> Item2Quantity;

    cout << "Please input the price of " << Item2 << ":  $";

    cin >> Item2Price;

    TotalPrice = ((Item1Quantity * Item1Price) + (Item2Quantity * Item2Price)) * SalesTax;

    cout << "\nThe total bill is $" << TotalPrice << ".";

    return 0;
}