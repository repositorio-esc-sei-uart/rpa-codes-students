Algoritmo promedio_alumnos
	Definir alumno, n, nota, suma Como Entero
	Definir promedio Como Real
	
	Para alumno<-1 Hasta 6 Con Paso 1 Hacer
		Escribir "ALUMNO ", alumno
		suma<-0
	    
		Para n<-1 Hasta 3 Con Paso 1 Hacer
			Escribir n "° nota:"
			Leer nota
			suma<-suma+nota
		Fin Para
		promedio<- suma/3
		Escribir "Promedio alumno ", alumno, ": ", promedio
		Si promedio>=7 Entonces
			Escribir "Promociona"
		SiNo
			Si promedio>=4 Entonces
				Escribir "Regulariza"
			SiNo
				Escribir "Libre"
			FinSi
		FinSi
	Fin Para
FinAlgoritmo
