/*
	Title:  	lab_2a.cpp
	Author:		Keegan Farkas
	Date:		9/3/21	
	Purpose:	This program is written for waiters & waitresses at
				TGI Fridays so that they can calculate total cost
				of hot wings for their customers.
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int WingAmount;
	float TotalPrice;
	const float WingPrice = 0.99;
	const float SalesTax = 1.085;

	cout <<	setprecision(2) << fixed << showpoint; 
	cout << "\n\nPlease input the number of hot wings purchased:  ";
	
	cin >> WingAmount;
	
	TotalPrice = (WingAmount * WingPrice) * SalesTax;

	cout << "Your total bill is $" << TotalPrice;
	
	return 0;
}
