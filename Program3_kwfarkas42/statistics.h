#ifndef STATISTICS_H
#define STATISTICS_H

// This function will take the array and the size of
// the array as its argument.
// It will return the maximum element or value of the array.
int MaximumElement(int*, int);

// This function will take the array and the size of
// the array as its argument.
// It will return the minimum element or value of the array.
int MinimumElement(int*, int);

// This function will take the array and the size of
// the array as its argument.
// It will compute and return the mean of all the elements
// of the array. The mean is the sum of all the elements 
// by dividing the size of the array. For example,
// arr[] = {1, 6, 4, 2}
// Mean = 13 / 4 (where 13 is the sum, 4 is the size)
double Mean(int*, int);

// This function will take the array and the size of
// the array as its argument.
// It will compute and return the median of the array.
// To compute the median, you need to first utilize the SortArray
// function to sort the array. Then, you need to check whether
// the size of the array is odd or even.
// If odd, then the median is the value of the middle index.
// If even, then the median is the mean value of the middle and the following index
// arr[] = {1, 6, 4, 2}
// Median:
// Sort -> {1, 2, 4, 6}
// Size = 4 or even -> (2 + 4) / 2 = 3
// arr[] = {1, 6, 4, 2, 5}
// Median:
// Sort -> {1, 2, 4, 5, 6}
// Size = 5 or odd -> 4 (the value of the middle index)
double Median(int*, int);

void SortArray(int*, int);

#endif