#ifndef UTILS_H
#define UTILS_H

// This function will take the array and the size of
// the array as its argument
// It will compute the sum of all the elements of the
// the array and retun the value to where it's called.
// No cout statements!
long long Sum(int*, int);

// This function will take the array and the size of
// the array as its argument
// It will iterate through all the elements of the
// array and count the number of odd and even values
// The function should display the result
void CountOddsAndEvens(int*, int);

// This function will take the array and the size of
// the array as its argument
// It will iterate through all the elements of the
// array and count the number of positive and negative values
// The function should display the result
void CountPositivesAndNegatives(int*, int);

// This function will take the array and the size of
// the array as its argument
// It will compute the sum of the pair and display
// the sum in the following manner
// 
// Case 1
// arr[] = {1, 6, 4, 2}
// The summation of 1 and 2 is 3
// The summation of 6 and 4 is 10
// Case 2
// arr[] = {10, 5, 20, 15, 30}
// The summation of 10 and 30 is 40
// The summation of 5 and 15 is 20
// Lone item: 20
void SumOfMirrorIndexPairs(int*, int);

// This function will take the array and the size of
// the array as its argument.
// It will display all the elements of the arary from
// 0 index to n-1 where n is the size of the array
void DisplayArrayForward(int*, int);

// This function will take the array and the size of
// the array as its argument.
// It will display all the elements of the arary from
// n-1 index to 0 where n is the size of the array
void DisplayArrayBackward(int*, int);

#endif