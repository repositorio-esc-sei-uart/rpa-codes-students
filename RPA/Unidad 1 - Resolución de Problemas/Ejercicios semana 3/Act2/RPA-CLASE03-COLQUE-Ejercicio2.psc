Algoritmo Notas
	
	Definir A, B Como Entero
	Definir Promedio Como Real
	
	Escribir "Hola, en la escala del 1 al 10"
	Escribir "Ingrese la primer Nota"
	Leer A;
	
	Escribir "Ingrese la segunda Nota"
	Leer B;
	
	Si A<=10 y B<=10 Entonces
		
		Si A<=10 Entonces
			Si A>=4 Entonces
				Escribir "Nota 1: El alumno aprobó"
			SiNo
				Escribir "Nota 1: El alumno desaprobó"
			Fin Si
		SiNo
			
		Fin Si
		
		Si B<=10 Entonces
			Si B>=4 Entonces
				Escribir "Nota 2: El alumno aprobó"
			SiNo
				Escribir "Nota 2: El alumno desaprobó"
			Fin Si
		SiNo
			
		Fin Si
		
		Promedio<-(A+B)/2
		Escribir "El promedio de las notas es: " Promedio
	SiNo
		escribir "La Nota ingresada es Invalida"
	Fin Si
	
FinAlgoritmo