//Alumno: Pablo Laime
Algoritmo Promedio_de_motas
	//Definir variables
	Definir nota1, nota2, nota3 como entera
	Definir promedio Como Real
	Definir condicion Como Entero
	//Asigno un valor
	condicion <- 0
	//Leo la entrada de datos
	Escribir "Ingrese las notas del alumno (1-10)"
	Escribir "Ingrese la primer nota"
	Leer nota1
	Escribir "Ingrese la segunda nota"
	Leer nota2
	Escribir "Ingrese la tercer nota"
	Leer nota3
	//Asigno la expresion a la variable promedio
	promedio <- (nota1+nota2+nota3)/3
	
	//Verifico que las notas ingresadas sean validas 
	Si nota1 <= 10 Y nota2 <= 10 Y nota3 <= 10 Y nota1 >= 1 Y nota2 >= 1 Y nota3 >= 1 Entonces
		Si nota1 >= 4 Y nota2 >= 4 Y nota3 >= 4 Entonces  //No se me ocurria como hacer que si una de las notas era menor a 4 debia rendir recuperatorio
			Si promedio >= 7 Entonces
				condicion <- 1
			SiNo
				Si promedio >= 4 Y promedio < 7 Entonces
					condicion <- 2
				SiNo
					Si promedio < 4 Entonces
						condicion <- 3
					Fin Si
				Fin Si
			Fin Si
		SiNo
			Escribir "Debe rendir recuperatorio " promedio
		Fin Si
	SiNo
		Escribir "Una de las notas ingresadas es invalida, por favor verifique e intente nuevamente"
	Fin Si
	
	//Segun el valor escribo la condicion del alumno
	Segun condicion Hacer
		1:
			Escribir "El alumno queda Eximido con un promedio de: " promedio
		2:
			Escribir "El alumno Regulariza con un promedio de: " promedio
		3:
			Escribir "El alumno queda Libre promedio de: " promedio
	Fin Segun
	Escribir "Fin de la sesion"
   
FinAlgoritmo
