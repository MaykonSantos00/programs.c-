#include<iostream>
#include "GradeBook.h"
using namespace std;

GradeBook::GradeBook(string courseName)
{
    setCourseName(courseName);
}

void GradeBook::displayMessage()
{
    cout << "Welcome to the grade book for\n" << getCourseName() << "!\n"
    << endl;
}

void GradeBook::determineClassAverage()
{
    int total;
    int gradeCounter;
    int grade;
    int average;

    total = 0;
    gradeCounter = 1;

    while(gradeCounter <= 10)
    {
        cout << "Enter Grade: ";
        cin >> grade;
        total += grade;
        gradeCounter += 1;
    }

    average = total / 10;
    cout << "\nTotal of all 10 grades is " << total << endl;
    cout << "“Class average is " << average << endl;
}

void GradeBook::setCourseName(string courseName)
{
    if(courseName.length() <= 25)
    {
        this->courseName = courseName;
    }else
    {
        this->courseName = courseName.substr(0, 25);
        cout << "courseName \"" << courseName << "\" exceeds maximum length (25).\n" <<
        "Limiting courseName to first 25 characters.\n" << endl;
    }
    
}

string GradeBook::getCourseName()
{
    return this->courseName;
}

