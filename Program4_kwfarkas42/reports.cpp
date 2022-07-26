#include "student.h"    // Including the structure file
#include <iostream>
using namespace std;

// The function to display all the students' information
// Details -> in the header file
void StudentInformation(Student *s, int totalStudents)
{
    cout << "Student Information" << endl;

    //for loop to go through array of structures and printing all of the student info
    for (short i = 0; i < totalStudents; i++)
    {
        cout << "Name: " << s[i].fullName << endl;
        cout << "Email: " << s[i].techEmail << endl;
        cout << "Quiz: " << s[i].quizMarks << endl;
        cout << "Midterm: " << s[i].midtermMarks << endl; 
        cout << "Final Term: " << s[i].finaltermMarks << endl;
        cout << "Total: " << s[i].totalMarks << endl;
        cout << "Grade: " << s[i].letterGrade << endl;
    }
}

// The function to display one student information who achieved
// the best score in quiz
// Details -> in the header file
void BestPerformanceInQuiz(Student *s, int totalStudents)
{
    cout << "\nBest Performance in Quiz\n";

    short j = 0;

    for (short i = 1; i < totalStudents; i++)
    {
        if (s[i].quizMarks > s[j].quizMarks)
            j = i;
    }
    cout << "Name: " << s[j].fullName << endl;
    cout << "Email: " << s[j].techEmail << endl;
    cout << "Quiz Marks: " << s[j].quizMarks << endl;
}

// The function to display one student information who achieved
// the best score in midterm
// Details -> in the header file
void BestPerformanceInMidterm(Student *s, int totalStudents)
{
    cout << "\nBest Performance in Midterm\n";

    short j = 0;

    for (short i = 1; i < totalStudents; i++)
    {
        if (s[i].midtermMarks > s[j].midtermMarks)
            j = i;
    }
    cout << "Name: " << s[j].fullName << endl;
    cout << "Email: " << s[j].techEmail << endl;
    cout << "Midterm Marks: " << s[j].midtermMarks << endl;
}

// The function to display one student information who achieved
// the best score in final term
// Details -> in the header file
void BestPerformanceInFinalterm(Student *s, int totalStudents)
{
    cout << "\nBest Performance in Final Term\n";

    short j = 0;

    for (short i = 1; i < totalStudents; i++)
    {
        if (s[i].finaltermMarks > s[j].finaltermMarks)
            j = i;
    }
    cout << "Name: " << s[j].fullName << endl;
    cout << "Email: " << s[j].techEmail << endl;
    cout << "Final Term Marks: " << s[j].finaltermMarks << endl;
}

// The function to display one student information who achieved
// the best score based on total marks
// Details -> in the header file
void BestPerformance(Student *s, int totalStudents)
{
    cout << "\nBest Performance in Total Marks\n";

    short j = 0;

    for (short i = 1; i < totalStudents; i++)
    {
        if (s[i].totalMarks > s[j].totalMarks)
            j = i;
    }
    cout << "Name: " << s[j].fullName << endl;
    cout << "Email: " << s[j].techEmail << endl;
    cout << "Total Marks: " << s[j].totalMarks << endl;
}

// The function to display the class average of quizzes, midterm,
// final term, and total marks.
// Details -> in the header file
void ClassAverage(Student *s, int totalStudents)
{
    cout << "\nClass Average" << endl;

    short quizAve = 0, midtermAve = 01, finaltermAve = 0, totalAve = 0;

    for (short i = 0; i < totalStudents; i++)
    {
        quizAve += s[i].quizMarks;
        midtermAve += s[i].midtermMarks;
        finaltermAve += s[i].finaltermMarks;
        totalAve += s[i].totalMarks;
    }

    cout << "Quiz Avg: " << quizAve / totalStudents << endl;
    cout << "Midterm Avg: " << midtermAve / totalStudents << endl;
    cout << "Final Term Avg: " << finaltermAve / totalStudents << endl;
    cout << "Total Avg: " << totalAve / totalStudents;
}