#ifndef JUEGO_H
#define JUEGO_H
#include "Tablero.h"//se incluye la clase para que funcione el juego

class Juego//esta clase controla todo el juego
{
private:
	Tablero tablero;
	int cantidadMinas;//total de minas en el juego

	int aleatorio_en_rango(int minimo, int maximo);//genera numeros aleatorios
	int filaAleatoria();//genera fila aleatoria
	int columnaAleatoria();//genera columna aleatoria
public:
    Juego(Tablero tablero, int cantidadMinas);
	void colocarMinasAleatoriamente();//coloca minas aleatorias
	int solicitarFilaUsuario();//pide al usuario ingreso de fila
	int solicitarColumnaUsuario();//pide al usuario ingreso de columna
	bool jugadorGana(); //verifica que el jugador gano
	void iniciar(); //inicia el juego
	void dibujarPortada(string nombreArchivo);//muestra la portada de un archivo
};

#endif // JUEGO_H
