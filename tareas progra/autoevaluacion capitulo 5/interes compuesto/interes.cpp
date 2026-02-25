#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double principal = 1000.0;

    for (int tasa = 5; tasa <= 10; tasa++) {

        cout << "Tasa: " << tasa << "%" << endl;

        for (int anio = 1; anio <= 10; anio++) {
            double monto = principal * pow(1 + tasa / 100.0, anio);
            cout << "Año " << anio << ": " << monto << endl;
        }

        cout << endl;
    }

    return 0;
}
