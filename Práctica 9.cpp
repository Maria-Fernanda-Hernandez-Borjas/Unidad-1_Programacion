#include "iostream"
using namespace std;

int main()
{ //problema 1.5 construya un programa que dado como datos el radio y la altua de un cilindro, calcule e imprima el area y volumen.

float RADIO, ALTURA, VOLUMEN, AREA;
const float PI=3.141592;

//Entrada de datos
cout<< "Escribe la medida del radio		" <<"\n";
cin >> RADIO;

cout << "Escribe la medida de la altura			"<< "\n";
cin>> ALTURA;

//CALCULO
VOLUMEN= PI*(RADIO*RADIO)*ALTURA;
AREA=2*PI*RADIO*ALTURA;

//Se imprimen resultados
cout<<"El volumen del cilindro es "<<VOLUMEN<<"\n";
cout<<"El area del cilindro es "<<AREA<<"\n";
return 0;
}
