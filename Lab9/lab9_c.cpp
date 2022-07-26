/*
*   Title:      lab9_c.cpp
*   Author:     Keegan Farkas
*   Date:       11/05/2021
*   Purpose:    This program was written to find the area of a rectangle 
*               and tell which side is longer.
*/
#include <iostream>
using namespace std;

int main()
{
    int length, width, area, *lengthPtr, *widthPtr;

    lengthPtr = &length;
    widthPtr = &width;

    cout << "Please input the length of the rectangle.\n";

    cin >> length;

    cout << "Please input the width of the rectangle.\n";

    cin >> width;

    area = *lengthPtr * *widthPtr;

    cout << "The area is " << area << endl;

    if (*lengthPtr > *widthPtr)
        cout << "The length is greater than the width.";
    else if (*widthPtr > *lengthPtr)
        cout << "The width is greater than the length.";
    else
        cout << "The length and width are the same.";

    return 0;
}