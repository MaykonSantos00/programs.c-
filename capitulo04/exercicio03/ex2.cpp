#include <iostream>
#include "ex2.h"

using namespace std;

GradeBook::GradeBook(string courseName){
    setCoursecourseName(courseName);
    aCount = 0;
    bCount = 0;
    cCount = 0;
    dCount = 0;
    fCount = 0;
}

void GradeBook::setCoursecourseName(string name){
    if (name.length() <= 25)
    {
        this->courseName;
    }else{
        this->courseName = name.substr(0, 25);
        cout << "Name   \"" << name << "\" exceeds maximun length (25). \n"
        << "“Limiting courseName to first 25 characters.\n" << endl;

    }
    
}

string GradeBook::getCourseName(){
    return this->courseName;
}

void GradeBook::displayGradesReport(){
    cout << "Welcome to the GradeBookf for \n" << getCourseName()
    << "!\n" << endl;
}

void GradeBook::inputGrades(){
    int grade;
    
    cout << "Enter the letter grades." << endl;
    cout << "Enter the EOF character to end input." << endl;

    while (( grade = cin.get() ) != EOF)
    {
        switch (grade)
        {
        case 'A':
        case 'a':
            aCount++;
            break;

        case 'B':
        case 'b':
            bCount++;
            break;

        case 'C':
        case 'c':
            cCount++;
            break;

        case 'D':
        case 'd':
            dCount++;
            break;

        case 'F':
        case 'f':
            fCount++;
            break;

        default:
        cout << "Incorrect letter grade entered." 
            << "Enter a new Grade." << endl;
            break;
        }
    }
    
}


