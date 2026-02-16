#include <iostream>
using namespace std;

int main() {
    char caracter;

    cout << "Introduzca un carácter: ";
    cin >> caracter;

    cout << "El carácter es: " << caracter << endl;
    cout << "Su equivalente entero es: " << static_cast<int>(caracter) << endl;

    return 0;
}
