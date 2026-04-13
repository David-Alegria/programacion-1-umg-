#include <iostream>
using namespace std;

double minimo(double a, double b, double c) {
    double menor = a;

    if(b < menor) {
        menor = b;
    }

    if(c < menor) {
        menor = c;
    }

    return menor;
}

int main() {
    double x, y, z;

    cout << "Ingrese tres numeros: ";
    cin >> x >> y >> z;

    cout << "El menor es: " << minimo(x, y, z) << endl;

    return 0;
}
