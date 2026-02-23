#include <iostream>
using namespace std;

int main()
{
    int lado;

    cout <<"Ingrese el tamaño del lado: ";
    cin >>lado;


    for (int fila = 1; fila <= lado; fila++)
    {
        for (int columna =1; columna <=lado; columna++)

        {
             if (fila == 1 || fila == lado || columna == 1 || columna == lado)
                cout << "*";
            else
                cout << " ";
        }
        cout <<endl;
    }
    return 0;

}
