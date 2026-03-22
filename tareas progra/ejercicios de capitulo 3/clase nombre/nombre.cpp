#include <iostream>
#include <string>
using namespace std;

class LibroCalificaciones{
private:
    string nombreCurso;
    string nombreInstructor;

public:

    LibroCalificaciones(string curso, string instructor){
        nombreCurso = curso;
        nombreInstructor = instructor;
    }

    void establecerInstructor(string instructor){
        nombreInstructor = instructor;
    }

    string obtenerInstructor(){
        return nombreInstructor;
    }

    void mostrarMensaje(){
        cout<<"Bienvenido al curso "<<nombreCurso<<endl;
        cout<<"Este curso es presentado por: "<<nombreInstructor<<endl;
    }

};

int main(){

    LibroCalificaciones libro("Programacion","Carlos Perez");

    libro.mostrarMensaje();

    return 0;
}
