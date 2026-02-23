#include <iostream>
using namespace std;

int main()
{
    int numero;
    int mayor1 =0, mayor2=0;

    for (int i = 1; i <=10; i++)
    {
        cout <<"Ingresa el numero: ";
        cin >> numero;
        if (numero > mayor1)
        {
            mayor2=mayor1;
            mayor1=numero;

        }

             else if (numero > mayor2)
        {
            mayor2=numero;
        }

        }
         cout <<"El nuemero mayor es: " <<mayor1 <<endl;
         cout <<"El segundo mayor es: " <<mayor2 <<endl;
         return 0;

        }




