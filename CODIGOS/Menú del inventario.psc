Algoritmo inventario
	Definir menu Como Entero;
	menu = 0;
	Escribir "¡Sea bienvenido al inventario de Chica Pay!";
	Escribir "Menú de opciones:";
	Mientras menu <> 7 Hacer
		Escribir "1 - Alta de productos";
		Escribir "2 - Modificación de información de productos";
		Escribir "3 - Consulta de catálogo de productos existentes";
		Escribir "4 - Consulta de existencia productos a partir de una cantidad";
		Escribir "5 - Consulta de proveedores por ingrediente";
		Escribir "6 - Consulta de productos a partir de tu presupuesto";
		Escribir "7 - Salir del inventario";
		
		Escribir "Escriba el número de opción al que desea acceder (solo ingrese números del 1 al 7)";
		Leer menu;
		
	
		Segun menu Hacer
			1: 
				Escribir "1 - Alta de productos";
				Escribir "Has accedido a la opción de Alta de productos";
				//Colocar mensaje de confirmación para asegurarse que está en la opción correcta
			2:
				Escribir "2 - Modificación de información de productos";
				Escribir "Has accedido a la opción de Modificación de información de productos";
			3:
				Escribir "3 - Consulta de catálogo de productos existentes";
				Escribir "Has accedido a la opción de Consulta de catálogo de productos existentes";
			4:
				Escribir "4 - Consulta de existencia productos a partir de una cantidad";
				Escribir "Has accedido a la opción de Consulta de existencia productos a partir de una cantidad";
			5:
				Escribir "5 - Consulta de proveedores por ingrediente";
				Escribir "Has accedido a la opción de Consulta de proveedores por ingrediente";
			6:
				Escribir "6 - Consulta de productos a partir de tu presupuesto";
				Escribir "Has accedido a la opción de Consulta de productos a partir de tu presupuesto";
			7:
				Escribir "7 - Salir del inventario";
				
			De Otro Modo:
				Escribir "Recuerda escribir solo números del 1 al 7, vuelve a intentar";
		Fin Segun
	Fin Mientras
	Escribir  "¡Gracias por acceder al inventario de Chica Pay! ¡Hasta pronto!";
FinAlgoritmo
