Algoritmo promedios
	Definir nota1,nota2,nota3 Como Entero
	Definir promedio Como Real
	
	Escribir 'Ingrese nota 1'
	Leer nota1
	Escribir 'Ingrese nota 2'
	Leer nota2
	Escribir 'Ingrese nota 3'
	Leer nota3
	
	Si (nota1 > 0 Y nota1 <= 10) Y (nota2 > 0 Y nota2 <= 10) Y (nota3 > 0 Y nota3 <= 10) Entonces
		promedio <- (nota1+nota2+nota3)/3
		
		Si promedio >= 7 Entonces
			Escribir 'Eximido'
		SiNo
			Si promedio >= 4 Entonces
				Escribir 'El alumno regulariza. Debe rendir examen final.'
			SiNo
				Escribir 'El alumno quedo libre. Debe recusar la asignatura'
			FinSi
		FinSi
		Escribir 'El promedio es ',promedio
	SiNo
		Escribir "El rango de notas es de 1 a 10. Reingrese las notas nuevamente"
	Fin Si
	
FinAlgoritmo
