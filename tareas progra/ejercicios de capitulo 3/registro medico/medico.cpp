#include <iostream>
using namespace std;

class PerfilMedico {
private:
    string nombre;
    string apellido;
    int dia, mes, anio;
    float altura;
    float peso;

public:
    // constructor
    PerfilMedico(string n, string a, int d, int m, int an, float alt, float p) {
        nombre = n;
        apellido = a;
        dia = d;
        mes = m;
        anio = an;
        altura = alt;
        peso = p;
    }

    int calcularEdad(int anioActual) {
        int edad;
        edad = anioActual - anio;
        return edad;
    }

    int frecuenciaMaxima(int edad) {
        return 220 - edad;
    }

    float calcularIMC() {
        float imc;
        imc = peso / (altura * altura);
        return imc;
    }

    void mostrarTodo(int anioActual) {
        int edad = calcularEdad(anioActual);
        int fcMax = frecuenciaMaxima(edad);
        float imc = calcularIMC();

        cout << "\n--- DATOS ---" << endl;
        cout << "Nombre: " << nombre << " " << apellido << endl;
        cout << "Nacimiento: " << dia << "/" << mes << "/" << anio << endl;
        cout << "Edad: " << edad << endl;

        cout << "Frecuencia cardiaca maxima: " << fcMax << endl;
        cout << "Frecuencia esperada: "
             << fcMax * 0.50 << " - " << fcMax * 0.85 << endl;

        cout << "IMC: " << imc << endl;
    }
};

int main() {
    string nombre, apellido;
    int dia, mes, anio, anioActual;
    float altura, peso;

    cout << "Ingrese nombre: ";
    cin >> nombre;

    cout << "Ingrese apellido: ";
    cin >> apellido;

    cout << "Dia de nacimiento: ";
    cin >> dia;

    cout << "Mes de nacimiento: ";
    cin >> mes;

    cout << "Anio de nacimiento: ";
    cin >> anio;

    cout << "Altura (ejemplo 1.70): ";
    cin >> altura;

    cout << "Peso en kg: ";
    cin >> peso;

    cout << "Anio actual: ";
    cin >> anioActual;

    PerfilMedico p(nombre, apellido, dia, mes, anio, altura, peso);

    p.mostrarTodo(anioActual);

    return 0;
}
