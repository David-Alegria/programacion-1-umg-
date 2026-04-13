#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void mensajeCorrecto() {
    string mensajes[] = {"Muy bien!", "Excelente!", "Buen trabajo!", "Sigue así!"};
    cout << mensajes[rand() % 4] << endl;
}

void mensajeIncorrecto() {
    string mensajes[] = {"No. Por favor intente de nuevo.", "Incorrecto. Intenta una vez más.", "No te rindas!", "No. Sigue intentando."};
    cout << mensajes[rand() % 4] << endl;
}

void nuevaPregunta() {
    int a = rand() % 10;
    int b = rand() % 10;
    int respuesta;

    cout << "¿Cuánto es " << a << " por " << b << "? ";
    while (true) {
        cin >> respuesta;
        if (respuesta == a * b) {
            mensajeCorrecto();
            break;
        } else {
            mensajeIncorrecto();
        }
    }
}

int main() {
    srand(time(0));
    while (true) {
        nuevaPregunta();
    }
}

