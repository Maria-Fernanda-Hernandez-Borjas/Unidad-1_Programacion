#include "iostream"
using namespace std;

int main()
{//construya un diagrama de flujo que resuelva el problema de una gasolinera. Los surtidores regustran lo que surten en galones, pero el precio está fijado en litros. EL programa debe calcular e imprimir lo que hay que cobrar al cliente. Galón= 3.785 litros y precio del litro=8.20.

//Declaración de variables
float GALONES, TOTAL;
const float GALON=3.785, PRECIOLITRO=8.20;

//Entrada de datos
cout <<"Escribe cantidad de galones comprados	" <<"\n";
cin>> GALONES;

//CALCULO
TOTAL= GALONES*GALON*PRECIOLITRO;

//imprimen resultados
cout<<"Hay que cobrar al cliente por "<<GALONES<< " galones "<<"Debe pagar "<<TOTAL<<" pesos"< "\n";
return 0;
}
