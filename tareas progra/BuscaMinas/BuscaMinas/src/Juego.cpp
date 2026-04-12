#include "Juego.h"
#include <fstream>
#include <unistd.h> //funciones del sistema

int Juego::aleatorio_en_rango(int minimo, int maximo)//genera numero aleatorio dentro del rango
	{
		return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
	}

	int Juego::filaAleatoria()//genera fila valida
	{
		return this->aleatorio_en_rango(0, this->tablero.getAlturaTablero() - 1);
	}

	int Juego::columnaAleatoria()//genera columna valida
	{
		return this->aleatorio_en_rango(0, this->tablero.getAnchoTablero() - 1);
	}

	Juego::Juego(Tablero tablero, int cantidadMinas)//incializa el juego y coloca automaticamente minas
	{
		this->tablero = tablero;//asignación de tablero
		this->cantidadMinas = cantidadMinas;//guarda las minas
		this->colocarMinasAleatoriamente();//coloca las minas al iniciar
	}

	void Juego::colocarMinasAleatoriamente()//coloca las minas aleatoria en el tablero
	{
		int x, y, minasColocadas = 0;

		while (minasColocadas < this->cantidadMinas)//repite  hasta colocar todas las minas
		{
			x = this->columnaAleatoria();//genera la columna
			y = this->filaAleatoria();//genera la fila
			if (this->tablero.colocarMina(x, y))
			{
				minasColocadas++;
			}
		}
	}

	int Juego::solicitarFilaUsuario()//solicita la fila al usuario
	{
		int fila = 0;
		cout << "Ingresa la FILA en la que desea jugar: ";
		cin >> fila;
		return fila - 1;
	}

	int Juego::solicitarColumnaUsuario()//solicita la columna al usuario
	{
		int columna = 0;
		cout << "Ingresa la COLUMNA en la que desea jugar: ";
		cin >> columna;
		return columna - 1;
	}

	bool Juego::jugadorGana()//verifica si el usuario gano
	{
		int conteo = this->tablero.contarCeldasSinMinasYSinDescubrir();
		if (conteo == 0)//si ya no quedan celdas el juegador gana
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	void Juego::iniciar()//controla el ciclo principal del juego
	{
		int fila, columna;
		while (true)//bucle infinito hasta que gane el jugador o pierda
		{
			this->tablero.imprimir();
			fila = this->solicitarFilaUsuario();
			columna = this->solicitarColumnaUsuario();
			bool respuestaAUsuario = this->tablero.descubrirMina(columna, fila);//descubre la celda seleccionada
			if (!respuestaAUsuario)//si se seleciona mina pierde
			{
				cout << "Perdiste el Juego\n";
				this->tablero.setModoDesarrollador(true);//activa el modo desarrollador
				this->tablero.imprimir();
				break;
			}

			if (this->jugadorGana())//si se cumple condicion el jugaro gana
			{
				cout << "Ganaste el Juego\n";
				this->tablero.setModoDesarrollador(true);//Muestra el tablero completo
				this->tablero.imprimir();
				break;
			}
		}
	}
