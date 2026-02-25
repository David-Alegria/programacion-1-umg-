#include <iostream>
using namespace std;

int main() {
    int codigo;
    double salario;

    cout << "Ingrese codigo del empleado (1-4, 0 para salir): ";
    cin >> codigo;

    while (codigo != 0) {

        switch (codigo) {

            case 1: {
                cout << "Ingrese salario semanal fijo: ";
                cin >> salario;
                cout << "Salario: $" << salario << endl;
                break;
            }

            case 2: {
                double horas, pagoHora;
                cout << "Horas trabajadas: ";
                cin >> horas;
                cout << "Pago por hora: ";
                cin >> pagoHora;

                if (horas > 40)
                    salario = 40 * pagoHora + (horas - 40) * pagoHora * 1.5;
                else
                    salario = horas * pagoHora;

                cout << "Salario: $" << salario << endl;
                break;
            }

            case 3: {
                double ventas;
                cout << "Ventas semanales: ";
                cin >> ventas;
                salario = 250 + ventas * 0.057;
                cout << "Salario: $" << salario << endl;
                break;
            }

            case 4: {
                double piezas, pagoPorPieza;
                cout << "Numero de piezas: ";
                cin >> piezas;
                cout << "Pago por pieza: ";
                cin >> pagoPorPieza;
                salario = piezas * pagoPorPieza;
                cout << "Salario: $" << salario << endl;
                break;
            }

            default:
                cout << "Codigo invalido" << endl;
        }

        cout << "\nIngrese otro codigo (0 para salir): ";
        cin >> codigo;
    }

    return 0;
}
