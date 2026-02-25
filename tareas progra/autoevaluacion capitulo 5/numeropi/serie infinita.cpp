#include <iostream>
using namespace std;

int main (){
double pi =4.0;
double signo=-1.0;
int denominador=3;

cout <<"La interaccion \t valor aproxiamdo de pi" <<endl;
for (int i=1; i <=1000; i++){
    pi +=signo *(4.00/denominador);
    cout <<i <<"\t\t" <<pi <<endl;

    signo*=-1;
    denominador +=2;
}
return 0;
}
