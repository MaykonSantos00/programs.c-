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
    string getCourseName()
    {
        return this->courseName;
    }
    void displayMessage()
    {
        cout << " Welcome to the grade book for\n " << getCourseName() << "!" << endl;
    }


private:
    string courseName;

};

int main()
{
    GradeBook myGradeBook;
    string courseName;

    cout << "Initial course name is: " << myGradeBook.getCourseName() << endl;

    cout << "Please, Enter your course Name \n";
    getline(cin, courseName);
    myGradeBook.setCourseName("courseName");
    
    myGradeBook.displayMessage();

    return 0;
}