#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h"

GradeBook::GradeBook(string courseName)
{
    setCourseName(courseName);
}

void GradeBook::setCourseName(string courseName)
{
    if (courseName.length() <= 25)
    {
        this->courseName = courseName;

    }else if(courseName.length() > 25)
    {
        this->courseName = courseName.substr(0, 25);

        cout << "Name \"" << courseName << "\" exceeds maximum length (25).\n"
        << "Limiting courseName to first 25 characters.\n" << endl;
    }
    
}

string GradeBook::getCourseName()
{
    return this->courseName;
}

void GradeBook::displayMessage()
{
    cout << "Welcome to the grade book for\n" << getCourseName()
        << "!" << endl;

}