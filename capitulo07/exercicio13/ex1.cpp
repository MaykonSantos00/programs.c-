#include <iostream>
#include <iomanip>
using namespace std;

void selectionSort(int [], const int, bool (*)(int, int));
void swap(int * const, int * const);
bool ascending(int, int);
bool descending(int, int);

int main()
{
    const int arraySize = 10;
    int order; // 1 = crescente, 2 = decrescente
    int counter; //indice do array
    int a[arraySize] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};

    cout << "Enter 1 to sort in ascending order,\n"
        << "Enter 2 to sort in descending order: ";
    
    cin >> order;

    cout << "\nData items in original order\n";

    //gera a saida do array original
    for (counter = 0; counter < arraySize; counter++)
    {
        cout << setw(4) << a[counter];
    }
    
    // classifica o array em ordem crescente; passa a função ascending
    // como um argumento para especificar a ordem de classificação ascendente
    
    if (order == 1)
    {
        selectionSort(a, arraySize, ascending);
        cout << "\nData items in ascending order\n";
    }else
    {
        selectionSort(a, arraySize, descending);
        cout << "\nData items in descending order\n";
    }
    
    // gera a saída do array classificado
    for (counter = 0; counter < arraySize; counter++)
    {
        cout << setw(4) << a[counter];
    }

    cout << endl;
    return 0;
}

// classificação por seleção para múltiplos propósitos; o parâmetro compare é um ponteiro para
// a função compare que determina a ordem de classificação
void selectionSort(int work[], const int size, bool (*compare)(int, int))
{
    int smallestOrLargest; //índice do menor (ou maior) elemento

    //itera sobre size - 1 elementos
    for (int i = 0; i < size - 1; i++)
    {
        smallestOrLargest = i; // primeiro índice do vetor restante

        // itera para localizar o índice do menor (ou maior) elemento
        for (int index = 0; index < size; index++)
        {
            if (!(*compare)(work[smallestOrLargest], work[index]))
            {
                smallestOrLargest = index;
            }         
        }
        swap( &work[smallestOrLargest], &work[i]);
    }
};

// troca os valores nas posições da memória para as quais
// element1Ptr e element2Ptr apontem
void swap(int * const element1Ptr, int * const element2Ptr)
{
    int hold = *element1Ptr;
    *element1Ptr = *element2Ptr;
    *element2Ptr = hold;
}

// determina se o elemento a é menor que o
// elemento b para uma classificação em ordem crescente
bool ascending(int a, int b)
{
    return a < b; // retorna true se a for menor que b
}

// determina se o elemento a é maior que o
// elemento b para uma classificação em ordem decrescente
bool descending(int a, int b)
{
    return a > b; // retorna true se a for maior que b 
}
