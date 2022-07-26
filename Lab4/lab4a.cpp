/*
   Title:   lab4a.cpp
	Author:  Keegan Farkas	
	Date:    9/24/21
	Purpose:	This program illustrates the use of logical operators
*/

#include <iostream>

using namespace std;

int main()
{
   int year;
   float gpa;

   cout << "What year student are you ?\n";
   cout << "Enter 1 (freshman), 2 (sophomore), 3 (junior), or 4 (senior)\n\n";
   cin >> year;

   cout << "Now enter your GPA\n";
   cin >> gpa;

   if ((year == 1) && (gpa < 2))
      cout << "You need to visit your freshman advisor and seek tutoring to improve your gpa.";
   else if ((year == 4) && (gpa > 2))
      cout << "It is time to graduate soon";
   else
      cout << "You need more schooling.";

   return 0;
}