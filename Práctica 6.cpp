#include "iostream"
#include "string"

using namespace std;

int main()
{	//practica 6
	
	//Decalracion de variables
	float PRECIOPRODUCTO, DEVOLUCION;
	float PAGO;
	
	//Entrada de datos
	
	cout << "Escribe el costo del articulo	" << "\n";
	cin >> PRECIOPRODUCTO;
	
	cout << "Escribe cuanto fue el pago del art�culo	"<< "\n";
	cin >> PAGO;
	
	//C�lculo de devoluci�n
	
	DEVOLUCION= PAGO-PRECIOPRODUCTO;
	
	//Se imprimen resultados
	cout << "El cambio de cliente es	" <<DEVOLUCION;
	return 0;
}
