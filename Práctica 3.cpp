#include "iostream"
#include <stdio.h>
using namespace std;
int main ()
{
	int MAT;
	float PRO,CAL1, CAL2,CAL3,CAL4,CAL5;
	//Mensaje de bienvenida
	cout <<"�Hola! Este programa 1.8 Promedio calificaciones" << "\n";
	//Se pide la matricula del alumno
	cout << "Por favor ingrese la matr�cula del alumno:   " << "\n";
	//Se asigna el primer valor o MAT
		cin >> MAT;
	//Se pide la primera calificaci�n
	cout << "Por favor ingrese la primera calificaci�n:   " << "\n";
	//Se asigna el primer valor a CAL1
		cin >> CAL1;
	//Se pide la segunda calificaci�n
	cout << "Por favor ingrese la segunda calificaci�n:   " << "\n";
	//Se asigna el segundo valor a CAL2
		cin >> CAL2;
		//Se pide la tercer calificaci�n
	cout << "Por favor ingrese la tercer calificaci�n:   " << "\n";
	//Se asigna el tercer valor a CAL3
		cin >> CAL3;
		//Se pide la cuarta calificaci�n
	cout << "Por favor ingrese la cuarta calificaci�n:   " << "\n";
	//Se asigna el cuarto valor a CAL4
		cin >> CAL4;
	//Se pide la quinta calificaci�n
	cout << "Por favor ingrese la quinta calificaci�n:   " << "\n";
	//Se asigna el quinto valor a CAL5
		cin >> CAL5;
	PRO=(CAL1+CAL2+CAL3+CAL4+CAL5)/5.0;
	//Se muestra el resultado
	printf ("\n El promedio del alumno con matricula %d es %5.2f \n",MAT,PRO);
	cout << "\n El promedio del alumno con matr�cula   " << MAT << "es" << PRO << "\n";
	return 0;
}
