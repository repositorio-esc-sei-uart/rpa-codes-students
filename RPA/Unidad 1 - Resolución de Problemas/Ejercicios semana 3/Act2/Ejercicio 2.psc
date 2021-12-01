Algoritmo Notas
	
	Definir NotaA Como Real
	Definir NotaB Como Real
	Definir NotaAB Como Real
	Definir Promedio Como Real
	
	Escribir "Hola, mucho gusto, ahora le dare el promedio de 2 notas"
	Escribir "Por favor, escriba la primera nota (Entre el 1 y el 10)"
	
	Repetir
		Leer NotaA
		Si NotaA <= 0 o NotaA >= 11 Entonces
			Escribir "El numero ingresado no se encuentra entre el 1 y el 10"
		SiNo
			Escribir "Gracias, por favor, ingrese la segunda nota"
		Fin Si
	Hasta Que NotaA > 0 y NotaA < 11
	
	Repetir
		Leer NotaB
		Si NotaB <= 0 o NotaB >= 11 Entonces
			Escribir "El numero ingresado no se encuentra entre el 1 y el 10"
		SiNo
			Escribir "Gracias"
		Fin Si
	Hasta Que NotaB > 0 y NotaB < 11
	
	NotaAB <- NotaA + NotaB
	Promedio <- NotaAB / 2
	
	Escribir "Las notas son " NotaA " y " NotaB
	Escribir "Su promedio seria " Promedio
	
	Si NotaA >= 4 y NotaB >= 4 Entonces
		Escribir "Ya que ambas notas son mayores a 4 el alumno aprobo"
	SiNo
		Escribir "Ya que una o ambas notas son menores a 4 el alumno desaprobo"
	Fin Si
	
FinAlgoritmo
