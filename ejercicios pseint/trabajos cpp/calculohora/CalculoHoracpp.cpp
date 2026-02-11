
#include<iostream>
using namespace std;


int main() {
	int hora;
	cout << "Ingrese una hora entre (0y23): " << endl;
	cin >> hora;
	if (hora<0 || hora>23) {
		cout << "ha existido un erro al ingresar hora" << endl;
	} else {
		if (hora>=0 && hora<=5) {
			cout << "Madrugada" << endl;
		} else {
			if (hora>=6 && hora<=11) {
				cout << "Mañana" << endl;
			} else {
				if (hora>=12 && hora<=13) {
					cout << "Mediodía" << endl;
				} else {
					if (hora>=14 && hora<=19) {
						cout << "Tarde" << endl;
					} else {
						cout << "Noche" << endl;
					}
				}
			}
		}
	}
	return 0;
}

