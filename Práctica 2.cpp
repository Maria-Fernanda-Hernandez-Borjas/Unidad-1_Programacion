#include "iostream"
#include <stdio.h>
using namespace std;

int main()
{
	int A,B;
	float RES;
	//Mensaje de bienvenida
	cout << "Hola! Este programa 1.7 escribe el resultado de la expresi�n :D" << "\n";
	
	//Se declaran los n�meros que se sumar�nn (pueden ser decimales)
	
	//Se pide el primer n�mero
	cout << "Por favor ingrese el valor de A:   " <<"\n";
	//Se asigna el primer valor de A
	cin >> A;
	//Se pide el segundo n�mero
	cout << "Por favor, ingrese el valor B:   " << "\n";
	//Se asigna el segundo valor a B
	cin >> B;
	
	RES=((A+B)*(A+B))/3.0;
	
	//Se muestra el resultado
	printf ("\n El resultado de la expresi�n es %5.4f \n", RES);
	cout << "EL RESULTADO DE LA EXPRESI�N ES:   " << RES <<"\n";
	
	return 0;
}
