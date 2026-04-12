#ifndef IMPRIMIRMATRIZ_H
#define IMPRIMIRMATRIZ_H

#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>

using namespace std;

#define Numero_Equipos 5
#define Numero_Partidos 4
#define Max_Goles 10
#define Min_Goles 0
#define Maxima_Longitud_Cadena 100

class ImprimirMatriz
{
private:
    float matriz[Numero_Equipos][Numero_Partidos + 1];

    char Equipos[Numero_Equipos][Maxima_Longitud_Cadena]={
        "Barcelona","Madrid","Chelsea","Bayer","PSG"
    };

    string nombreGrupo;

public:
    ImprimirMatriz(string nombre);
    int generarAleatorio(int min, int max);
    void llenarMatriz();
    void linea();
    float imprimir();
};

#endif
