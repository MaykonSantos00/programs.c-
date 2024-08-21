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

        void setBalance(int balance)
        {
            if (balance < 0 ){
                this->balance = 0;
                
                cout << "The Balance is invalid, because the value is fewer than zero" << endl;

            }else{
                this -> balance = balance;
            }
            
        }

        int getBalance()
        {
            return this->balance;
        }


};