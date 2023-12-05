/*Módulo para procedimiendo que modifica la información de los ingredientes.
Entradas: clavle,  acceso al registro en la posición que se indique, Registro(INGREDIENTES)=nombre, cantidad, proveedor, precio.
Salidas: Ninguna.
Proceso: modificar el valor en cada uno de los campos del registro.

1.- ingresa la clave (consultaClave) = me002.
2.- consultaClave = ingrediente[i].clave

1)
i = 0;
ciclo
	 while(consultaClave != ingrediente[i].clave){
	i = i + 1;
	}

2)
	imprimir ingrediente[i=1]
	nombre = chocolate
	cantidad = 3
	proveedor = pastelero
	precio = 50
	clave = pe003

3)
	submenu para modificar [i=1]
		 modificar informacion
	salir de menu modificar


	prueba escritorio
	pa003   =   [0]  ch001
	pa003   =   [1]  me002
	pa003   =   [2]  pa003
	

1.-Recibe el arreglo de registro INGREDIENTES, y a partir de la clave accedar al registro, para lo cual se imprimirán todos los ingredientes existentes
numerandolos con un ciclo while y elijirá el numero que quiere modificar, almacenando dicho número en la variable "i".
2.- Controlar un siwcht dentro de un ciclo while para iterar las veces que el
usuario desee modificar la información hasta indicarle que para guardar cambios y salir presione
una tecla distinta del intervalo 1 a 4.
3.- En el submenú con swicht preguntar qué es lo que desea modificar:
	1)El nombre, 2) la cantidad, 3) el proveedor, o 4) el precio, 5) salir del submenú y guardar cambios.
4.- Almacenar los cambios en variables temporales, y cuando la persona decida finalizar mostrar en pantalla si desea guardar los cambios con un IF, para al final almacenarlo
en el registro.
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


//PROCEDIMIENTO PARA MODIFICAR INGREDIENTES---------------------------------------------------------------------------------------------------------------------
void ModificaIngredientes(ingredientes ingrediente[]){
	int i = 0;
	int confirmacion;
	string nombre;
	float cantidad;
	string proveedor;
	float precio;
	int submenu;
	int contador = 1;
	string consultaClave;

	//1.- solicitud de clave y comparacion en ciclo while
	cout << "Ingresa la clave del ingrediente que deseas modificar: \n";
	cin >> consultaClave;

    while(consultaClave != ingrediente[i].clave){
	i = i + 1;
	}

	// 2) Imprime los datos del ingrediente para informar que esos son los que modificarás
	cout << "Los datos del ingrediente que desea modificar son los siguientes: \n";
 	cout << "Nombre del ingrediente: " << ingrediente[i].nombre << "\n";
	cout << "Cantidad del ingrediente: " << ingrediente[i].cantidad << "\n";
 	cout << "Nombre del proveedor: " << ingrediente[i].proveedor << "\n";
	cout << "Precio del ingrediente: " << ingrediente[i].precio << "\n";

	/*3.- Controlar un siwcht dentro de un ciclo while para iterar las veces que el usuario desee modificar la información hasta indicarle que para
	guardar cambios y salir presione una tecla distinta del intervalo 1 a 4. */

	while(submenu != 5){
		cout << "------------------------------------------------------------------------------------------------------------------------------------- \n";
		cout << "Submenu de modificacion de informacion de ingredientes: \n";
		cout << "     1 - Modificacion del nombre de ingrediente. \n";
		cout << "     2 - Modificacion de cantidad del ingrediente. \n";
		cout << "     3 - Modificacion del nombre del proveedor del ingrediente \n";
		cout << "     4 - Modificacion del precio del ingrediente por unidad/kilogramo \n";
		cout << "     5 - Salir del submenu de modificacion y guardar. \n";

		cout << "Escriba el numero de opcion al que desea acceder (solo ingrese numeros del 1 al 5): \n";
		cin >>  submenu;

		switch(submenu){
			case 1:
		 	    cout << "------------------------------------------------------------------------------------------------------------------------------------- \n";
				cout << "     1 - Modificacion del nombre de ingrediente. \n";
				fflush(stdin);
				cout << "Ingrese el nombre del ingrediente: ";
				getline(cin,nombre);
				cout << "Usted ingreso la siguiente informacion: \n";
				cout << "nombre del ingrediente: " << nombre << "\n";
    			cout << " ¿Esta seguro de que desea guardar los cambios? Si la informacion es correcta y desea guardar, presione 1. \n";
				cout << "Si la informacion es incorrecta y no desea guardar presione cualquier numero \n";
    			cin >> confirmacion;
    			if(confirmacion != 1){
    			//Esto solo es para verificar que no se guardó la información, después de puede borrar
 				cout << "nombre del ingrediente: " << ingrediente[i].nombre << "\n";
				}else{
				/* 4.- Almacenar los cambios en variables temporales, y cuando la persona decida finalizar mostrar en pantalla si desea guardar los cambios
				con un IF, para al final almacenarlo en el registro.*/
 				ingrediente[i].nombre = nombre;
				cout << "Informacion almacenada exitosamente. \n";
				cout << "\n";
				}
				break;
			case 2:
			    cout << "------------------------------------------------------------------------------------------------------------------------------------- \n";
				cout << "     2 - Modificacion de cantidad del ingrediente. \n";
				cout << "Ingrese la cantidad del ingrediente: ";
				cin >> cantidad;
				cout << "Usted ingreso la siguiente informacion: \n";
				cout << "Cantidad del ingrediente: " << cantidad << "\n";
    			cout << " ¿Esta seguro de que desea guardar los cambios? Si la informacion es correcta y desea guardar, presione 1. \n";
				cout << "Si la informacion es incorrecta y no desea guardar presione cualquier numero \n";
    			cin >> confirmacion;
    			if(confirmacion != 1){
    			//Esto solo es para verificar que no se guardó la información, después de puede borrar
 				cout << "cantidad del ingrediente: " << ingrediente[i].cantidad << "\n";
				}else{
				/* 4.- Almacenar los cambios en variables temporales, y cuando la persona decida finalizar mostrar en pantalla si desea guardar los cambios
				con un IF, para al final almacenarlo en el registro.*/
 				ingrediente[i].cantidad = cantidad;
				cout << "Informacion almacenada exitosamente. \n";
				cout << "\n";
				}
				break;
			case 3:
			    cout << "------------------------------------------------------------------------------------------------------------------------------------- \n";
				cout << "     3 - Modificacion del nombre del proveedor del ingrediente \n";
				fflush(stdin);
				cout << "Ingrese el nombre del proveedor del ingrediente: ";
				getline(cin,proveedor);
				cout << "Usted ingreso la siguiente informacion: \n";
				cout << "Proveedor del ingrediente: " << proveedor << "\n";
    			cout << " ¿Esta seguro de que desea guardar los cambios? Si la informacion es correcta y desea guardar, presione 1. \n";
				cout << "Si la informacion es incorrecta y no desea guardar presione cualquier numero \n";
    			cin >> confirmacion;
    			if(confirmacion != 1){
    			//Esto solo es para verificar que no se guardó la información, después de puede borrar
 				cout << "Proveedor del ingrediente: " << ingrediente[i].proveedor << "\n";
				}else{
				/* 4.- Almacenar los cambios en variables temporales, y cuando la persona decida finalizar mostrar en pantalla si desea guardar los cambios
				con un IF, para al final almacenarlo en el registro.*/
 				ingrediente[i].proveedor = proveedor;
				cout << "Informacion almacenada exitosamente. \n";
				cout << "\n";
				}
				break;
			case 4:
   			    cout << "------------------------------------------------------------------------------------------------------------------------------------- \n";
		 	    cout << "     4 - Modificacion del precio del ingrediente por unidad/kilogramo \n";
				cout << "Ingrese el precio del ingrediente: ";
				cin >> precio;
				cout << "Usted ingreso la siguiente informacion: \n";
				cout << "Precio del ingrediente: " << precio << "\n";
    			cout << " ¿Esta seguro de que desea guardar los cambios? Si la informacion es correcta y desea guardar, presione 1. \n";
				cout << "Si la informacion es incorrecta y no desea guardar presione cualquier numero \n";
    			cin >> confirmacion;
    			if(confirmacion != 1){
    			//Esto solo es para verificar que no se guardó la información, después de puede borrar
 				cout << "Precio del ingrediente: " << ingrediente[i].precio << "\n";
				}else{
				/* 4.- Almacenar los cambios en variables temporales, y cuando la persona decida finalizar mostrar en pantalla si desea guardar los cambios
				con un IF, para al final almacenarlo en el registro.*/
 				ingrediente[i].precio = precio;
				cout << "Informacion almacenada exitosamente. \n";
				cout << "\n";
				}
		 	    break;
			case 5:
   			    cout << "------------------------------------------------------------------------------------------------------------------------------------- \n";
		        cout << "     5 - Salir del submenu de modificacion. \n";
		        break;
			default:
   			    cout << "------------------------------------------------------------------------------------------------------------------------------------- \n";
				cout << "Recuerde ingresar solo numeros del 1 al 5. \n";
		}

	}
}


