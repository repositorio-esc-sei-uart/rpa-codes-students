Algoritmo La_nota_pero_de_a_6
	//Definiciones
	Definir NotaA Como Real
	Definir NotaB Como Real
	Definir NotaC Como Real
	Definir NotaF Como Real
	Definir Promedio Como Real
	Definir F Como Real
	Definir Contador Como Entero
	Definir Error Como Entero
	//Iniciales
	F <- 0
	Error <- 0
	//Entrada
	Escribir "Hola, mucho gusto, ahora le dare el promedio de 3 notas para 6 alumnos"
	Escribir "------------------------------------------------------------------------"
	Escribir "Por favor, escriba la primera nota del 1° alumno"
	Escribir "(Numero entre el 1 y el 10)"
	//Calculo
	Para Contador <- 1 Hasta 6 Con Paso 1 Hacer
		si Error == 1 Entonces
			Escribir "(Recuerde, Numeros del 1 al 10)"
		FinSi
		Si Contador > 1 Entonces
			Escribir "Por favor, escriba la primera nota del " Contador "° alumno"
		Fin Si
	Leer NotaA
	Si NotaA > 0 y NotaA < 11 Entonces
		Escribir "Por favor, escriba la segunda nota nota del " Contador "° alumno"
		Leer NotaB
		Si NotaB > 0 y NotaB < 11 Entonces
			Escribir "Por favor, escriba la tercera nota nota del " Contador "° alumno"
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
				//SalidaSi
				Si NotaA < 4 o NotaB < 4 o NotaC < 4 Entonces
					Escribir "------------------------------------------------------------------------"
					Escribir "Ya que una o mas de las notas es menor a 4"
					Escribir "el alumno " Contador " debe rendir recuperatorio"
				Fin Si
				//Salida
				Segun F Hacer
					1:
						Escribir "El alumno " Contador " tiene un promedio de " Promedio " por lo que promociono"
					2:
						Escribir "El alumno " Contador " tiene un promedio de " Promedio " por lo que regularizo"
						Escribir "y debe rendir un examen final"
					3:
						Escribir "El alumno " Contador " tiene un promedio de " Promedio " por lo que queda libre..."
						Escribir "...y debe recursar"
					De Otro Modo:
						Escribir "Algo salio mal durante la operacion"
				Fin Segun
				Escribir "------------------------------------------------------------------------"
			SiNo
				Error <- 1
				Escribir "¡ERROR!:La nota no es valida y se saltara al suguiente alumno"
				Escribir "------------------------------------------------------------------------"
			Fin Si
		SiNo
			Error <- 1
			Escribir "¡ERROR!:La nota no es valida y se saltara al suguiente alumno"
			Escribir "------------------------------------------------------------------------"
		Fin Si
	SiNo
		Error <- 1
		Escribir "¡ERROR!:La nota no es valida y se saltara al suguiente alumno"
		Escribir "------------------------------------------------------------------------"
	Fin Si
	FinPara
	//Fin
FinAlgoritmo
