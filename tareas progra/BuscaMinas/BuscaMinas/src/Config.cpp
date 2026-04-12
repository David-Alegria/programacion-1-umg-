#include <iostream>
#include <unistd.h>
#include "Config.h"
using namespace std;
//Inicializa los calores de la configuración del juego constructores
Config::Config(int filasTablero, int columnasTablero, int minasTablero, bool modoDesarrolladorTablero, int vidasTablero)
{
    this->filasTablero = filasTablero; //Guarda las filas
    this->columnasTablero = columnasTablero; //Guarda el número de columnas
    this->minasTablero = minasTablero; //Guarda el número de minas
    this->modoDesarrolladorTablero = modoDesarrolladorTablero; //Guarda el modo desarrollador
    this->vidasTablero = vidasTablero; //Guarda las vidas
}
//menu para modificar los valores del juego
void Config::menuConfiguracion()
{
    int opciones; //Guarda la opción elegida
    int valorIngresado; //Guarda el nuevo valor
    bool repetir = true; //Controla todo el ciclo
    do
    {
        system("cls");//Limpiador de pantalla
        //Muestra la configuración actual
        cout << "\n\n\t\tCONFIGURACION ACTUAL -Menu-" << endl;
        cout << "\t\t-------------------"<< endl;
        cout << "\t\t1. Filas del Tablero ----> " << this->getfilasTablero() << endl;
        cout << "\t\t2. Columnas del Tablero -> " << this->getcolumnasTablero() << endl;
        cout << "\t\t3. Minas del Tablero ----> " << this->getminasTablero() << endl;
        cout << "\t\t4. Modo del Juego -------> " << this->getmodoDesarrolladorTablero() << endl;
        cout << "\t\t5. Vidas del Jugador ----> " << this->getvidasTablero() << endl;
        cout << "\t\t6. Regresar al menu general" << endl;
        cout << "\n\t\tIngrese una opcion: ";
        cin >> opciones; //petición de opciones
        if (opciones!=6)
        {
            cout << "\n\tIngrese el valor que desea cambiar: ";
            cin >> valorIngresado;
        }
        switch (opciones) //Evaluar las opciones
        {
        case 1:
            {
                this->setfilasTablero(valorIngresado); //cambio de filas
                cout << "Filas del Tablero actualizadas" << endl;
                break;
            }
        case 2:
            {
                this->setcolumnasTablero(valorIngresado); //cambio de columnas
                cout << "Columnas del Tablero actualizadas" << endl;
                break;
            }
        case 3:
            {
                this->setminasTablero(valorIngresado); //cambio de minas
                cout << "Minas del Tablero actualizadas" << endl;
                break;
            }
        case 4:
            {
                this->setmodoDesarrolladorTablero(valorIngresado); //cambio de modo
                cout << "Modo del Juego actualizado" << endl;
                break;
            }
        case 5:
            {
                this->setvidasTablero(valorIngresado); //cambio de vidas
                cout << "Vidas del Juego actualizadas" << endl;
                break;
            }
        case 6: repetir = false; //salir del menu
                break;
        }
        system("pause"); //pausa para que se vea el cambio
    } while (repetir);
}
//Devolución de valores actuales
int Config::getfilasTablero()
{
    return this->filasTablero;
}
int Config::setfilasTablero(int filasTablero)
{
    this->filasTablero=filasTablero;
}
int Config::getcolumnasTablero()
{
    return this->columnasTablero;
    //modificación de valors
}
int Config::setcolumnasTablero(int columnasTablero)
{
    this->columnasTablero=columnasTablero;
}
int Config::getminasTablero()
{
    return this->minasTablero;
}
int Config::setminasTablero(int minasTablero)
{
    this->minasTablero=minasTablero; //actualiza las minas
}
bool Config::getmodoDesarrolladorTablero()
{
    return this->modoDesarrolladorTablero;
}
bool Config::setmodoDesarrolladorTablero(bool modoDesarrolladorTablero)
{
    this->modoDesarrolladorTablero=modoDesarrolladorTablero; //activar y desactivar modo
}
int Config::getvidasTablero()
{
    return this->vidasTablero;
}
int Config::setvidasTablero(int vidasTablero)
{
    this->vidasTablero=vidasTablero; //ctualiza las vidas
}


