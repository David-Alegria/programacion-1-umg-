#include <iostream>
#include <string>

using namespace std;

class Factura{

private:

    string numeroPieza;
    string descripcion;
    int cantidad;
    int precio;

public:

    Factura(string num,string des,int cant,int pre){

        numeroPieza=num;
        descripcion=des;

        if(cant>0)
            cantidad=cant;
        else
            cantidad=0;

        if(pre>0)
            precio=pre;
        else
            precio=0;
    }

    int obtenerMontoFactura(){

        return cantidad*precio;

    }

};

int main(){

    Factura factura1("10","Clavos",5,4);

    cout<<"El total es: "<<factura1.obtenerMontoFactura();

    return 0;
}
