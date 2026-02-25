#include <iostream>
using namespace std;

int main() {

    int numero = 0;
    bool salir = false;

    while (!salir) {

        cout << "Ingresa un numero (negativo para salir): ";
        cin >> numero;

        if (numero < 0) {
            salir = true;  // en lugar de break
        }
        else {
            cout << "Numero que ingreso: " << numero << endl;
        }
    }

    return 0;
}
