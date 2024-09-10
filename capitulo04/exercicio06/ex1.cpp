#include <iostream>
using namespace std;

int main(){
    // cria a tabela-verdade para o operador && (E logico)
    cout << boolalpha << "Logical AND (&&)"
        << "\nfalse && false: " << (false && false)
        << "\nfalse && true: " << (false && true)
        << "\ntrue && false: " << (true && false)
        << "\ntrue && true: " << (true && true) << "\n\n";

    // cria a tabela-verdade para o operador || (OU lógico)
    cout << "Logical OR (||)"
        << "\nfalse || false: " << (false || false)
        << "\nfalse || true: " << (false || true)
        << "\ntrue || false: " << (true || false)
        << "\ntrue || true: " << (true || true) << "\n\n";

    //cria a tabela-verdade para o operador ! (negação lógica)
    cout << "Logical NOT (!)"
        << "\n!false: " << (!false)
        << "\n!true: " << (!true) << endl;
    return 0;
}