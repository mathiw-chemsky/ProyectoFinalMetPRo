#include <iostream>
#include <string.h>
#include <locale.h>
#include <conio.h>
using namespace std;

//MODULO: REGISTRO DE INGREDIENTES--------------------------------------------------------------------------------------------------------------------------
struct ingredientes{
  string nombre;    //Decidir si se usan string o  cadena de char nombre[]
  float cantidad;
  string proveedor;
  float precio;
  string clave;
} ingrediente[50];

//PROCEDIMIENTO DE ALTA DE INGREDIENTES-----------------------------------------------------------------------------------------------------------------------
void AltaIngredientes(ingredientes ingrediente[], int &ingredExistencia){
	int confirmacion;
	string nombre;
	float cantidad;
	string proveedor;
	float precio;
//	char clave;

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

    //Esto solo es para verificar que no se guard� la informaci�n, despu�s de puede borrar
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
	ingredExistencia = ingredExistencia + 1;
	cout << "Posicion: " << ingredExistencia;

	//4.- llamar a la funci�n "creaClave"
	// AltaIngrediente(proveedor, contador);
//	clave = 0;
	//5.- almacenar la clave en el registro
//	fflush(stdin);
//	ingrediente[contador].clave = clave << "\n";
//	cout << "La clave es: " << ingrediente[i].clave << "\n";
	}
}

