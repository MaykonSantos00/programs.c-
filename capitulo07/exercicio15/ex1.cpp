#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char x[] = "Happy Birthday to you";// o comprimento da string é 21
    char y[25];
    char z[15];

    strcpy(y, x);

    cout << "The string in array x is: " << x
        << "\nThe string in array y is: " << y << '\n';

    // copia os primeiros 14 caracteres de x para z
    strncpy(z, x, 14);//nao copia caractere nulo
    z[14] = '\0'; //acrescenta '\0' ao conteudo de z

    cout << "The string in array z is: " << z << endl;  
    return 0;

    return 0;
}