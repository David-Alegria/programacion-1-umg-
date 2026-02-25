#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double principal = 24.0;
    int anios = 387;
    double monto;

    cout << "Tasa Monto final" << endl;

    for (double tasa = 0.05; tasa <= 0.10; tasa += 0.01) {

        monto = principal;

        for (int i = 1; i <= anios; i++) {
            monto *= (1 + tasa);
        }

        cout << tasa * 100 << "%\t$" << monto << endl;
    }

    return 0;
}
