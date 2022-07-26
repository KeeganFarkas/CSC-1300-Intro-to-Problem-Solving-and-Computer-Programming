#include <iostream>
#include <cmath>

using namespace std;

/*
 * This is the utility function that takes an integar n and
 * returns the summation of 1 to n using a loop.
 */
unsigned int Sum(unsigned int n)
{
    unsigned int result = 0;

    for (unsigned int i = 1; i <= n; i++)
        result += i;
    return result;
}

/*
 * This is the utility function that takes an integar n and
 * returns the Factorial of n.
 */
unsigned long long Factorial(unsigned int n)
{
    unsigned long long result = 1;

    for (unsigned int i = 1; i <= n; i++)
        result *= i;
    return result;
}

/*
 * This is the utility function that takes an integar n and
 * displays the times table of n.
 */
void TimesTable(unsigned int n)
{
    for (short i = 1; i <= 10; i++)
        cout << i << " * " << n << " = " << i * n << endl;
}

/*
 * This is the utility function that takes an integar n and
 * return either a true (for even number including zero) or
 * a false (for odd number).
 */
bool IsEven(unsigned int n)
{
    if (n % 2 == 0)
        return true;
    else
        return false;
}

/*
 * This is the utility function that takes an integar n and
 * return either a true (for a prime number) or
 * a false (for a non-prime number).
 */
bool IsPrime(unsigned int n)
{
    bool flag = true;
    for (unsigned int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = false;
            break;
        }
    }
    return flag;
}

/*
 * This is the utility function that takes an integar n and
 * return either a true (for an Armstrong Number) or
 * a false (for a Non-Armstrong Number).
 */
bool IsArmstrongNumber(unsigned int n)
{
    unsigned int num, x, result = 0;
    short remainder, digits = 0;

    num = n;

    //While loop to find what power to use on each digit
    while (num != 0)
    {
        num /= 10;
        digits++;
    }

    num = n;

    //While loop to find a^n + b^n + ...
    while (num != 0)
    {
        remainder = num % 10;

        x = pow(remainder, digits);
        result += x;
        num /= 10;
    } 

    if (n == result)
        return true;
    else
        return false;   
}