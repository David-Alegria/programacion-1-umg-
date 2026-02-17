#include <iostream>
using namespace std;

int main() {
    double kilometroPorDia, costoLitro, kilometroPorLitro, estacionamiento, peaje;

    cout << "Total de kilómetros conducidos por día: ";
    cin >> kilometroPorDia;

    cout << "Costo por litro de gasolina: ";
    cin >> costoLitro;

    cout << "Promedio de kilómetros por litro: ";
    cin >> kilometroPorLitro;

    cout << "Cuotas de estacionamiento por día: ";
    cin >> estacionamiento;

    cout << "Peaje por día: ";
    cin >> peaje;


    double litrosUsados = kilometroPorDia / kilometroPorLitro;
    double costoGasolina = litrosUsados * costoLitro;


    double costoTotal = costoGasolina + estacionamiento + peaje;

    cout << "El costo diario de conducir es: Q" << costoTotal << endl;

    return 0;
}
