//Alumno: Pablo Laime
Algoritmo Calculadora
	//Defino variables
	Definir a, b Como Entero
	Definir op Como Entero
	Definir operacion Como Real
	
	//Leo la entrada de datos
	Escribir "Ingrese un n�mero entero"
	Leer a
	Escribir "Por favor, ingrese otro n�mero entero"
	Leer b
	Escribir "MENU DE SELECCI�N" // Lo hice de esta manera por que no me dejaba ingresar caracteres en la estructura Segun
	Escribir "Seleccione el operador que desea aplicar a ambos n�meros"
	Escribir "(1) Suma " " (2) Resta " " (3) Multiplicaci�n " " (4) Divisi�n " " (5) Modulo "
	Leer op
	
	//Uso la estructura Segun para asignar la operacion
	Segun op Hacer
		1:
			Escribir "Usted selecciono la operaci�n suma " a " + " b
			operacion <- a + b
			Escribir a " + " b " = " operacion
		2:
			Escribir "Usted selecciono la operaci�n resta " a " - " b
			operacion <- a - b
			Escribir a " - " b " = " operacion
		3:
			Escribir "Usted selecciono la operaci�n multiplicaci�n " a " * " b
			operacion <- a * b
			Escribir a " * " b " = " operacion
		4:	
			
			Si b>0 Entonces
				Escribir "Usted selecciono la operaci�n divisi�n " a " / " b
				operacion <- a / b
				Escribir a " / " b " = " operacion
			SiNo
				Escribir "No es posible realizar la operacion "
			Fin Si
			
		5:
			Escribir "Usted selecciono la operaci�n mod�lo " a " mod " b
			operacion <- a mod b
			Escribir a " mod " b " = " operacion
			
		De Otro Modo:
			Escribir "Usted selecciono una opci�n inval�da"
	Fin Segun
	Escribir "Fin de la sesi�n"
	
FinAlgoritmo
