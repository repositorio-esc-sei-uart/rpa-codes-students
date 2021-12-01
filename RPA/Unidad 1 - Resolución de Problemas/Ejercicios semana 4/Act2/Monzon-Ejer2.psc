Algoritmo alumno
	Definir not1, not2, not3 Como Entero
	Definir prom como real
	Definir alum como caracter
	
	Escribir "Ingrese nombre del alumno: "
	Leer alum
	Escribir "Ingrese sus notas: "
	Leer not1, not2, not3
	promedio <- (not1 + not2 + not3) /3
	
	Si promedio >= 7 Entonces
		Escribir "El alumno está apto para promocionar la materia."
	Sino 
		Si promedio >= 4 Entonces
			Escribir "El alumno está apto para regularizar la materia. Pero si alguna nota es menor a 4, debe realizar un recuperatorio."
		Sino
			Escribir "El alumno quedó libre y debe recursar la materia."
		FinSi
	FinSi

FinAlgoritmo
