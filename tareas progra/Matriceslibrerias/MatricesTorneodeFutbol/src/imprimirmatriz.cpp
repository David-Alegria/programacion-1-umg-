#include "imprimirmatriz.h"
#include <cstdlib>

ImprimirMatriz::ImprimirMatriz(string nombre)
{
    nombreGrupo = nombre;
}

int ImprimirMatriz::generarAleatorio(int min, int max)
{
    return min + rand() % (max - min +1);
}

void ImprimirMatriz::llenarMatriz()
{
    for (int i = 0; i < Numero_Equipos; i++)
    {
        float suma = 0;

        for (int j = 0; j < Numero_Partidos; j++)
        {
            int goles = generarAleatorio(Min_Goles, Max_Goles);
            matriz[i][j] = goles;
            suma += goles;
        }

        matriz[i][Numero_Partidos] = suma;
    }
}

void ImprimirMatriz::linea()
{
    cout << "+---------";
    for (int i = 0; i < Numero_Partidos + 1; i++)
    {
        cout << "+---------";
    }
    cout << "+\n";
}

float ImprimirMatriz::imprimir()
{
    float mayor = matriz[0][Numero_Partidos];
    float menor = matriz[0][Numero_Partidos];
    float totalGeneral = 0;

    char equipoMayor[Maxima_Longitud_Cadena];
    char equipoMenor[Maxima_Longitud_Cadena];

    strcpy(equipoMayor, Equipos[0]);
    strcpy(equipoMenor, Equipos[0]);

    cout << nombreGrupo << endl;
    linea();

    cout << setw(9) << "Equipo";
    for (int x = 0; x < Numero_Partidos; x++)
    {
        cout << setw(9) << "Gol" << x + 1;
    }
    cout << setw(7) << "Total" << endl;

    linea();

    for (int y = 0; y < Numero_Equipos; y++)
    {
        cout << "!" << setw(8) << Equipos[y] << "!";

        for (int x = 0; x < Numero_Partidos; x++)
        {
            cout << setw(8) << matriz[y][x] << "!";
        }

        float sumaEquipo = matriz[y][Numero_Partidos];
        totalGeneral += sumaEquipo;

        if (sumaEquipo > mayor)
        {
            mayor = sumaEquipo;
            strcpy(equipoMayor, Equipos[y]);
        }

        if (sumaEquipo < menor)
        {
            menor = sumaEquipo;
            strcpy(equipoMenor, Equipos[y]);
        }

        cout << setw(9) << sumaEquipo << "!" << endl;
        linea();
    }

    float promedio = totalGeneral / Numero_Equipos;

    cout << "El equipo con mayor goles fue: " << equipoMayor << " " << mayor << endl;
    cout << "El equipo con menor goles fue: " << equipoMenor << " " << menor << endl;
    cout << "El promedio de goles fue: " << promedio << endl << endl;

    return promedio;
}
