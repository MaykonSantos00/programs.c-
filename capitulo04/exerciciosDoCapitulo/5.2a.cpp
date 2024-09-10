#include <iostream>
using namespace std;

int main(){
    int sum = 0;
    int count = 0;

    for (count = 1; count <= 99; count++)
    {
        if (count % 2 == 1)
        {
            sum += count;
        }
    }
    cout << sum << "\n";
}