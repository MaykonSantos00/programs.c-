#include <iostream>
using namespace std;

int main(){

    int x = 5, y;

    const int *const ptr = &x;

    cout << *ptr << endl;

    //*ptr = 6; erro: *ptr é const; não é possível atribuir novo valor
    //ptr = &y;  error: ptr é const; não é possível atribuir endereço

    return 0;
}