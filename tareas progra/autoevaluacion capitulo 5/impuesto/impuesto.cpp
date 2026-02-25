#include <iostream>
using namespace std;

int main() {

    double alojamiento, comida, ropa, transporte, educacion, medico, vacaciones;
    double totalGastos, impuesto;

    cout << "Ingrese gastos en alojamiento: ";
    cin >> alojamiento;

    cout << "Ingrese gastos en comida: ";
    cin >> comida;

    cout << "Ingrese gastos en ropa: ";
    cin >> ropa;

    cout << "Ingrese gastos en transporte: ";
    cin >> transporte;

    cout << "Ingrese gastos en educacion: ";
    cin >> educacion;

    cout << "Ingrese gastos en servicios medicos: ";
    cin >> medico;

    cout << "Ingrese gastos en vacaciones: ";
    cin >> vacaciones;

    totalGastos = alojamiento + comida + ropa + transporte +
                  educacion + medico + vacaciones;

    impuesto = totalGastos * 0.23;

    cout << "Total de gastos: $" << totalGastos << endl;
    cout << "Impuesto estimado : $" << impuesto << endl;

    return 0;
}
