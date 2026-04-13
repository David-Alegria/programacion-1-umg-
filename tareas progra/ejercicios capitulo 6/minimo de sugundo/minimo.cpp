#include <iostream>
using namespace std;

int calcularSegundos(int horas, int minutos, int segundos) {
    int total;

    total = horas * 3600;
    total = total + (minutos * 60);
    total = total + segundos;

    return total;
}

int main() {
    int h, m, s;

    cout << "Ingrese horas: ";
    cin >> h;

    cout << "Ingrese minutos: ";
    cin >> m;

    cout << "Ingrese segundos: ";
    cin >> s;

    int resultado = calcularSegundos(h, m, s);

    cout << "Total en segundos: " << resultado << endl;

    return 0;
}
