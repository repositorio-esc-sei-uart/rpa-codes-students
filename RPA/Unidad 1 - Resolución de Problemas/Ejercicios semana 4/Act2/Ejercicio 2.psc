Algoritmo La_otra_nota
	
	Definir NotaA Como Real
	Definir NotaB Como Real
	Definir NotaC Como Real
	Definir NotaF Como Real
	Definir Promedio Como Real
	Definir F Como Real
	
	F <- 0
	
	Escribir "Hola, mucho gusto, ahora le dare el promedio de 3 notas"
	
	Escribir "------------------------------------------------------------------------"
	Escribir "Por favor, escriba la primera nota (Numero entre el 1 y el 10)"
	
	Leer NotaA
	Si NotaA > 0 y NotaA < 11 Entonces
		Escribir "Por favor, escriba la segunda nota"
		Leer NotaB
		Si NotaB > 0 y NotaB < 11 Entonces
			Escribir "Por favor, escriba la tercera nota"
			Leer NotaC
			Si NotaC > 0 y NotaC < 11 Entonces
				NotaF <- NotaA + NotaB + NotaC
				Promedio <- NotaF / 3
				
				Si Promedio >= 7 Entonces
					F <- 1
				SiNo
					Si Promedio < 4 Entonces
						F <- 3
					SiNo
						F <- 2
					Fin Si
				Fin Si
				
				Si NotaA < 4 o NotaB < 4 o NotaC < 4 Entonces
					Escribir "------------------------------------------------------------------------"
					Escribir "Ya que una o mas de las notas es menor a 4"
					Escribir "el alumno debe rendir recuperatorio"
				Fin Si
				
				Escribir "------------------------------------------------------------------------"
				Segun F Hacer
					1:
						Escribir "El alumno tiene un promedio de " Promedio " por lo que promociono"
					2:
						Escribir "El alumno tiene un promedio de " Promedio " por lo que regularizo"
						Escribir "y debe rendir un examen final"
					3:
						Escribir "El alumno tiene un promedio de " Promedio " por lo que queda libre y debe recursar"
					De Otro Modo:
						Escribir "Algo salio mal durante la operacion"
				Fin Segun
				Escribir "------------------------------------------------------------------------"
			SiNo
				Escribir "------------------------------------------------------------------------"
				Escribir "La nota no es valida"
				Escribir "------------------------------------------------------------------------"
			Fin Si
		SiNo
			Escribir "La nota no es valida"
		Fin Si
	SiNo
		Escribir "La nota no es valida"
	Fin Si
	
FinAlgoritmo

// NotaF <- NotaA + NotaB + NotaC
// Promedio <- NotaF / 3
