#include <iostream>
using namespace std;

int main()
{
int binario, decimal =0, base=1,digito;
cout <<"Ingresa un numero binario: ";
cin >> binario;
while (binario > 0)
{
    digito = binario %10;
    decimal += digito*base;
    base*= 2;
    binario /=10;

}
cout <<"El numero equivalente a decimal es: " <<decimal <<endl;
return 0;
}
