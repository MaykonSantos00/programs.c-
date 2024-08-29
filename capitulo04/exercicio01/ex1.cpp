/*
Uma pessoa investe $ 1.000,00 em uma conta-poupança que rende 5% de juros. Supondo que todos os juros sejam deixados na conta,
calcule e imprima o valor em dinheiro na conta ao fim de cada ano durante 10 anos. Utilize a seguinte fórmula para determinar
essas quantidades:
a = p (1 + r)
n
 onde
p é a quantidade original investida (isto é, o principal)
r é a taxa de juros anual
n é o número de anos e
a é a quantidade em depósito no fim do n-ésimo ano
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double amount; 
    double principal = 1000;
    double rate;

    cout << setw(6) << "Year" << setw(24) << "Amount on deposit" << endl;

    cout << fixed << setprecision(2);

    for (int i = 1; i <= 10; i++)
    {
        amount = principal * pow(1 + rate, i); 

        cout << setw(4) << i << setw(21) << amount << endl;
    }

    return 0;
    
}