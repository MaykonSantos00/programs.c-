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
    this->courseName = courseName;
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