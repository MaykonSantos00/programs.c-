#include <iostream>
using namespace std;

int main(){

    char c;
    short s;
    int i;
    long l;
    float f;
    double d;
    long double ld;
    int array[20];
    int *ptr = array;

    cout << "sizeof c = " << sizeof c
        << "\nsizeof (shar) = " << sizeof(char)
        << "\nsizeof s = " << sizeof s
        << "\nsizeof (short) = " << sizeof(short)
        << "\nsizeof i = " << sizeof i
        << "\nsizeof (int) = " << sizeof(int)
        << "\nsizeof l = " << sizeof l
        << "\nsizeof (long) = " << sizeof(long)
        << "\nsizeof f = " << sizeof f
        << "\tsizeof(float) = " << sizeof( float )
        << "\nsizeof d = " << sizeof d
        << "\tsizeof(double) = " << sizeof( double )
        << "\nsizeof ld = " << sizeof ld
        << "\tsizeof(long double) = " << sizeof( long double )
        << "\nsizeof array = " << sizeof array
        << "\nsizeof ptr = " << sizeof ptr << endl;

    return 0;
}