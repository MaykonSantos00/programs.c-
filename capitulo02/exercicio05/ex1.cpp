#include <iostream>
using std::cout;
using std::endl;

#include "ex1.h"

int main()
{
    GradeBook gradeBook1("Eletrical Enginner");
    GradeBook gradeBook2("Civil Enginner");

    cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
        << "\ngradeBook2 created for couse: " << gradeBook2.getCourseName()
        << endl;

    return 0;
}
