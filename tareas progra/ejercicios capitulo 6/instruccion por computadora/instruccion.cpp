#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int generarNumero(int nivel) {
    return rand() % (nivel * 10);
}

int main() {
    srand(time(0));
    int nivel;
    cout << "Ingrese nivel de dificultad (1, 2, 3...): ";
    cin >> nivel;

    int a = generarNumero(nivel);
    int b = generarNumero(nivel);
    int respuesta;

    cout << "¿Cuánto es " << a << " por " << b << "? ";
    cin >> respuesta;

    if (respuesta == a * b)
        cout << "Muy bien!\n";
    else
        cout << "Incorrecto.\n";
}

