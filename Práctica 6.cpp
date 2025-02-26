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
	
	cout << "Escribe cuanto fue el pago del artículo	"<< "\n";
	cin >> PAGO;
	
	//Cálculo de devolución
	
	DEVOLUCION= PAGO-PRECIOPRODUCTO;
	
	//Se imprimen resultados
	cout << "El cambio de cliente es	" <<DEVOLUCION;
	return 0;
}
