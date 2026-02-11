
#include<iostream>
using namespace std;



int main() {
	float alambre;
	float ancho;
	float area;
	float costototal;
	float largo;
	float perimetro;
	float preciometro;
	cout << "Ingrese el ancho del terreno" << endl;
	cin >> ancho;
	cout << "Ingrese el largo del terreno" << endl;
	cin >> largo;
	cout << "Ingrese el precio del metro cuadrado" << endl;
	cin >> preciometro;
	area = ancho*largo;
	costototal = area*preciometro;
	perimetro = 2*(ancho+largo);
	alambre = perimetro*3;
	cout << "El precio del terreno es: Q " << costototal << endl;
	cout << "El total de alambre a utilizar es: " << alambre << "Metros de alambre" << endl;
	return 0;
}

