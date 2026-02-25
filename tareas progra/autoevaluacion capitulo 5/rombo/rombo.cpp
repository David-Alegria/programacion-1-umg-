#include <iostream>
using namespace std;

int main() {

    for (int i = 1; i <= 5; i++) {
        for (int espacio = 5; espacio > i; espacio--)
            cout << " ";

        for (int estrella = 1; estrella <= 2 * i - 1; estrella++)
            cout << "*";

        cout << endl;
    }

    for (int i = 4; i >= 1; i--) {
        for (int espacio = 5; espacio > i; espacio--)
            cout << " ";

        for (int estrella = 1; estrella <= 2 * i - 1; estrella++)
            cout << "*";

        cout << endl;
    }

    return 0;
}
