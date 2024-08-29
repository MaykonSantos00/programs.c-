#include "ex2.cpp"
using namespace std;

int main(){

    GradeBook gradeBook("Eletrical Engineer");
    
    gradeBook.displayMessage();
    gradeBook.inputGrades();
    gradeBook.displayGradesReport();

    return 0;
}