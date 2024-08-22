#include <iostream>
#include "Account.h"
using namespace std;

int main()
{
    Account account1(2000000);
    Account account2(2000000);

    account1.credit(5000);
    account1.debit(10000000000000);

    account2.credit(5000);
    account2.debit(10000000000000);


    return 0;
}