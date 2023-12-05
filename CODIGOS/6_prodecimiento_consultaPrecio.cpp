/*Modulo para procedimiento de Consulta de Productos que cuesten más de un precio determinado por el usuario
Entradas: registro, ingredExistencia,  consultaPrecio
Salidas: ninguna
procedimientos:
 1) comparar consultaPrecio = ingrediente[i].precio con ciclo for
 2) en cada coincidencia imprimir todo el registro en dicha posición [i].


*/
#include <iostream>
#include <string.h>

using namespace std;

struct ingredientes{
  string nombre;
  float cantidad;
  string proveedor;
  float precio;
  string clave;
} ingrediente[50];

void consultaPrecio(ingredientes ingrediente[], int ingredExistencia){
	 float consultaPrecio;

	 cout << "Catalogo de ingredientes que cuesten más de un precio determinado por el usuario. \n";
	 cout << "--------------------------------------------------------------------------------------------------------------------------------------------\n";

	 cout << "Ingresa el precio del ingrediente que desea consultar: \n";
	 cin >>  consultaPrecio;

	 for(int i = 0; i < ingredExistencia; i++){
	 	 if(consultaPrecio < ingrediente[i].precio){
	    			cout << "nombre del ingrediente: " << ingrediente[i].nombre << "\n";
					cout << "cantidad del ingrediente: " << ingrediente[i].cantidad << "\n";
 					cout << "nombre del proveedor: " << ingrediente[i].proveedor << "\n";
					cout << "precio del ingrediente: " << ingrediente[i].precio << "\n";
					cout << "-----------------------------------------------------------------------------------------\n";
		  }
	 }
}

int main(){
	int ingredExistencia = 4;

	consultaPrecio(ingrediente, ingredExistencia);


	return 0;
}
