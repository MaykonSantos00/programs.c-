#include<string>
using namespace std;

class GradeBook
{
    private:
        string courseName;
    
    public:
        GradeBook(string courseName);
        void setCourseName(string courseName);
        string getCourseName();
        void displayMessage();
        void determineClassAverage();
};