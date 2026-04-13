#include <iostream>
#include <cmath>
using namespace std;

void hanoiIterativo(int n, char origen, char auxiliar, char destino) {
    int movimientos = pow(2, n) - 1;

    for (int i = 1; i <= movimientos; i++) {
        cout << "Movimiento " << i << endl;
    }
}

int main() {
    int n;
    cout << "Ingrese numero de discos: ";
    cin >> n;

    hanoiIterativo(n, 'A', 'B', 'C');
    return 0;
}
