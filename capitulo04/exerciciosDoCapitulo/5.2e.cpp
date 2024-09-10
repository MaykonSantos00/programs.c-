#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    int u = 6;
    for (int i = 0; i <= 20; i++)
    {
        if (i == u)
        {
            cout << endl;
            u += 5;
        }   
        cout << i << " ";
        
    }
}