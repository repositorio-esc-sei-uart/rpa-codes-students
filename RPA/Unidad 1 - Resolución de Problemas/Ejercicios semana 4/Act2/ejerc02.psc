Algoritmo Estado_del_alumno
	
	
	
	// Definir variables.
	
	Definir Promedio Como Numerica
	Definir Nota3 Como Entera
	Definir Nota2 Como Entera
	Definir Nota1 Como Entera
	
	// Datos de entrada.
	Escribir " Ingrese la primer nota por favor. "
	Leer Nota1
	Escribir " Ingrese la segunda nota por favor. "
	Leer Nota2
	Escribir "  Ingrese la tercer nota por favor. "
	Leer Nota3
	
	// Proceso.
	Promedio<-(Nota1+Nota2+Nota3)/3
	si Nota1>0 Y Nota1<=10 Y Nota2 >0 Y Nota2 <= 10 Y Nota3>0 Y Nota3 <=10
		
		Si Promedio>=7 Entonces
			Escribir " El alumno promociona con un promedio de:" Promedio
			
		SiNo 
			si Promedio>=4 Y Promedio<7 Entonces
				Escribir " El alumno regulariza con un promedio de:" Promedio " y debe rendir examen final."
			SiNo
				Escribir " El alumno queda libre y debe recursar la materia."
			Fin Si
			
		Fin Si
	
		
	SiNo
		Escribir " Una de las notas ingresadas es inválida. "
	FinSi
	si Nota1<4 Entonces
		Escribir " Debe rendir recuperatorio de la nota 1. "
	FinSi
	si Nota2<4 Entonces
		Escribir " Debe rendir recuperatorio de la nota 2. "
		
	FinSi
	
	si Nota3<4 Entonces
		Escribir " Debe rendir recuperatorio de la nota 3. "	
	FinSi
	
	

	
FinAlgoritmo
