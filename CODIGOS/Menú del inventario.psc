Algoritmo inventario
	Definir menu Como Entero;
	menu = 0;
	Escribir "�Sea bienvenido al inventario de Chica Pay!";
	Escribir "Men� de opciones:";
	Mientras menu <> 7 Hacer
		Escribir "1 - Alta de productos";
		Escribir "2 - Modificaci�n de informaci�n de productos";
		Escribir "3 - Consulta de cat�logo de productos existentes";
		Escribir "4 - Consulta de existencia productos a partir de una cantidad";
		Escribir "5 - Consulta de proveedores por ingrediente";
		Escribir "6 - Consulta de productos a partir de tu presupuesto";
		Escribir "7 - Salir del inventario";
		
		Escribir "Escriba el n�mero de opci�n al que desea acceder (solo ingrese n�meros del 1 al 7)";
		Leer menu;
		
	
		Segun menu Hacer
			1: 
				Escribir "1 - Alta de productos";
				Escribir "Has accedido a la opci�n de Alta de productos";
				//Colocar mensaje de confirmaci�n para asegurarse que est� en la opci�n correcta
			2:
				Escribir "2 - Modificaci�n de informaci�n de productos";
				Escribir "Has accedido a la opci�n de Modificaci�n de informaci�n de productos";
			3:
				Escribir "3 - Consulta de cat�logo de productos existentes";
				Escribir "Has accedido a la opci�n de Consulta de cat�logo de productos existentes";
			4:
				Escribir "4 - Consulta de existencia productos a partir de una cantidad";
				Escribir "Has accedido a la opci�n de Consulta de existencia productos a partir de una cantidad";
			5:
				Escribir "5 - Consulta de proveedores por ingrediente";
				Escribir "Has accedido a la opci�n de Consulta de proveedores por ingrediente";
			6:
				Escribir "6 - Consulta de productos a partir de tu presupuesto";
				Escribir "Has accedido a la opci�n de Consulta de productos a partir de tu presupuesto";
			7:
				Escribir "7 - Salir del inventario";
				
			De Otro Modo:
				Escribir "Recuerda escribir solo n�meros del 1 al 7, vuelve a intentar";
		Fin Segun
	Fin Mientras
	Escribir  "�Gracias por acceder al inventario de Chica Pay! �Hasta pronto!";
FinAlgoritmo
