//Modulo de función de creación de clave
//Entradas: 1) nombre del proveedor(registro(ingrediente) y 2) contador: ingredExistencia
//1.- crear clave con información de: 1) proveedor: dos primeras letras y 2) contador: numero del contador actual

//2.- regresa la clave

#include <iostream>
#include <string.h>
using namespace std;



struct ingredientes{
  string nombre = "coco";    //Decidir si se usan string o  cadena de char nombre[]
  float cantidad = 5;
  string proveedor = "bachoco";
  float precio = 50;
  string clave;
} ingrediente[50];

string creaClave(ingredientes ingrediente[], int ingredExistencia){
    string clave = "";
   	char buffer[20];

	//bachoco = [b,a,c,h,o,c,o]

	//1.- Accedes a la cadena del proveedor y almacenas lo que hay en la posición 0 y 1 dentro de la variable "clave" (concatenando).
	for(int i=0; i < 2; i++){
			clave = clave + ingrediente[ingredExistencia].proveedor[i];
	}

	ingredExistencia = ingredExistencia + 1;
	//2.- transformar la variable "ingredExistencia" a string
	sprintf(buffer, "%d", ingredExistencia);
    string cadena(buffer);

	//3.- contanerle a la variable "clave" el "00", y concatenar el contador "ingredEcistencia
	clave = clave + "00" + cadena;

	return clave;
}


int main(){
	int ingredExistencia;
	string clave;

	clave = creaClave(ingrediente, ingredExistencia);
	cout << "La clavle es: " << clave;
	return 0;
}


