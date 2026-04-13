#include <iostream>
using namespace std;

int mcd(int a, int b) {
    while(b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int num1, num2;

    cout << "Ingrese dos numeros: ";
    cin >> num1 >> num2;

    cout << "El MCD es: " << mcd(num1, num2) << endl;

    return 0;
}
