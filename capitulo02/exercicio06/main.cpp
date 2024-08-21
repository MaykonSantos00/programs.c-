#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.cpp"

int main()
{
    GradeBook gradeBook1("Eletrical Enginner");
    GradeBook gradeBook2("Software Enginner");

    cout << "gradeBook1 created for course: " << gradeBook1.getCourseName() 
        << "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
        << endl;

    return 0;
}