#include "iostream"
#include "math.h"
using namespace std;

int main()
{ //Problema 1.7 construya un programa tal que dado como datos los tres lados de un triangulo pueda determinar su area.

float L1,L2,L3,S,AREA;
const float PI=3.141592;

//Entrada de datos
cout<<"Escribe la medida del lado 1 del triangulo	" <<"\n";
cin >> L1;

cout<<"Escribe la medida del lado 2 del triangulo	" <<"\n";
cin >> L2;

cout<<"Escribe la medida del lado 3 del triangulo	" <<"\n";
cin >> L3;

//Calculo
S=(L1+L2+L3)/2;
AREA=sqrt(S*(S-L1)*(S-L2)*(S-L3));

//Imprimir resultados
cout<< " El area del triangulo	" <<AREA <<"\n";

return 0;
}
