//Alumno: Pablo Laime
Algoritmo Suma_de_pares
	//Defino las variables
	Definir num, sumnum Como Entero
	
	Escribir "Ingrese n�meros enteros, hasta que la suma de los numeros no supere el valor 30 usted podra seguir ingresando numeros"
	
	Repetir
		Escribir "Ingrese un n�mero"
		Leer num
		sumnum <- sumnum + num      //Podemos ingresar numeros hasta que la suma de ellos sea mayor a 3
	Hasta Que sumnum > 30
	
	Escribir "La suma de los n�meros es: " sumnum
	
FinAlgoritmo
