#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "a) " << fabs(7.5) << endl;
    cout << "b) " << floor(7.5) << endl;
    cout << "c) " << fabs(0.0) << endl;
    cout << "d) " << ceil(0.0) << endl;
    cout << "e) " << fabs(-6.4) << endl;
    cout << "f) " << ceil(-6.4) << endl;
    cout << "g) " << ceil(fabs(-8 + floor(-5.5))) << endl;
    return 0;
}
