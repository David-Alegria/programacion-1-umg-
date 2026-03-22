#include <iostream>

using namespace std;

class Fecha{

private:

    int mes;
    int dia;
    int anio;

public:

    Fecha(int m,int d,int a){

        if(m>=1 && m<=12)
            mes=m;
        else
            mes=1;

        dia=d;
        anio=a;
    }

    void mostrarFecha(){

        cout<<dia<<"/"<<mes<<"/"<<anio<<endl;

    }

};

int main(){

    Fecha f1(5,10,2024);

    f1.mostrarFecha();

    return 0;
}
