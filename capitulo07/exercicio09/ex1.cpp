#include <iostream>
using namespace std;

size_t getSize(double *);

int main(){

    double array[20];// 20 doubles; o que ocupa 160 bytes em nosso sistema

    cout << "The number of bytes returned by getSize is "
    << getSize(array) << endl;

    return 0;
}

// retorna o tamanho de ptr
size_t getSize(double *ptr)
{
    return sizeof(ptr);
}