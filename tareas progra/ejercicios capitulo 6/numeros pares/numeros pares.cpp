#include <iostream>
using namespace std;

bool esPar(int n) {
    if(n % 2 == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int num;

    cout << "Ingrese un numero: ";
    cin >> num;

    if(esPar(num)) {
        cout << "El numero es par";
    } else {
        cout << "El numero es impar";
    }

    return 0;
}
