#include "Ex1.h"

using namespace std;

void Ex1::calcularTanque()
{
    quilometros = 0;
    litrosGasolina = 0;
    qtdDeTanques = 0;
    totalGasolina = 0;

    cout << "Entre com a quilometragem(-1 para sair): ";
    cin >> quilometros;
    
    while(quilometros != (-1))
    {
        cout << "Digite os Litros: ";
        cin >> litrosGasolina;
        
        totalGasolina += litrosGasolina;
        qtdDeTanques++;

        cout << "km/litro deste tanque: " << quilometros/litrosGasolina << endl;
        cout << "Total km/litro: " << totalGasolina << endl;
        
        cout << "Entre com a quilometragem(-1 para sair): ";
        cin >> quilometros;

    }


};