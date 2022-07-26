// Include all the header files required to run
// the driver code
#include "fileio.h"
#include "reports.h"
#include "utils.h"
#include "student.h"

#include <iostream>
using namespace std;

// Driver program
int main(int argc, char *argv[])
{
    // Declare a variable to store the total number of students
    int size = 0;

    // Check if the name of the file is passed
    if(argc != 2)
    {
        cerr << "The usage of the program: ./<name_of_the_exectuable> <name_of_the_text_file>" << endl;
        return -1;
    }
    
    // Create a dynamic array to stucture variable with
    // the help of ReadFile function
    Student *info = ReadFile(argv[1], &size);

    // Call the function to assign tech emails to each student
    AssignTechEmail(info, size);

    // Call the function to compute the total marks for every student
    ComputeTotalMarks(info, size);

    // Call the function to compute the letter grade for every student
    ComputeLetterGrade(info, size);
    
    // Call the function to display all the students' information
    StudentInformation(info, size);

    // Call the function to display best performance in quiz
    BestPerformanceInQuiz(info, size);

    // Call the function to display best performance in midterm
    BestPerformanceInMidterm(info, size);

    // Call the function to display best performance in finals
    BestPerformanceInFinalterm(info, size);

    // Call the function to display best performance based on total marks obtained
    BestPerformance(info, size);

    // Call the function to display the class average for all the marks
    ClassAverage(info, size);
    
    // Deallocate the dynamic memory allocated
    delete[]info;
    
    return 0;
}