#ifndef CONFIG_H
#define CONFIG_H

//la clase se encarga de almacenar y manejar la configuración
class Config
{
    public:
        //Inicializa los valores del tablero
        Config(int filasTablero, int columnasTablero, int minasTablero, bool modoDesarrolladorTablero, int vidasTablero);
        //devuelven los valores del tablero
        int getfilasTablero(); //retorna el numero de filas
        int setfilasTablero(int filasTablero); //cambia el numero de filas
        int getcolumnasTablero(); //retorna el numero de columnas
        int setcolumnasTablero(int columnasTablero); //cambia el numero de columnas
        int getminasTablero(); //Retorna el numero de minas
        int setminasTablero(int minasTablero); //cambia el numero de minas
        bool getmodoDesarrolladorTablero(); //retorna al modo desarrollador
        bool setmodoDesarrolladorTablero(bool modoDesarrolladorTablero); //Activa y desactiva el modo desarrollador
        int getvidasTablero(); //Retorna el numero de vidas
        int setvidasTablero(int vidasTablero); //Cambia el numero de vidas
        void menuConfiguracion();
    protected://No se usan atributos protegidos

    private:
        int filasTablero;//numero de filas del tablero
        int columnasTablero;//numero de columnas tablero
        int minasTablero;//numero de minas
        bool modoDesarrolladorTablero;//modo desarrollador
        int vidasTablero;//numero de vidas del jugador
};

#endif // CONFIG_H
