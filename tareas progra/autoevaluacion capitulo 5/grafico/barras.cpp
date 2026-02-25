#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese numeros entre 1 y 30: " << endl;
    cin >> numero;

    while (numero != 0) {
        if (numero >= 1 && numero <= 30) {
            for (int i = 1; i <= numero; i++) {
                cout << "*";
            }
            cout << endl;
        } else {
            cout << "Numero fuera de rango." << endl;
        }

        cin >> numero;
    }

    return 0;
}
