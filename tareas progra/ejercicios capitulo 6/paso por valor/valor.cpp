#include <iostream>
using namespace std;


int triplicarPorValor(int cuenta) {
    cuenta = cuenta * 3;
    return cuenta;
}


void triplicarPorReferencia(int &cuenta) {
    cuenta = cuenta * 3;
}

int main() {
    int cuenta = 10;

    cout << "Valor inicial de cuenta: " << cuenta << endl;


    int resultado = triplicarPorValor(cuenta);
    cout << "Resultado por valor: " << resultado << endl;
    cout << "Cuenta despues de triplicarPorValor: " << cuenta << endl;


    triplicarPorReferencia(cuenta);
    cout << "Cuenta despues de triplicarPorReferencia: " << cuenta << endl;

    return 0;
}

