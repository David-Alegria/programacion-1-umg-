#include <iostream>
using namespace std;

int main() {
    char letra;
    int totalPuntos = 0;
    int contador = 0;

    cout << "Ingrese calificaciones (A, B, C, D, F). X para salir: ";
    cin >> letra;

    while (letra != 'X') {

        switch (letra) {
            case 'A': totalPuntos += 4; break;
            case 'B': totalPuntos += 3; break;
            case 'C': totalPuntos += 2; break;
            case 'D': totalPuntos += 1; break;
            case 'F': totalPuntos += 0; break;
            default: cout << "Letra invalida" << endl;
        }

        contador++;
        cin >> letra;
    }

    if (contador > 0) {
        double promedio = (double) totalPuntos / contador;
        cout << "Promedio: " << promedio << endl;
    }

    return 0;
}
