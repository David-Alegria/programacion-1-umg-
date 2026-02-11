
#include<iostream>
using namespace std;

int main() {
	int cantidad;
	int opcion;
	float precio;
	float total;
	total = 0;
	do {
		cout << "---Menu de Cafeteria--" << endl;
		cout << "1. Cafe        Q10" << endl;
		cout << "2. Te         Q8" << endl;
		cout << "3. Sandwich    Q15" << endl;
		cout << "4. Pastel      Q12" << endl;
		cout << "5. Salir" << endl;
		cout << "Selecciona una opcion" << endl;
		cin >> opcion;
		if (opcion==1) {
			cout << "Cuantos cafes necesitas" << endl;
			cin >> cantidad;
			total = total+cantidad*10;
		}
		if (opcion==2) {
			cout << "Cuantos tes necesitas" << endl;
			cin >> cantidad;
			total = total+cantidad*8;
		}
		if (opcion==3) {
			cout << "Cuantos Sandwiches necesitas" << endl;
			cin >> cantidad;
			total = total+cantidad*15;
		}
		if (opcion==4) {
			cout << "Cuantos pasteles necesitas" << endl;
			cin >> cantidad;
			total = total+cantidad*12;
		}
		if (opcion==5) {
			cout << "Saliendo del menu..." << endl;
		}
	} while (opcion!=5);
	cout << "Total a pagar: Q" << total << endl;
	return 0;
}

