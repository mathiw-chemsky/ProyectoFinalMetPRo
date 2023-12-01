/*Módulo de procedimiento de alta de producto
1.- almacenar toda la informacion en registro
2.- imprimir la información para preguntar si es correcto
3.- contador sumar en 1
4.- llamar a funcion de creacion de clave
5.- almacenar la clave en el registro
*/
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

void AltaIngredientes(ingredientes ingrediente[]){
	int contador = 0;
	int confirmacion;
	char clave;
	
	//1.- Almacenar la informacion en el registro
	fflush(stdin);
	cout << "Digite el nombre del ingrediente: ";
	getline(cin,ingrediente[contador].nombre);
	cout << "Cantidad del ingrediente: ";
	cin >> ingrediente[contador].cantidad;
	fflush(stdin);
	cout << "Nombre del proveedor del ingrediente: ";
	getline(cin,ingrediente[contador].proveedor);
	cout << "Precio del ingrediente: ";
	cin >> ingrediente[contador].precio;
	cout << "\n";

	//2.- Imprimir el mensaje de confirmacion
	cout << "nombre del ingrediente: " << ingrediente[contador].nombre << "\n";
	cout << "cantidad del ingrediente: " << ingrediente[contador].cantidad << "\n";
 	cout << "nombre del proveedor: " << ingrediente[contador].proveedor << "\n";
	cout << "precio del ingrediente: " << ingrediente[contador].precio << "\n";
    cout << "Si la informacion es correcta presione 1, si la informacion es incorrecta presione cualquier numero \n";
    cin >> confirmacion;
    
    if(confirmacion != 1){
    	return;
    }else{
	//3.- aumentar el contador en 1
	contador = contador + 1;

	//4.- llamar a la función "creaClave"
	// AltaIngrediente(proveedor, contador);
	clave = 0;
	//5.- almacenar la clave en el registro
//	fflush(stdin);
//	ingrediente[contador].clave = clave << "\n";
	cout << "La clave es: " << ingrediente[contador].clave << "\n";
	}
}


int main(){
	int contador;

	AltaIngredientes(struct ingredientes ingrediente);

	return 0;
}
