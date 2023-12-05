/*Modulo para procedimiento de Consulta de existencia productos a partir de una cantidad
Entradas: registro, ingredExistencia,  consultaCantidad
Salidas: ninguna
procedimientos:
 1) comparar consultaCantidad = ingrediente[i].cantidad con ciclo for
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

void consultaExistencia(ingredientes ingrediente[], int ingredExistencia){
	 float consultaCantidad;

	 cout << "Catalogo de ingredientes por cantidad existente. \n";
	 cout << "--------------------------------------------------------------------------------------------------------------------------------------------\n";

	 cout << "Ingresa la cantidad de ingrediente que desea consultar: \n";
	 cin >>  consultaCantidad;
	 
	 for(int i = 0; i < ingredExistencia; i++){
	 	 if(consultaCantidad >= ingrediente[i].cantidad){
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

	consultaExistencia(ingrediente, ingredExistencia);


	return 0;
}
