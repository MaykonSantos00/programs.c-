#include <iostream>
#include <string>
#include "Employee.h"
using namespace std;


int main()
{
    Employee employee("Maykon", "Santos", 200);
    cout << "The " << employee.getName() << " " << employee.getSurname() << " has one wage annual of " << 
    12 * employee.getWage() << endl;

    cout << "adjustment of the ten porcent, equals:  " << 12 * ( employee.getWage() + (employee.getWage() * 0.1));
}