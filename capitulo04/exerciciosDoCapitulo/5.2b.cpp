#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    cout << setw(15); 
    cout << fixed << setprecision(1);
    cout << 333.546372 << " ";

    cout << fixed << setprecision(2);
    cout << 333.546372 << " ";

    cout << fixed << setprecision(3);
    cout << 333.546372 << " ";
}