#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

class GradeBook
{

    public:
        GradeBook(string courseName){
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
            cout << " Welcome to the GradeBook for\n" << getCourseName() << endl;
        }

    private:
        string courseName;

};

int main(){

    GradeBook gradeBook1 = GradeBook("Eletrical Enginner");
    GradeBook gradeBook2 = GradeBook("Civil Enginner ");

    cout << "GradeBook1 created for course: " << gradeBook1.getCourseName()
        << "\nGradeBook2 create for course: " << gradeBook2.getCourseName()
        << endl;
    return 0;
}