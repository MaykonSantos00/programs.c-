#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::getline;
using std::string;

class GradeBook
{
public:
    void setCourseName(string courseName)
    {
        this->courseName = courseName;
    }


private:
    string courseNames;

};