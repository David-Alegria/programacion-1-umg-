#include <iostream>
#include <unistd.h>
#include "Juego.h"
#include "Config.h"

using namespace std;

//Programa: Juego Buscaminas
//Autor: David Emanuel Alegria Cap
//Descripción:
//Este programa permite al usuario jugar Buscaminas.
//Incluye un menú donde se puede:
//1. Configurar el juego
//2. Iniciar una partida
// 3. Salir del programa


int main()
{
    //Configuración del tablero
    const int FILASTABLERO = 5;
    const int COLUMNASTABLERO = 5;
    const int MINASENTABLERO = 3;
    const bool MODODESARROLLADOR = true;
    const int VIDASTABLERO = 3;
    //Creación de el objeto para los valores iniciales
    Config configuracionJuego(FILASTABLERO, COLUMNASTABLERO, MINASENTABLERO, MODODESARROLLADOR, VIDASTABLERO);
    //Se crea el juego con la configuración inicial
    Juego juego(Tablero(configuracionJuego.getfilasTablero(), configuracionJuego.getcolumnasTablero(), configuracionJuego.getmodoDesarrolladorTablero()), configuracionJuego.getminasTablero());
    //Inicializacion a la aleatoridad
    srand(getpid());
    int opciones;
    bool repetir = true;
    do
    {
        system("cls");//Limpiador de pantalla
        //Menu Principal
        cout << "\n\n\t\tBUSCA MINAS -Menu-" << endl;
        cout << "\t\t-------------------"<< endl;
        cout << "\t\t1. Configuracion del Juego" << endl;
        cout << "\t\t2. Iniciar el Juego" << endl;
        cout << "\t\t3. Salir del Juego" << endl;
        cout << "\n\t\tIngrese una opcion: ";
        cin >> opciones;
        //Evaluación opción elegida
        switch (opciones)
        {
        case 1:
            {
                //Llamado al menu configuración
                configuracionJuego.menuConfiguracion();
                break;
            }
        case 2:
            {
              	Juego juegoTemporal(Tablero(configuracionJuego.getfilasTablero(), configuracionJuego.getcolumnasTablero(), configuracionJuego.getmodoDesarrolladorTablero()), configuracionJuego.getminasTablero());
                //Inicio del juego
                juegoTemporal.iniciar();

                system("pause");//Pausa antes de regresar al menu
                break;
            }
        case 3: repetir = false;//salir del programa
                break;
        }
    } while (repetir);
    system("cls");
    return 0;
}
