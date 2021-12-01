//Alumno: Pablo Laime
Algoritmo Calculadora
	//Defino variables
	Definir a, b Como Entero
	Definir op Como Entero
	Definir operacion Como Real
	
	//Leo la entrada de datos
	Escribir "Ingrese un número entero"
	Leer a
	Escribir "Por favor, ingrese otro número entero"
	Leer b
	Escribir "MENU DE SELECCIÓN" // Lo hice de esta manera por que no me dejaba ingresar caracteres en la estructura Segun
	Escribir "Seleccione el operador que desea aplicar a ambos números"
	Escribir "(1) Suma " " (2) Resta " " (3) Multiplicación " " (4) División " " (5) Modulo "
	Leer op
	
	//Uso la estructura Segun para asignar la operacion
	Segun op Hacer
		1:
			Escribir "Usted selecciono la operación suma " a " + " b
			operacion <- a + b
			Escribir a " + " b " = " operacion
		2:
			Escribir "Usted selecciono la operación resta " a " - " b
			operacion <- a - b
			Escribir a " - " b " = " operacion
		3:
			Escribir "Usted selecciono la operación multiplicación " a " * " b
			operacion <- a * b
			Escribir a " * " b " = " operacion
		4:	
			
			Si b>0 Entonces
				Escribir "Usted selecciono la operación división " a " / " b
				operacion <- a / b
				Escribir a " / " b " = " operacion
			SiNo
				Escribir "No es posible realizar la operacion "
			Fin Si
			
		5:
			Escribir "Usted selecciono la operación modúlo " a " mod " b
			operacion <- a mod b
			Escribir a " mod " b " = " operacion
			
		De Otro Modo:
			Escribir "Usted selecciono una opción invalída"
	Fin Segun
	Escribir "Fin de la sesión"
	
FinAlgoritmo
