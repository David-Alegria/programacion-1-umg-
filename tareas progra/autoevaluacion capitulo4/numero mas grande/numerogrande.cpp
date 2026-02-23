#include <iostream>
using namespace std;

int main()
{
    int contador=1;
    int numero;
    int mayor =0;

    while (contador <=10)
    {
        cout <<"Ingresa el numero: ";
        cin >> numero;

        if (contador ==1)
            mayor = numero;
        else if (numero > mayor)
            mayor = numero;

        contador++;
    }
    cout <<"El numero mayor es: " <<mayor <<endl;
    return 0;

}