int main(){
	string clave;

	ModificaIngredientes(ingrediente);



	return 0;
}


	/*1.-Recibe el arreglo de registro INGREDIENTES, y a partir de la clave accedar al registro, para lo cual se imprimirán todos los ingredientes existentes
	numerandolos con un ciclo while y elijirá el numero que quiere modificar, almacenando dicho número en la variable "i".
	cout << "Ingredientes existentes: \n";
	for(int i=0; i < ingredExistencia; i++){
	    cout << contador << ".- ingrediente: " << ingrediente[i].nombre << "\n";
		contador = contador + 1;
	}

	cout << "Elije el numero de ingrediente que deseas modificar \n";
	cin >> i;
	i = i - 1; */


	/*3.- En el submenú con swicht preguntar qué es lo que desea modificar:
		  1)El nombre, 2) la cantidad, 3) el proveedor, o 4) el precio, 5) salir del submenú y guardar cambios.
	cout << "------------------------------------------------------------------------------------------------------------------------------------- \n";
	cout << "Usted ingreso la siguiente informacion: \n";
	cout << "nombre del ingrediente: " << nombre << "\n";
	cout << "cantidad del ingrediente: " << cantidad << "\n";
 	cout << "nombre del proveedor: " << proveedor << "\n";
	cout << "precio del ingrediente: " << precio << "\n";
    cout << " ¿Esta seguro de que desea guardar los cambios? Si la informacion es correcta y desea guardar, presione 1. \n";
	cout << "Si la informacion es incorrecta y no desea guardar presione cualquier numero \n";
    cin >> confirmacion;


    if(confirmacion != 1){
    //Esto solo es para verificar que no se guardó la información, después de puede borrar
 	cout << "nombre del ingrediente: " << ingrediente[i].nombre << "\n";
	cout << "cantidad del ingrediente: " << ingrediente[i].cantidad << "\n";
 	cout << "nombre del proveedor: " << ingrediente[i].proveedor << "\n";
	cout << "precio del ingrediente: " << ingrediente[i].precio << "\n";
		return;
    }else{
	/* 4.- Almacenar los cambios en variables temporales, y cuando la persona decida finalizar mostrar en pantalla si desea guardar los cambios con un IF,
	para al final almacenarlo en el registro.
 	ingrediente[i].nombre = nombre;
	ingrediente[i].cantidad = cantidad;
	ingrediente[i].proveedor = proveedor;
	ingrediente[i].precio = precio;
	cout << "Informacion almacenada exitosamente. \n";
	cout << "\n";
	} */
