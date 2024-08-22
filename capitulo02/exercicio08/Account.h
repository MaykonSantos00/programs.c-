#include <string>
#include <iostream>

using namespace std;

class Account
{
    private:
        int balance;

    public:
        Account(int balance)
        {
            setBalance(balance);
        } 

        void credit(int value)
        {
            setBalance(value + this->balance);
        }

        void debit(int value)
        {
            if(value < 0)
            {
                cout << "Value is invalid" << endl;
            }else if(value > this->balance)
            {
                cout << "Debit amount exceeded account balance" << endl;           
            }else
            {
                setBalance(this->balance - value);
            }
        }

        void setBalance(int balance)
        {
            if (balance < 0 )
            {
                this->balance = 0;
                
                cout << "The Balance is invalid, because the value is fewer than zero" << endl;

            }else
            {
                this -> balance = balance;
            }
            
        }

        int getBalance()
        {
            return this->balance;
        }


};