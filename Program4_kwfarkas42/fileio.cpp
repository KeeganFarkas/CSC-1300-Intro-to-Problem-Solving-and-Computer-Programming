#include "student.h"    // Including the structure file
#include <fstream>      // Library to work with files
#include <iostream>
#include <string>
using namespace std;

// Utility function to process the text file and return
// an array to structure variable
Student* ReadFile(char *fileName, int* size)
{
    // line variable will scan each line of the text file
    string line;
    // inputFile is the identifier of ifstream class
    ifstream inputFile;
    // Open the text file
    inputFile.open(fileName);

    // Check if the file has been successfully open
    if(inputFile.is_open())
    {
        // Insert code here
        inputFile >> line; 

        //assigning the size of array from text file to size variable
        *size = stoi(line);

        //Dynamically allocating array of structures
        Student *Array = new Student[*size];
    
        //for loop to go through each structure in the array
        for (short i = 0; i < *size; i++)
        {
            inputFile.ignore();   
            //Assigning the name from file to fullName 
            getline(inputFile, line);
            Array[i].fullName = line;

            //Assigning the quiz grades from file to quizMarks
            inputFile >> line;
            Array[i].quizMarks = stod(line);
            
            //Assigning the midterm grades from file to midtermMarks
            inputFile >> line;
            Array[i].midtermMarks = stod(line);
            
            //Assigning the final grades from file to finaltermMarks
            inputFile >> line;
            Array[i].finaltermMarks = stod(line);
        }

        // Close the file
        inputFile.close();

        // Change the following line to return the dyanamic
        // array to structure that you are going to build above
        return Array;
    }
    else // Something went wrong opening the file
    {
        // Return NULL to exit out the program
        // from the main function
        cerr << "Unable to open the file.\n";
        return NULL;
    }
}