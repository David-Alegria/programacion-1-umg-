#include <iostream>
using namespace std;

int main()
{
 double kilometros, litros;
 double totalKilometros=0, totalLitros=0;

 cout <<"Ingresa los kilometros usados (0 para salir): ";
 cin >> kilometros;

 while (kilometros != 0)
 {
     cout <<"Ingresa los litros: ";
     cin  >> litros;

     cout <<"KPL en este reabastecimiento: "
          <<kilometros/litros <<endl;

          totalKilometros += kilometros;
          totalLitros += litros;

          cout <<"Total KPL: "
               << totalKilometros/totalLitros <<endl;

            cout <<"Escriba los Kilometros usados (0 para salir): ";
            cin >> kilometros;
 }
  return 0;
}
