#include <string>
using std::string;

class GradeBook
{
    private:
        string courseName;

    public:
        GradeBook(string courseName);
        void setCourseName(string couseName);
        string getCourseName();
        void displayMessage(); 
};