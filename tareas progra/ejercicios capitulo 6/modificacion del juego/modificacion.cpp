#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int numero = rand() % 1000 + 1;
    int intento;
    int contador = 0;
    char opcion;

    do {
        contador = 0;
        numero = rand() % 1000 + 1;

        cout << "Tengo un numero entre 1 y 1000.\n";
        cout << "¿Puedes adivinar mi numero?\n";
        cout << "Escribe tu primer intento: ";

        cin >> intento;
        contador++;

        while(intento != numero) {
            if(intento < numero) {
                cout << "Demasiado bajo. Intenta de nuevo: ";
            } else {
                cout << "Demasiado alto. Intenta de nuevo: ";
            }

            cin >> intento;
            contador++;
        }

        cout << "Excelente! Adivinaste el numero!\n";


        if(contador < 10) {
            cout << "O sabes el secreto o tuviste suerte!\n";
        } else if(contador == 10) {
            cout << "Aha! Sabes el secreto!\n";
        } else {
            cout << "Deberias poder hacerlo mejor!\n";
        }

        cout << "¿Quieres jugar otra vez? (s/n): ";
        cin >> opcion;

    } while(opcion == 's' || opcion == 'S');

    return 0;
}
