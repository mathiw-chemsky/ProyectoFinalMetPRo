/*Módulo de procedimiento de alta de producto
1.- Solicitar informacion al usuario y guardarlo en variables temporales
2.- imprimir la información para preguntar si es correcto
3.- si es correcto, almacenar las variables temporales en cada campo del registro e ir al paso 4, sino salir del procedimiento sin guardar en el registro nada.
4.- contador sumar en 1
5.- llamar a funcion de creacion de clave
6.- almacenar la clave en el registro
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

string creaClave(ingredientes ingrediente[], int &ingredExistencia){
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


void AltaIngredientes(ingredientes ingrediente[], int &ingredExistencia){
	int confirmacion;
	string nombre;
	float cantidad;
	string proveedor;
	float precio;
	string clave;

	//1.- Solicitar informacion al usuario y guardarlo en variables temporales
	fflush(stdin);
	cout << "Digite el nombre del ingrediente: ";
	getline(cin,nombre);
	cout << "Cantidad del ingrediente: ";
	cin >> cantidad;
	fflush(stdin);
	cout << "Nombre del proveedor del ingrediente: ";
	getline(cin,proveedor);
	cout << "Precio del ingrediente: ";
	cin >> precio;
	cout << "\n";

	//2.- Imprimir el mensaje de confirmacion
	cout << "nombre del ingrediente: " << nombre << "\n";
	cout << "cantidad del ingrediente: " << cantidad << "\n";
 	cout << "nombre del proveedor: " << proveedor << "\n";
	cout << "precio del ingrediente: " << precio << "\n";
    cout << "Si la informacion es correcta presione 1, si la informacion es incorrecta presione cualquier numero \n";
    cin >> confirmacion;

    //Esto solo es para verificar que no se guardó la información, después de puede borrar
    if(confirmacion != 1){
 	cout << "nombre del ingrediente: " << ingrediente[ingredExistencia].nombre << "\n";
	cout << "cantidad del ingrediente: " << ingrediente[ingredExistencia].cantidad << "\n";
 	cout << "nombre del proveedor: " << ingrediente[ingredExistencia].proveedor << "\n";
	cout << "precio del ingrediente: " << ingrediente[ingredExistencia].precio << "\n";

		return;
    }else{
	//3.- si es correcto, almacenar las variables temporales en cada campo del registro e ir al paso 4, sino salir del procedimiento sin guardar en el registro nada.
 	ingrediente[ingredExistencia].nombre = nombre;
	ingrediente[ingredExistencia].cantidad = cantidad;
	ingrediente[ingredExistencia].proveedor = proveedor;
	ingrediente[ingredExistencia].precio = precio;
	cout << "Informacion almacenada existosamene. \n";
	cout << "\n Posicion: " << ingredExistencia;

	//4.- llamar a la función "creaClave"
	clave = creaClave(ingrediente, ingredExistencia);
	cout << "La clavle es: " << clave;

	// AltaIngrediente(proveedor, contador);
//	clave = 0;
	//5.- almacenar la clave en el registro
//	fflush(stdin);
//	ingrediente[contador].clave = clave << "\n";
//	cout << "La clave es: " << ingrediente[i].clave << "\n";



	cout << "\n Posicion: " << ingredExistencia;


	}
}


int main(){
	int ingredExistencia= 0;

	AltaIngredientes(ingrediente, ingredExistencia);
	cout << "\n Posicion actual: " << ingredExistencia;



	return 0;
}
