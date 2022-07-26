#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int* ReadFile(char* fileName, int* arraySize)
{
    // line variable will scan each line of the text file
    string line;

    // inputFile is the identifier of ifstream class
    ifstream inputFile;

    // Opens the text file
    inputFile.open(fileName);

    // Checks if the file has been successfully open
    if(inputFile.is_open())
    {
        // Reads in the first line which is the size of the array
        inputFile >> line;

        // converting the line to an int and storing it in the variable arraySize 
        *arraySize = stoi(line);
        
        // Dynamically allocating the array
        int *myArray = (int*) malloc(sizeof(*arraySize));

        // While loop to read the file line by line to read the numbers into the array
        short i = 0;
        while(inputFile >> line)
        {
            myArray[i] = stoi(line);
            i++;
        }

        // Closing the file
        inputFile.close();
        
        // Returning the array to main function
        return myArray;
    }
    else // Something went wrong opening the file
    {
        // Return NULL to exit out the program
        // from the main function
        cerr << "Unable to open the file.\n";
        return NULL;
    }
}