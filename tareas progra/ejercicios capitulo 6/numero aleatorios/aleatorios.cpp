#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int a[] = {2,4,6,8,10};
    int b[] = {3,5,7,9,11};
    int c[] = {6,10,14,18,22};

    cout << "a) " << a[rand()%5] << endl;
    cout << "b) " << b[rand()%5] << endl;
    cout << "c) " << c[rand()%5] << endl;

    return 0;
}
