#include <iostream>
using namespace std;

class Date
{
    private:
        int day;
        int month;
        int year;

    public:
        Date(int day, int month, int year)
        {
            setDay(day);
            setMonth(month);
            setYear(year);
        }

        void displayDate()
        {
            cout << getDay() << "/" << getMonth() << "/" << getYear() << endl;
        }

        void setDay(int day)
        {
            if(day < 1 && day > 31)
            {
                cout << "The day is invalid" << endl;
                this->day = 1;
            }else
            {
               this->day = day; 
            }
        }

        int getDay()
        {
            return this->day;
        }

        void setMonth(int month)
        {
            if (month < 1 && month > 12)
            {
                cout << "The month is invalid" << endl;
                this->month = 1;
            }else
            {
               this->month = month; 
            }
        }

        int getMonth()
        {
            return this->month;
        }

        void setYear(int year)
        {
            if (year != 2024)
            {
                cout << "The year is invalid " << endl;
                this->year = 1;
            }else
            {
                this->year = year;
            }
            
        }

        int getYear()
        {
            return this->year;
        }


};