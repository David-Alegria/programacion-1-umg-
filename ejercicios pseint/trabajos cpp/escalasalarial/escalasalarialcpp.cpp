
#include<iostream>
using namespace std;



int main() {
	float adicional;
	float aporte;
	float edad;
	float sueldo;
	cout << "Ingrese la edad de la persona: " << endl;
	cin >> edad;
	cout << "Ingrese el sueldo anual: " << endl;
	cin >> sueldo;
	if (sueldo<10000) {
		aporte = sueldo*0.005;
	} else {
		if (sueldo>=10000 && sueldo<=29999) {
			aporte = sueldo*0.02;
		} else {
			aporte = sueldo*0.025;
		}
	}
	if (edad<=30) {
		adicional = aporte*0.20;
		aporte = aporte+adicional;
	}
	cout << "El aporte a descontar es: $" << aporte << endl;
	return 0;
}

