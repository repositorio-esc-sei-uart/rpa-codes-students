Algoritmo Condicion_alumno
	
	// Variables.
	Definir n, suma, nota, alumno, promocionan, regularizan, libres, recupera Como Entero
	Definir promedio Como Real
	
	
	promocionan<-0
	regularizan<-0
	libres<-0
	recupera<-0

	Para alumno<-1 Hasta 2 Con Paso 1 Hacer
			Escribir " Ingresar las 3 notas del alumno N°" alumno " en un intervalo de [1-10]."
			suma<-0
			Para n<-1 Hasta 3 Con Paso 1 Hacer
				Escribir n "° nota"
				Leer nota
				suma<-suma+nota
				si nota<=0 o nota>10
					Escribir " La nota ingresada no entra en el intervalo [1-10] "
				SiNo  
					si nota<4
						Escribir " El parcial debe ser recuperado."
						recupera<-recupera+1
					FinSi
					
				FinSi
				
			Fin Para
			promedio<-suma/3
			si (promedio>=7) Y (promedio<=10)
				Escribir " El alumno promociona con un promedio de: " promedio
				promocionan<-promocionan+1
			SiNo
				
				si (promedio<7) Y (promedio>=4)
					Escribir " El alumno regulariza con un promedio de: " promedio
					regularizan<-regularizan+1
				SiNo
					Escribir " El alumno queda libre con un promedio de: " promedio
					libres<-libres+1
				FinSi
			FinSi
	Fin Para
	
	
	Escribir " Los alumnos que promocionan son: " promocionan
	Escribir " Loa alumnos que regularizan son: " regularizan
	Escribir " Los alumnos que quedan libres son: " libres
	Escribir " Los parciales a recuperar son: " recupera
	
FinAlgoritmo
