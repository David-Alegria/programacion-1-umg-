#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Introduzca tres enteros distintos: ";
    cin >> a >> b >> c;

    int suma = a + b + c;
    int promedio = suma / 3;
    int producto = a * b * c;

    int menor = a;
    if (b < menor) menor = b;
    if (c < menor) menor = c;

    int mayor = a;
    if (b > mayor) mayor = b;
    if (c > mayor) mayor = c;


    cout << "La suma es " << suma << endl;
    cout << "El promedio es " << promedio << endl;
    cout << "El producto es " << producto << endl;
    cout << "El menor es " << menor << endl;
    cout << "El mayor es " << mayor << endl;

    return 0;
}
