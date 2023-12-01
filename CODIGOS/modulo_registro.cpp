//Modulo del registro
#include <iostream>
#include <string.h>

using namespace std;

struct ingredientes{
  string nombre;    //Decidir si se usan string o  cadena de char nombre[]
  float cantidad;
  string proveedor;
  float precio;
  string clave;
} ingrediente[50];

int main(){
	
		fflush(stdin);
		cout << "Digite el nombre del ingrediente: ";
		getline(cin,ingrediente[1].nombre);
		cout << "Cantidad del ingrediente: ";
		cin >> ingrediente[1].cantidad;
		fflush(stdin);
		cout << "Nombre del proveedor del ingrediente: ";
		getline(cin,ingrediente[1].proveedor);
		cout << "Precio del ingrediente: ";
		cin >> ingrediente[1].precio;
		cout << "\n";

	
		cout << "nombre del ingrediente: " << ingrediente[1].nombre << "\n";
		cout << "cantidad del ingrediente: " << ingrediente[1].cantidad << "\n";
 		cout << "nombre del proveedor: " << ingrediente[1].proveedor << "\n";
		cout << "precio del ingrediente: " << ingrediente[1].precio << "\n";
		cout << "\n";

	

	return 0;
}
