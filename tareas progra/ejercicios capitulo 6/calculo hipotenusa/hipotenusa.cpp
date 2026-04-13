#include <iostream>
#include <cmath>
using namespace std;

double hipotenusa(double a, double b) {
    return sqrt(a*a + b*b);
}

int main() {
    cout << hipotenusa(3.0, 4.0) << endl;
    cout << hipotenusa(5.0, 12.0) << endl;
    cout << hipotenusa(8.0, 15.0) << endl;
    return 0;
}
