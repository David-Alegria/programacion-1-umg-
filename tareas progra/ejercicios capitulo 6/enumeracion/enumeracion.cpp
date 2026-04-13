#include <iostream>
using namespace std;


enum class TipoCuenta { AHORROS, CHEQUES, INVERSION };

int main() {
    TipoCuenta cuenta = TipoCuenta::CHEQUES;

    switch (cuenta) {
        case TipoCuenta::AHORROS:
            cout << "Cuenta de ahorros\n";
            break;
        case TipoCuenta::CHEQUES:
            cout << "Cuenta de cheques\n";
            break;
        case TipoCuenta::INVERSION:
            cout << "Cuenta de inversión\n";
            break;
    }

    return 0;
}

