#include <iostream>
#include <string>
#include "Invoice.h"
using namespace std;

int main()
{
    Invoice invoice("12345", "produtor de maquiar", 20, 10);
    int a = invoice.getInvoiceAmount();
    if (a < 0)
    {
        cout << " The quantities of fature is 0 " << endl;
    }else{
        cout << "the invoice is R$" << a << endl; 
    }
    
    return 0;
}