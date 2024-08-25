#include<iostream>
#include<iomanip>

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
    double average;

    total = 0;
    gradeCounter = 0;

    cout << "Enter Grade or -1 to quit:";
    cin >> grade;

    while(grade != (-1))
    {
        total += grade;
        gradeCounter += 1;

        cout << "Enter Grade or -1 to quit:";
        cin >> grade;
    }

    if (gradeCounter != 0)
    {
        average = static_cast<double> (total)/ gradeCounter;

        cout << "“\nTotal of all " << gradeCounter << "  grades entered is " <<
        total << total << endl;

        cout << "Class average is " << setprecision(2) << fixed << average << endl;

    }else{
        cout << "No grades were entered" << endl;
    }
    

    average = total / 10;
    cout << "\nTotal of all 10 grades is " << total << endl;
    cout << "Class average is " << average << endl;
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

