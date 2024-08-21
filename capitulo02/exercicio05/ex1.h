#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

class GradeBook
{
    public:
        GradeBook(string courseName)
        {
            setCourseName(courseName);
        }

        void setCourseName(string courseName)
        {
            this->courseName = courseName;
        }

        string getCourseName()
        {
            return this->courseName;
        }

        void displayMessage()
        {
            cout << "Welcome ti the GradeBook for \n " << getCourseName()
                 << endl;
        }

    private:
        string courseName;
};