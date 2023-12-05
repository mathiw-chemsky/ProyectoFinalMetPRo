/*PROCEDIMIENTO para Consulta de proveedores por ingrediente
entradas: registro(ingrediente), nombre del proveedor, ingredExistencia
salidas: ninguna
procedimiento:
1) almacenar el nombre del proveedor en variable temporal "consultaProveedor".
2) comparar "consultaProveedor" = ingrediente[i].proveedor
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

void consultaProveedor(ingredientes ingrediente[], int ingredExistencia){
	 string consultaProveedor;

	 cout << "Catalogo de ingredientes que cuesten más de un precio determinado por el usuario. \n";
	 cout << "--------------------------------------------------------------------------------------------------------------------------------------------\n";

	fflush(stdin);
	cout << "Ingrese el nombre del proveedor del ingrediente: ";
	getline(cin,consultaProveedor);

	 for(int i = 0; i < ingredExistencia; i++){
	 	 if(consultaProveedor == ingrediente[i].proveedor){
	    			cout << "nombre del ingrediente: " << ingrediente[i].nombre << "\n";
					cout << "cantidad del ingrediente: " << ingrediente[i].cantidad << "\n";
 					cout << "nombre del proveedor: " << ingrediente[i].proveedor << "\n";
					cout << "precio del ingrediente: " << ingrediente[i].precio << "\n";
					cout << "clave del ingrediente: " << ingrediente[i].clave << "\n";
					cout << "-----------------------------------------------------------------------------------------\n";
		  }
	 }
}

int main(){
	int ingredExistencia = 4;

	consultaProveedor(ingrediente, ingredExistencia);


	return 0;
}
