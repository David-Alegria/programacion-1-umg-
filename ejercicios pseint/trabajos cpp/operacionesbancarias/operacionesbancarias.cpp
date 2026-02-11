
#include<iostream>
using namespace std;



int main() {
	float cheque;
	float comision;
	int contador_cheque;
	int contador_efectivo;
	int contador_retiros;
	float max_retiro;
	float min_deposito;
	float monto;
	string nombre;
	string opcion;
	float saldo;
	float saldo_inicial;
	float suma_retiros;

	contador_efectivo = 0;
	contador_cheque = 0;
	contador_retiros = 0;
	suma_retiros = 0;
	min_deposito = 999999;
	max_retiro = 0;

	cout << "Ingresa tu nombre: " << endl;
	cin >> nombre;

	cout << "Inrgesa tu saldo inicial: " << endl;
	cin >> saldo;
	saldo_inicial = saldo;

	cout << "Bienvenido, " << nombre << endl;
	cout << "Su saldo inicial es de: " << saldo << endl;

	do {

		cout << "--- Opciones ---" << endl;
		cout << "(D) Deposito" << endl;
		cout << "(R) Retiro" << endl;
		cout << "(F) Fin" << endl;
		cin >> opcion;

		if (opcion=="D") {
			cout << "--- Opciones de Deposito ---" << endl;
			cout << " (E) Efectivo" << endl;
			cout << " (C) Cheque" << endl;
			cin >> opcion;
		}

		if (opcion=="E") {

			cout << "Ingrese la cantidad que desea agregar:" << endl;
			cin >> monto;
			saldo = saldo+monto;
			contador_efectivo = contador_efectivo+1;
			if (monto<min_deposito) {
				min_deposito = monto;
			}
			cout << "Su saldo actual es: " << saldo << endl;
		} else {
			//
			if (opcion=="C") {
				cout << "Ingrese la cantidad del cheque" << endl;
				cin >> cheque;
				comision = cheque*0.01;
				saldo = saldo+cheque-comision;
				contador_cheque = contador_cheque+1;
				if (cheque<min_deposito) {
					min_deposito = cheque;
				}
				cout << "Su saldo actualizado es: " << saldo << endl;
			}
		}

		if (opcion=="R") {
			cout << "Ingrese la cantidad a restirar" << endl;
			cin >> monto;
			if (monto<=saldo) {
				saldo = saldo-monto;
				contador_retiros = contador_retiros+1;
				suma_retiros = suma_retiros+monto;
				if (monto>max_retiro) {
					max_retiro = monto;
				}
				cout << "Su saldo actual es: " << saldo << endl;
			} else {
				cout << "Sobregirado" << endl;
			}
		}
	} while (opcion != "F");
	cout << "--- Resultados ---" << endl;
	cout << "Estos fueron sus movimiento en su cuenta, " << nombre << endl;
	cout << "Su saldo inicial fue de: " << saldo_inicial << endl;
	cout << "Su saldo final es de: " << saldo << endl;
	cout << "El numero promedio de deposios en efectivo fue de: " << contador_efectivo << endl;
	cout << "Su numero de depositos en cheque fue de: " << contador_cheque << endl;
	if (contador_retiros>0) {
		cout << "El monto promedio de retiro es: " << suma_retiros/contador_retiros << endl;
	} else {
		cout << "Monto promedio de retiro es: 0" << endl;
	}
	cout << "Monto minimo de deposito es: " << min_deposito << endl;
	cout << "Monto maximo retirado es: " << max_retiro << endl;
	return 0;
}

