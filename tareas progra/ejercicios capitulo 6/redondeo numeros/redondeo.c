#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    double redondeado = floor(numero + 0.5);

    cout << "Original: " << numero << endl;
    cout << "Redondeado: " << redondeado << endl;

    return 0;
}
