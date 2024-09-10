#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    int x = 0;
    int val = 0;
    while (x < 20)
    {
        val++;
        x++;
        if (val == 6)
        {
            cout << endl;
        }else if(val == 11){
            cout << endl;
        }else if(val == 16){
            cout << endl;
        }
        cout << val << " ";
    }
    
    

    
}