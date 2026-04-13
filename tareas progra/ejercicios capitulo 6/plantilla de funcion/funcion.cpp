#include <iostream>
using namespace std;

template <class T>
T minimo(T a, T b) {
    return (a < b ? a : b);
}

int main() {
    cout << minimo(5, 9) << endl;
    cout << minimo('a', 'z') << endl;
    cout << minimo(3.14, 2.71) << endl;
}

