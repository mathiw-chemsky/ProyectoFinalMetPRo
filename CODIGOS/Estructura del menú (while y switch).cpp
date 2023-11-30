#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

struct ingredientes{
  string nombre;
  int cantidad;
  string proveedor;
  float precio;
}ingrediente1, ingrediente2, ingrediente3;

/* void AltaIngredientes(ingredientes ingrediente){
	ingredientes ingrediente1;
	
				cout << "Ingresa el nombre del ingrediente \n";
				cin >> ingrediente1.nombre;
				cout << "El nombre de tu producto es: \n" << ingrediente1.nombre << " \n";
				cout << "Ingresa la cantidad de ese ingrediente \n";
				cin >> ingrediente1.cantidad;
				cout << "La cantidad de tu producto es: \n" << ingrediente1.cantidad << " \n";
				cout << "Ingresa el proveedor de ese ingrediente \n";
				cin >> ingrediente1.proveedor;
				cout << "El provedor de tu ingrediente es: \n" << ingrediente1.proveedor << " \n";
				cout << "Ingresa el precio de ese ingrediente \n";
				cin >> ingrediente1.precio;
				cout << "El precio de tu ingrediente es: \n" << ingrediente1.precio << " \n";
}
*/

int main (){

	int menu = 0;
	cout << "¡Sea bienvenido al inventario de Chica Pay! \n\n";
	cout << "Menu de opciones: \n";
	
	while (menu != 7){
		cout << "     1 - Alta de productos \n";
		cout << "     2 - Modificacion de informacion de productos \n";
		cout << "     3 - Consulta de catalogo de productos existentes \n";
		cout << "     4 - Consulta de existencia productos a partir de una cantidad \n";
		cout << "     5 - Consulta de proveedores por ingrediente \n";
		cout << "     6 - Consulta de productos a partir de tu presupuesto \n";
		cout <<	"     7 - Salir dsel inventario \n\n";
		
		cout << "Escriba el numero de opcion al que desea acceder (solo ingrese numeros del 1 al 7): \n";
		cin >>  menu;
		
		switch (menu){
			case 1:
				cout << "1 - Alta de productos \n";
				cout << "Has accedido a la opcion de Alta de productos \n";
//				AltaIngredientes(ingredientes ingrediente);
				cout << "Ingresa el nombre del ingrediente \n";
				cin >> ingrediente1.nombre;
				cout << "El nombre de tu producto es: \n" << ingrediente1.nombre << " \n";
				cout << "Ingresa la cantidad de ese ingrediente \n";
				cin >> ingrediente1.cantidad;
				cout << "La cantidad de tu producto es: \n" << ingrediente1.cantidad << " \n";
				cout << "Ingresa el proveedor de ese ingrediente \n";
				cin >> ingrediente1.proveedor;
				cout << "El provedor de tu ingrediente es: \n" << ingrediente1.proveedor << " \n";
				cout << "Ingresa el precio de ese ingrediente \n";
				cin >> ingrediente1.precio;
				cout << "El precio de tu ingrediente es: \n" << ingrediente1.precio << " \n";
				break;
				
			case 2: 
				cout << "2 - Modificacion de informacion de productos \n";
				cout << "Has accedido a la opcion de Modificacion de informacion de productos \n";
				break;
			
			case 3:
				cout << "3 - Consulta de catalogo de productos existentes \n";
				cout << "Has accedido a la opcion de Consulta de catÃ¡logo de productos existentes \n";
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
	cout << "¡Gracias por acceder al inventario de Chica Pay! \n";
	cout << "Hasta pronto!";
	return 0;
}

