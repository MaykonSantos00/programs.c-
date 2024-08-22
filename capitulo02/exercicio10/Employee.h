#include <string>
using namespace std;

class Employee
{
    private:
        string name;
        string surname;
        int wage;


    public:
        Employee(string name, string surname, int wage)
        {
            setName(name);
            setSurname(surname);
            setWage(wage);
        }

        void setName(string name)
        {
            this->name = name;           
        }

        string getName()
        {
            return this->name;
        }

        void setSurname(string surname)
        {
            this->surname = surname;
        }

        string getSurname()
        {
            return this->surname;
        }

        void setWage(int wage)
        {
            this->wage = wage;
        }

        int getWage()
        {
            return this->wage;
        }


};