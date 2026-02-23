#include <iostream>
#include <iomanip>
using namespace std;

int main(){
double poblacion, tasa;
int anos=75;
cout <<"Ingrese la poblacion actual: ";
cin>>poblacion;

cout <<"Ingrese la tasa de crecimiento: ";
cin >>tasa;

tasa= tasa/100;
cout <<fixed <<setprecision(0);

for (int i =1; i<=anos; i++){
    double aumento=poblacion*tasa;
    poblacion=poblacion+aumento;
    cout <<"Anio" <<i <<"Poblacion: "<<poblacion
        <<"Aumento: " <<aumento <<endl;
}
return 0;
}

