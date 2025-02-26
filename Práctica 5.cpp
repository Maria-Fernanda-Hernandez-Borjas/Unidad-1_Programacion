#include <stdio.h>
#include"iostream"
using namespace std;

int main()
{
	float Altura,Base;
	float SUPERFICIE, PERIMETRO;
	//Mensaje de bienvenida
	cout << "Hola! Este programa 1.10 Calcula la superficie u el perimetro de un rectangulo" << "\n";
	
	//Se declaran los números que se sumarán (pueden ser decimales)
	
	//Se pide el primer número
	cout <<"Por favor ingrese el valor de la Base:	"<<"\n";
	//Se asigna el primer valor a la Base
	cin >> Base;
    //Se pide el segundo número
	cout <<"Por favor ingrese el valor de la Altura:	"<<"\n";
	//Se asigna el segundo valor a la Altura
	cin >> Altura;
	
	SUPERFICIE=Base*Altura;
	PERIMETRO=2*(Base+Altura);
	
	//Se muestra el resultado
	printf ("\n La Superficie del rectangulo es %5.2f \n", SUPERFICIE);
	printf ("\n El perimetro del rectangulo es %5.2f \n", PERIMETRO);
	
	return 0;
}
