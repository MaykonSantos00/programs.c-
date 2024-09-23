#include <iostream>
using namespace std;

void function0(int);
void function1(int);
void function2(int);

int main()
{
    // inicializa array de 3 ponteiros para funções que
    // aceitam um argumento int e retornam void 
    void (*f[3])(int) = {function0, function1, function2};
    
    int choice;

    cout << "Enter a number between 0 and 2, 3 to end: ";
    cin >> choice;

    //processa a escolha do usuario
    while ((choice >= 0) && (choice < 3))
    {
        // invoca a função na localização choice no
        // array f e passa choice como um argumento
        (*f[ choice ])( choice ); 

        cout << "Enter a number between 0 and 2, 3 to end: ";
        cin >> choice;
    }
    
    cout << "Program execution completed." << endl;

    return 0;
}

void function0(int a)
{
    cout << "You entered " << a << " so function0 was called\n\n";
}

void function1(int b)
{
    cout << "You entered " << b << " so function1 was called\n\n";
}

void function2(int c)
{
    cout << "You entered " << c << " so function2 was called\n\n";
}
