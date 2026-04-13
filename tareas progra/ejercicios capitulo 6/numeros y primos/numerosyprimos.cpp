#include <iostream>
#include <cmath>
using namespace std;

bool esPrimo(int num) {
    if(num <= 1) {
        return false;
    }

    for(int i = 2; i <= sqrt(num); i++) {
        if(num % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    cout << "Numeros primos entre 1 y 100:\n";

    for(int i = 1; i <= 100; i++) {
        if(esPrimo(i)) {
            cout << i << " ";
        }
    }

    return 0;
}
