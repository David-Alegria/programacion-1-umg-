#include <iostream>
using namespace std;

int main()
{
    double ventas, salario;

    cout <<"Introduzca las ventas en dolares (0 para salir): ";
    cin >> ventas;

    while (ventas != 0)
    {
        salario= 200+(ventas * 0.09);
        cout <<"El salario es: $" <<salario <<endl;

        cout <<"Introduzca las ventas en dolares (0 para salir): ";
        cin >> ventas;

    }
    return 0;
}
