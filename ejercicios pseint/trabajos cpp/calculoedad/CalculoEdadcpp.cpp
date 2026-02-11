
#include<iostream>
using namespace std;



int main() {
	int anoactual;
	int anonacimiento;
	float edad;
	cout << "Ingrese su año de nacimiento" << endl;
	cin >> anonacimiento;
	cout << "Ingrese el año actual" << endl;
	cin >> anoactual;
	edad = anonacimiento-anoactual;
	cout << "Su año es: " << edad << "anos" << endl;
	return 0;
}

