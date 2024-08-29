#include <string>
using namespace std;

class GradeBook
{
public:
    GradeBook(string);
    void setCoursecourseName(string);
    string getCourseName();
    void displayMessage();   
    void inputGrades();
    void displayGradesReport();

private:
    string courseName;  
    int aCount;
    int bCount;
    int cCount;
    int dCount;
    int fCount;

};