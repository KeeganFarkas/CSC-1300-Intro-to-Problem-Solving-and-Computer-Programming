#include <iostream>
#include <cmath>
using namespace std;

int choice;
double PI = M_PI;
double height, width, base, radius, result;

void displayMenu ()
{
    cout << "\nChoose a shape to calculate area or 5 to quit:\n";
    cout << "        1. Square\n        2. Rectangle\n        3. Parallelogram\n";
    cout << "        4. Circle\n        5. End Program\nCHOOSE 1-5: ";

    cin >> choice;

    while ((choice < 1) || (choice > 5))
        {
            cout << "\nInvalid input.\nCHOOSE 1-5: ";

            cin >> choice;
        }
}

double areaSquare (double height)
{
    result = pow(height, 2);

    return result;
}

double areaRectangle (double height, double width)
{
    result = height * width;

    return result;
}

double areaParallelogram (double base, double height)
{
    result = base * height;

    return result;
}

double areaCircle (double radius)
{
    result = PI * pow(radius, 2);

    return result;
}

int main()
{
    do
    {
        displayMenu ();

        switch (choice)
        {
            case 1:
                cout << "\nEnter the height of the square:\n";

                cin >> height;

                cout << "\nThe area of your square is " << areaSquare(height) << "\n\n";
                break;
            

            case 2:
                cout << "\nEnter the height & width of the rectangle, seperated by a space:\n";

                cin >> height;
                cin >> width;

                cout << "\nThe area of your rectangle is " << areaRectangle(height, width) << "\n\n";
                break;

            case 3:
                cout << "\nEnter the base and height of the parallelogram, seperated by a space:\n";

                cin >> base;
                cin >> height;

                cout << "\nThe area of your parallelogram is " << areaParallelogram(base, height) << "\n\n";
                break;

            case 4:
                cout << "\nEnter the radius of the circle:\n";
                
                cin >> radius;

                cout << "\nThe area of your circle is " << areaCircle(radius) << "\n\n";
                break;

            case 5:
                cout << "\n\nGoodbye!";
        }
    }
    while (choice != 5);

    return 0;
}