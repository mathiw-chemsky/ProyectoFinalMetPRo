//Modulo para procedimiento de consulta de catálogo de ingredientes existentes
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

void consultaCatalogo(ingredientes ingrediente[], int ingredExistencia){

	 cout << "Catalogo de ingredientes existentes. \n";
	 cout << "--------------------------------------------------------------------------------------------------------------------------------------------\n";

	 for(int i = 0; i < ingredExistencia; i++){
	    cout << "nombre del ingrediente: " << ingrediente[i].nombre << "\n";
		cout << "cantidad del ingrediente: " << ingrediente[i].cantidad << "\n";
 		cout << "nombre del proveedor: " << ingrediente[i].proveedor << "\n";
		cout << "precio del ingrediente: " << ingrediente[i].precio << "\n";
		cout << "-----------------------------------------------------------------------------------------\n";
	 }
}

int main(){
	int ingredExistencia = 4;
	int i = 0;
	
	consultaCatalogo(ingrediente, ingredExistencia);





	return 0;
}
