#include <iostream>
using namespace std;

int main() {

    int a, b, c;

    cout << "Ingrese tres numeros: ";
    cin >> a >> b >> c;

    if (a == 0 || b == 0 || c == 0) {
        cout << "No pueden ser cero";
    }
    else {

        if (a*a == b*b + c*c) {
            cout << "Es triangulo recto";
        }
        else if (b*b == a*a + c*c) {
            cout << "Es triangulo recto";
        }
        else if (c*c == a*a + b*b) {
            cout << "Es triangulo recto";
        }
        else {
            cout << "No es triangulo recto";
        }

    }

    return 0;
}
