//Alumno: Pablo Laime
Algoritmo Condicion_de_alumnos
	//Defino variables
	Definir nota1, nota2, nota3, a Como Entero
	Definir promedio Como Real
	promedio<-0 //Inicializo promedio en 0
	
	//Uso la Estructura Para con la Estructura Si-Entonces
	Para a <-1 Hasta 6 Con Paso 1 Hacer
		//Leo la entrada de datos
		Escribir  a "°" " alumno "
		Escribir "Ingrese las tres notas de los parciales del alumno (1-10)"
		Escribir "Ingrese la primer nota"
		Leer nota1
		Escribir "Ingrese la segunda nota"
		Leer nota2
		Escribir "Ingrese la tercer nota"
		Leer nota3
		
		promedio <- (nota1+nota2+nota3) / 3
		
		//Completo la estructura Si-Entonces para saber la condicion del alumno segun el promedio
		Si nota1 <= 10 Y nota2 <= 10 Y nota3 <= 10 Y nota1 > 0 Y nota2 > 0 Y nota3 > 0 Entonces
			Si nota1 >= 4 Y nota2 >= 4 Y nota3 >= 4 Entonces
				Si promedio >= 7 Entonces
					Escribir "El " a "° alumno Promociona la materia con un promedio de: " promedio
				SiNo
					Si promedio >= 4 Entonces
						Escribir "El " a "° alumno Regulariza la materia con un promedio de: " promedio
					SiNo
						Escribir "El " a "° alumno queda Libre con un promedio de: "
					Fin Si
				Fin Si
			SiNo
				Escribir "El " a "° alumno debe rendir recuperatorio"
			Fin Si
		SiNo
			Escribir "Usted ingreso una nota no valida"
		Fin Si
		promedio<-0
		
	Fin Para
	
FinAlgoritmo
