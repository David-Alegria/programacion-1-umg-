#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int lanzarMoneda() {
    return rand() % 2;
}

int main() {
    srand(time(0));

    int caras = 0;
    int cruces = 0;

    cout << "Lanzamientos de moneda:\n";

    for(int i = 1; i <= 100; i++) {
        int resultado = lanzarMoneda();

        if(resultado == 0) {
            cout << "Cara" << endl;
            caras++;
        } else {
            cout << "Cruz" << endl;
            cruces++;
        }
    }

    cout << "\nResultados finales:\n";
    cout << "Caras: " << caras << endl;
    cout << "Cruces: " << cruces << endl;

    return 0;
}
