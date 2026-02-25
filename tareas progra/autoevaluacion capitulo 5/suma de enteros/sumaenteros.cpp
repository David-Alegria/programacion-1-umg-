#include <iostream>
using namespace std;

int main(){
int cantidad;
int numero;
int suma=0;

cout <<"Ingresa la cantidad de los numeros: ";
cin >> cantidad;

for (int i=1; i <= cantidad; i++){
cout <<"Ingresa un numero: ";
cin >> numero;
suma += numero;
}
cout <<"La suma total es: " <<suma <<endl;
return 0;
}
