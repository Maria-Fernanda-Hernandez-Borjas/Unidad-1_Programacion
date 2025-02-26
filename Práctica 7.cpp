#include "iostream"
using namespace std;

int main()
{

//Problema 1.3 escribe un programa tal que dado como datos el nombre del dinosaurio su peso y longitud, ecpresado estos últimos en libras y pies respectivamente escriba el nombre del dinosaurio, su peso en kilogramos y la longitud en metros

//Declaración de variables
string NOMBRE;
float PESOLIBRAS, LONGITUDPIES;
float PESOENKILOS, LONGITUDENMETROS;

//Entrada de datos

cout << "Escribe el nombre del dinosaurio	" <<"\n";
cin >> NOMBRE;

cout <<"Escribe el peso del dinosaurio en libras" << "\n";
cin>>PESOLIBRAS;

cout<<"Escribe la longitud del dinosaurio en pies"<<"\n";
cin>>LONGITUDPIES;

//Cálculo
PESOENKILOS=PESOLIBRAS*0.454;
LONGITUDENMETROS=LONGITUDPIES*0.3047;

//SE IMPRIMEN RESULTADOS
cout<<"EL peso en kilos del dinosaurio "<<NOMBRE<<"es "<<PESOENKILOS<< " y la longitud en metros es "<<LONGITUDENMETROS<<"\n";
return 0; 
}
