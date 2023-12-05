//PROGRAMA para llevar la construcción de un inventario de productos que sirvan para una futura tienda en línea.
#include <iostream>
#include <string.h>
#include <locale.h>
#include <conio.h>
using namespace std;

//MODULO: REGISTRO DE INGREDIENTES--------------------------------------------------------------------------------------------------------------------------
struct ingredientes{
  string nombre;
  float cantidad;
  string proveedor;
  float precio;
  string clave;
} ingrediente[50];

//1.1.- FUNCION CREAR CLAVE---------------------------------------------------------------------------------------------------------------------------------------
string creaClave(ingredientes ingrediente[], int &ingredExistencia){
    string clave = "";
   	char buffer[20];


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

//1.- PROCEDIMIENTO DE ALTA DE INGREDIENTES-----------------------------------------------------------------------------------------------------------------------
void AltaIngredientes(ingredientes ingrediente[], int &ingredExistencia){
	int confirmacion;
	string nombre;
	float cantidad;
	string proveedor;
	float precio;
	string clave;

	//1.- Solicitar informacion al usuario y guardarlo en variables temporales
	fflush(stdin);
	cout << "Ingrese el nombre del ingrediente: ";
	getline(cin,nombre);
	cout << "Ingrese la cantidad del ingrediente: ";
	cin >> cantidad;
	fflush(stdin);
	cout << "Ingrese el nombre del proveedor del ingrediente: ";
	getline(cin,proveedor);
	cout << "Ingrese el precio del ingrediente: ";
	cin >> precio;
	cout << "\n";

	//2.- Imprimir el mensaje de confirmacion
	cout << "Nombre del ingrediente: " << nombre << "\n";
	cout << "Cantidad del ingrediente: " << cantidad << "\n";
 	cout << "Nombre del proveedor: " << proveedor << "\n";
	cout << "Precio del ingrediente: " << precio << "\n";
    cout << "Si la informacion es correcta presione 1, si la informacion es incorrecta presione cualquier numero \n";
    cin >> confirmacion;

    //Esto solo es para verificar que no se guardó la información, después de puede borrar
    if(confirmacion != 1){
 	cout << "Nombre del ingrediente: " << ingrediente[ingredExistencia].nombre << "\n";
	cout << "Cantidad del ingrediente: " << ingrediente[ingredExistencia].cantidad << "\n";
 	cout << "Nombre del proveedor: " << ingrediente[ingredExistencia].proveedor << "\n";
	cout << "Precio del ingrediente: " << ingrediente[ingredExistencia].precio << "\n";

		return;
    }else{
	//3.- si es correcto, almacenar las variables temporales en cada campo del registro e ir al paso 4, sino salir del procedimiento sin guardar en el registro nada.
 	ingrediente[ingredExistencia].nombre = nombre;
	ingrediente[ingredExistencia].cantidad = cantidad;
	ingrediente[ingredExistencia].proveedor = proveedor;
	ingrediente[ingredExistencia].precio = precio;
	cout << "Informacion almacenada existosamene. \n";

	//4.- llamar a la función "creaClave"
	clave = creaClave(ingrediente, ingredExistencia);
	cout << "La clave es: " << clave << "\n";
	ingrediente[ingredExistencia-1].clave = clave;

	}
}


//2.- PROCEDIMIENTO PARA MODIFICAR INGREDIENTES---------------------------------------------------------------------------------------------------------------------
void ModificaIngredientes(ingredientes ingrediente[], int ingredExistencia){
	int i = 0;
	int confirmacion;
	string nombre;
	float cantidad;
	string proveedor;
	float precio;
	int submenu;
	string consultaClave;

	//1.- solicitud de clave y comparacion en ciclo while
	cout << "Ingresa la clave del ingrediente que desea modificar: \n";
	cin >> consultaClave;

    while(consultaClave != ingrediente[i].clave && i<ingredExistencia){
	i = i + 1;
	}

	if(i >= ingredExistencia){
		cout << "La clave es incorrecta. \n";
		return;
	}else{
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
				cout << "Nombre del ingrediente: " << nombre << "\n";
    			cout << " ¿Esta seguro de que desea guardar los cambios? Si la informacion es correcta y desea guardar, presione 1. \n";
				cout << "Si la informacion es incorrecta y no desea guardar presione cualquier numero \n";
    			cin >> confirmacion;
    			if(confirmacion != 1){
    			//Esto solo es para verificar que no se guardó la información, después de puede borrar
 				cout << "Nombre del ingrediente: " << ingrediente[i].nombre << "\n";
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
}


//3.- PROCEDIMIENTO PARA CONSULTA DE CATALOGO-------------------------------------------------------------------------------------------------------------------------
void consultaCatalogo(ingredientes ingrediente[], int ingredExistencia){

	 cout << "Catalogo de ingredientes existentes. \n";
	 cout << "--------------------------------------------------------------------------------------------------------------------------------------------\n";

	 for(int i = 0; i < ingredExistencia; i++){
	    cout << "nombre del ingrediente: " << ingrediente[i].nombre << "\n";
		cout << "cantidad del ingrediente: " << ingrediente[i].cantidad << "\n";
 		cout << "nombre del proveedor: " << ingrediente[i].proveedor << "\n";
		cout << "precio del ingrediente: " << ingrediente[i].precio << "\n";
		cout << "clave del ingrediente: " << ingrediente[i].clave << "\n";
		cout << "-----------------------------------------------------------------------------------------\n";
	 }
}

//4.- PROCEDIMIENTO para  Consulta de existencia productos a partir de una cantidad
void consultaExistencia(ingredientes ingrediente[], int ingredExistencia){
	 float consultaCantidad;

	 cout << "Catalogo de ingredientes por cantidad existente. \n";
	 cout << "--------------------------------------------------------------------------------------------------------------------------------------------\n";
	 cout << "Ingresa la cantidad de ingrediente que desea consultar: \n";
	 cin >>  consultaCantidad;
  	 cout << "-----------------------------------------------------------------------------------------\n";

	 for(int i = 0; i < ingredExistencia; i++){
	 	 if(consultaCantidad >= ingrediente[i].cantidad){
	    			cout << "Nombre del ingrediente: " << ingrediente[i].nombre << "\n";
					cout << "Cantidad del ingrediente: " << ingrediente[i].cantidad << "\n";
 					cout << "Nombre del proveedor: " << ingrediente[i].proveedor << "\n";
					cout << "Precio del ingrediente: " << ingrediente[i].precio << "\n";
					cout << "Clave del ingrediente: " << ingrediente[i].clave << "\n";
					cout << "-----------------------------------------------------------------------------------------\n";
		  }
	 }
}

//5.- PROCEDIMIENTO para Consulta de proveedores por ingrediente
void consultaProveedor(ingredientes ingrediente[], int ingredExistencia){
	 string consultaProveedor;

	 cout << "Catalogo de consulta de ingrediente por proveedor determinado por el usuario. \n";
	 cout << "--------------------------------------------------------------------------------------------------------------------------------------------\n";

	fflush(stdin);
	cout << "Ingrese el nombre del proveedor del ingrediente: ";
	getline(cin,consultaProveedor);
	cout << "-----------------------------------------------------------------------------------------\n";

	 for(int i = 0; i < ingredExistencia; i++){
	 	 if(consultaProveedor == ingrediente[i].proveedor){
	    			cout << "Nombre del ingrediente: " << ingrediente[i].nombre << "\n";
					cout << "Cantidad del ingrediente: " << ingrediente[i].cantidad << "\n";
 					cout << "Nombre del proveedor: " << ingrediente[i].proveedor << "\n";
					cout << "Precio del ingrediente: " << ingrediente[i].precio << "\n";
					cout << "Clave del ingrediente: " << ingrediente[i].clave << "\n";
					cout << "-----------------------------------------------------------------------------------------\n";
		  }
	 }
}

//6.- PROCEDIMIENTO de Consulta de Productos que cuesten más de un precio determinado por el usuario
void consultaPrecio(ingredientes ingrediente[], int ingredExistencia){
	 float consultaPrecio;

	 cout << "Catalogo de ingredientes que cuesten más de un precio determinado por el usuario. \n";
	 cout << "--------------------------------------------------------------------------------------------------------------------------------------------\n";

	 cout << "Ingresa el precio del ingrediente que desea consultar: \n";
	 cin >>  consultaPrecio;
     cout << "-----------------------------------------------------------------------------------------\n";

	 for(int i = 0; i < ingredExistencia; i++){
	 	 if(consultaPrecio < ingrediente[i].precio){
	    			cout << "Nombre del ingrediente: " << ingrediente[i].nombre << "\n";
					cout << "Cantidad del ingrediente: " << ingrediente[i].cantidad << "\n";
 					cout << "Nombre del proveedor: " << ingrediente[i].proveedor << "\n";
					cout << "Precio del ingrediente: " << ingrediente[i].precio << "\n";
					cout << "Clave del ingrediente: " << ingrediente[i].clave << "\n";
					cout << "-----------------------------------------------------------------------------------------\n";
		  }
	 }
}

//FUNCION PRINCIPAL-----------------------------------------------------------------------------------------------------------------------------------------
int main (){
    int menu = 0;
	int ingredExistencia= 0;
	
	cout << "¡Sea bienvenido al inventario de Chica Pay! \n\n";

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
				cout << "4 - Consulta de existencia de productos a partir de una cantidad \n";
				consultaExistencia(ingrediente, ingredExistencia);
				break;
							
			case 5:
				cout << "5 - Consulta de proveedores por ingrediente \n";
				consultaProveedor(ingrediente, ingredExistencia);
				break;
				
			case 6:
				cout << "6 - Consulta de Productos que cuesten mas de un precio determinado por el usuario \n";
				consultaPrecio(ingrediente, ingredExistencia);
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

