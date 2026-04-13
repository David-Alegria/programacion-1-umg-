#include <iostream>
using namespace std;

int mcd(int x, int y) {
    if (y == 0)
        return x;
    else
        return mcd(y, x % y);
}

int main() {
    int a, b;
    cout << "Ingrese dos numeros: ";
    cin >> a >> b;

    cout << "MCD: " << mcd(a, b) << endl;
    return 0;
}
