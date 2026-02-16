#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e;

    cout << "Introduzca cinco enteros: ";
    cin >> a >> b >> c >> d >> e;

    int menor = a;
    int mayor = a;

    if (b < menor) menor = b;
    if (c < menor) menor = c;
    if (d < menor) menor = d;
    if (e < menor) menor = e;

    if (b > mayor) mayor = b;
    if (c > mayor) mayor = c;
    if (d > mayor) mayor = d;
    if (e > mayor) mayor = e;

    cout << "El menor es " << menor << endl;
    cout << "El mayor es " << mayor << endl;

    return 0;
}
