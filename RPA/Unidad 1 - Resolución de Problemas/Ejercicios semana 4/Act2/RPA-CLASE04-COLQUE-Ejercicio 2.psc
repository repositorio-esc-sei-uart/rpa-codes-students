Proceso Promedio
	
	//Defino las variables a emplear
	Definir Not1, Not2, Not3 Como Entero
	Definir Prom Como Real
	Definir Estado Como Real //1,2 o 3.
	Estado <- 0
	Definir Recup Como Logico //V o F
	Recup <- Falso
	
	
	//Solicito las notas al usuario
	Escribir "Hola, espero estes muy bien hoy."
	Escribir ""
	Escribir "A continuación; en una escala de evaluación del 1 al 10, ingrese la primer nota."
	Leer Not1
	Escribir "Ahora, ingrese la segunda nota."
	Leer Not2
	Escribir "Por último, ingrese la tercer nota."
	Leer Not3
	
	Si Not1 >= 1 y Not1 <= 10 y Not2 >= 1 y Not2 <= 10 y Not3 >= 1 y Not3 <= 10 Entonces
		Prom <- (Not1 + Not2 + Not3) /3
		Escribir "El promedio es: " Prom
		
		Escribir "El estado del alumno es: (1) Promocionado  - (2) Regular - (3) Libre."
		
		Si Prom >= 7 Entonces
			Estado <- 1
			Escribir Estado " - Eximido al exámen final."
		SiNo
		Fin Si
		
		Si Prom<7 y Prom>=4 Entonces
			Estado <- 2
			Escribir Estado " - Debe rendir exámen final."
		SiNo
		Fin Si
		
		Si Prom < 4 Entonces
			Estado <- 3
			Escribir Estado " - Debe recursar la asignatura."
		SiNo
		Fin Si
		
		Si  Not1 < 4 o Not2 < 4 o Not3 < 4 Entonces
			Recup <- Verdadero
			Escribir "Debe rendir recuperatorio?: " Recup
		SiNo
		Fin Si
		
	SiNo
		Escribir "Una o mas notas ingresadas son INVALIDAS, por favor reintente"
	Fin Si
	
FinProceso