//PROCEDIMIENTO PARA MODIFICAR INGREDIENTES---------------------------------------------------------------------------------------------------------------------
void ModificaIngredientes(ingredientes ingrediente[], int &ingredExistencia){
	int i = 0;
	int confirmacion;
	string nombre;
	float cantidad;
	string proveedor;
	float precio;
	int submenu;
	int contador = 1;

	/*1.-Recibe el arreglo de registro INGREDIENTES, y a partir de la clave accedar al registro, para lo cual se imprimir�n todos los ingredientes existentes
	numerandolos con un ciclo while y elijir� el numero que quiere modificar, almacenando dicho n�mero en la variable "i".*/
	cout << "Ingredientes existentes: \n";
	for(int i=0; i < ingredExistencia; i++){
	    cout << contador << ".- ingrediente: " << ingrediente[i].nombre << "\n";
		contador = contador + 1;
	}

	cout << "Elije el numero de ingrediente que deseas modificar \n";
	cin >> i;
	i = i - 1;

	/*2.- Controlar un siwcht dentro de un ciclo while para iterar las veces que el usuario desee modificar la informaci�n hasta indicarle que para
	guardar cambios y salir presione una tecla distinta del intervalo 1 a 4. */

	while(submenu != 5){
		cout << "------------------------------------------------------------------------------------------------------------------------------------- \n";
		cout << "     1 - Modificacion del nombre de ingrediente. \n";
		cout << "     2 - Modificacion de cantidad del ingrediente. \n";
		cout << "     3 - Modificacion del nombre del proveedor del ingrediente \n";
		cout << "     4 - Modificacion del precio del ingrediente por unidad/kilogramo \n";
		cout << "     5 - Salir del submenu de modificacion y guardar. \n";

		cout << "Escriba el numero de opcion al que desea acceder (solo ingrese numeros del 1 al 5): \n";
		cin >>  submenu;

	/*3.- En el submen� con swicht preguntar qu� es lo que desea modificar:
		  1)El nombre, 2) la cantidad, 3) el proveedor, o 4) el precio, 5) salir del submen� y guardar cambios.*/
		switch(submenu){
			case 1:
		 	    cout << "------------------------------------------------------------------------------------------------------------------------------------- \n";
				cout << "     1 - Modificacion del nombre de ingrediente. \n";
				fflush(stdin);
				cout << "Ingrese el nombre del ingrediente: ";
				getline(cin,nombre);
				cout << "Usted ingreso la siguiente informacion: \n";
				cout << "nombre del ingrediente: " << nombre << "\n";
    			cout << " �Esta seguro de que desea guardar los cambios? Si la informacion es correcta y desea guardar, presione 1. \n";
				cout << "Si la informacion es incorrecta y no desea guardar presione cualquier numero \n";
    			cin >> confirmacion;
    			if(confirmacion != 1){
    			//Esto solo es para verificar que no se guard� la informaci�n, despu�s de puede borrar
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
    			cout << " �Esta seguro de que desea guardar los cambios? Si la informacion es correcta y desea guardar, presione 1. \n";
				cout << "Si la informacion es incorrecta y no desea guardar presione cualquier numero \n";
    			cin >> confirmacion;
    			if(confirmacion != 1){
    			//Esto solo es para verificar que no se guard� la informaci�n, despu�s de puede borrar
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
    			cout << " �Esta seguro de que desea guardar los cambios? Si la informacion es correcta y desea guardar, presione 1. \n";
				cout << "Si la informacion es incorrecta y no desea guardar presione cualquier numero \n";
    			cin >> confirmacion;
    			if(confirmacion != 1){
    			//Esto solo es para verificar que no se guard� la informaci�n, despu�s de puede borrar
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
    			cout << " �Esta seguro de que desea guardar los cambios? Si la informacion es correcta y desea guardar, presione 1. \n";
				cout << "Si la informacion es incorrecta y no desea guardar presione cualquier numero \n";
    			cin >> confirmacion;
    			if(confirmacion != 1){
    			//Esto solo es para verificar que no se guard� la informaci�n, despu�s de puede borrar
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
		        cout << "     5 - Salir del menu. \n";
		        break;
			default:
   			    cout << "------------------------------------------------------------------------------------------------------------------------------------- \n";
				cout << "Recuerde ingresar solo numeros del 1 al 5. \n";
		}

	}
}

//PROCEDIMIENTO PARA CONSULTA DE CATALOGO
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

//FUNCION PRINCIPAL-----------------------------------------------------------------------------------------------------------------------------------------
int main (){
//	struct ingredientes ingrediente1;
    int menu = 0;
	int ingredExistencia= 0;
	
	cout << "�Sea bienvenido al inventario de Chica Pay! \n\n";

	
	while (menu != 7){
 	    cout << "------------------------------------------------------------------------------------------------------------------------------------- \n";
		cout << "Menu de opciones: \n";
		cout << "     1 - Alta de productos \n";
		cout << "     2 - Modificacion de informacion de productos \n";
		cout << "     3 - Consulta de catalogo de productos existentes \n";
		cout << "     4 - Consulta de existencia productos a partir de una cantidad \n";
		cout << "     5 - Consulta de proveedores por ingrediente \n";
		cout << "     6 - Consulta de productos a partir de tu presupuesto \n";
		cout <<	"     7 - Salir dsel inventario \n\n";
		
		cout << "Escriba el numero de opcion al que desea acceder (solo ingrese numeros del 1 al 7): \n";
		cin >>  menu;
		cout << "------------------------------------------------------------------------------------------------------------------------------------- \n";

		
		switch (menu){
			case 1:
				cout << "1 - Alta de productos \n";
				cout << "Has accedido a la opcion de Alta de productos \n";
				AltaIngredientes(ingrediente, ingredExistencia);
				cout << "\n Posicion actual: " << ingredExistencia;
				break;
				
			case 2: 
				cout << "2 - Modificacion de informacion de productos \n";
				cout << "Has accedido a la opcion de Modificacion de informacion de productos \n";
				ModificaIngredientes(ingrediente, ingredExistencia);
				break;
			
			case 3:
				cout << "3 - Consulta de catalogo de productos existentes \n";
				cout << "Has accedido a la opcion de Consulta de catalogo de productos existentes \n";
				consultaCatalogo(ingrediente, ingredExistencia);
				break;
			
			case 4:
				cout << "4 - Consulta de existencia productos a partir de una cantidad \n";
				cout << "Has accedido a la opcion de Consulta de existencia productos a partir de una cantidad \n";
				break;
							
			case 5:
				cout << "5 - Consulta de proveedores por ingrediente \n";
				cout << "Has accedido a la opcion de Consulta de proveedores por ingrediente \n";
				break;
				
			case 6:
				cout << "6 - Consulta de productos a partir de tu presupuesto \n";
				cout << "Has accedido a la opcion de Consulta de productos a partir de tu presupuesto \n";
				break;
				
			case 7:
				cout << "7 - Has salido del inventario \n\n";
				break;
				
			default: 
				cout << "Recuerda escribir solo numeros del 1 al 7, vuelve a intentar";
		} 
	}
	cout << "�Gracias por acceder al inventario de Chica Pay! \n";
	cout << "Hasta pronto!";
	return 0;
}

