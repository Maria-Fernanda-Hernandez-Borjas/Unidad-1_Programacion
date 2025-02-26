#include "iostream"
using namespace std;

int main()
{//problema 1.6 construya un programa de flujo que calcule e imprima el numero de segundos que hay en un determinado numero de dias
int DIAS;
float SEGUNDOS;

//entrada de datos
cout<<"Escribe el número de días para calcular lo segundos	"<< "\n";
cin>>DIAS;

//Calculo
SEGUNDOS=DIAS*24*60*60;

//Se imprime resultados
cout<<"En "<<DIAS<<" días hay "<<SEGUNDOS<<" segundos"<<"\n";
cin>>DIAS;
return 0;
}
