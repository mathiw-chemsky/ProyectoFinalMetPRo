#include <iostream>
#include <locale.h>
using namespace std;

int main (){
	
	setlocale(LC_ALL, "");
	
	int menu = 0;
	cout << "�Sea bienvenido al inventario de Chica Pay! \n\n"; 
	cout << "Men� de opciones: \n";
	
	while (menu != 7){
		cout << "     1 - Alta de productos \n";
		cout << "     2 - Modificaci�n de informaci�n de productos \n";
		cout << "     3 - Consulta de cat�logo de productos existentes \n";
		cout << "     4 - Consulta de existencia productos a partir de una cantidad \n";
		cout << "     5 - Consulta de proveedores por ingrediente \n";
		cout << "     6 - Consulta de productos a partir de tu presupuesto \n";
		cout <<	"     7 - Salir dsel inventario \n\n";
		
		cout << "Escriba el n�mero de opci�n al que desea acceder (solo ingrese n�meros del 1 al 7): \n";
		cin >>  menu;
		
		switch (menu){
			case 1:
				cout << "1 - Alta de productos \n";
				cout << "Has accedido a la opci�n de Alta de productos \n";
				break;
				
			case 2: 
				cout << "2 - Modificaci�n de informaci�n de productos \n";
				cout << "Has accedido a la opci�n de Modificaci�n de informaci�n de productos \n";
				break;
			
			case 3:
				cout << "3 - Consulta de cat�logo de productos existentes \n";
				cout << "Has accedido a la opci�n de Consulta de cat�logo de productos existentes \n";
				break;
			
			case 4:
				cout << "4 - Consulta de existencia productos a partir de una cantidad \n";
				cout << "Has accedido a la opci�n de Consulta de existencia productos a partir de una cantidad \n";
				break;
							
			case 5:
				cout << "5 - Consulta de proveedores por ingrediente \n";
				cout << "Has accedido a la opci�n de Consulta de proveedores por ingrediente \n";
				break;
				
			case 6:
				cout << "6 - Consulta de productos a partir de tu presupuesto \n";
				cout << "Has accedido a la opci�n de Consulta de productos a partir de tu presupuesto \n";
				break;
				
			case 7:
				cout << "7 - Has salido del inventario \n\n";
				break;
				
			default: 
				cout << "Recuerda escribir solo n�meros del 1 al 7, vuelve a intentar";	
		} 
	}
	cout << "�Gracias por acceder al inventario de Chica Pay! \n"; 
	cout << "�Hasta pronto!"; 
}

