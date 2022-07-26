#include "student.h"    // Including the structure file

#include <iostream>
using namespace std;

void AssignTechEmail(Student *s, int totalStudents)
{
    int pos;

    for (short i = 0; i < totalStudents; i++)
    {
        //Creating the tech email and assigning it to techEmail
        s[i].techEmail = s[i].fullName.substr(0, 1);
        pos = s[i].fullName.find(" ");
        s[i].techEmail += s[i].fullName.substr(pos + 1);
        s[i].techEmail += "@tntech.edu";
    }
}

void ComputeTotalMarks(Student *s, int totalStudents)
{
    for (short i = 0; i < totalStudents; i++)
    {
        //Calculating the total grade and assigning it to totalMarks
        s[i].totalMarks = s[i].quizMarks + s[i].midtermMarks + s[i].finaltermMarks;
    }
}

void ComputeLetterGrade(Student *s, int totalStudents)
{
    for (short i = 0; i < totalStudents; i++)
    {
        //If statements to find the letter grade and assign it to letterGrade
        if (s[i].totalMarks >= 90)
            s[i].letterGrade = 'A';
        else if ((s[i].totalMarks >= 80) && (s[i].totalMarks <= 89))
            s[i].letterGrade = 'B';
        else if ((s[i].totalMarks >= 70) && (s[i].totalMarks <= 79))
            s[i].letterGrade = 'C';
        else if ((s[i].totalMarks >= 60) && (s[i].totalMarks <= 69))
            s[i].letterGrade = 'D';
        else if ((s[i].totalMarks >= 50) && (s[i].totalMarks <= 59))
            s[i].letterGrade = 'E';
        else if (s[i].totalMarks <= 49)
            s[i].letterGrade = 'F';
    }
}