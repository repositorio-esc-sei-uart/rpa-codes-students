Proceso sin_titulo
	Definir nsecret, num, int Como Entero
	Definir win Como Logico
	int<-10
	win<-Falso
	Escribir "BIENVENIDO" 
	Escribir "NúMERO SECRETO es un juego en el cual se debera adivinar el número generado al azar"
	Escribir "Es un número entre 1 y 60"
	Escribir "Solo tendra 10 intentos para adivinar"
	Escribir "MUCHA SUERTE"
	nsecret<-1+azar(60-1+1)
	Escribir nsecret
	Repetir 
		Escribir "Advivine el número"
		Escribir "Por favor ingrese un número"
		Leer num
		int<-int-1
		Si nsecret==num Entonces
			win<-Verdadero
		SiNo
			Si nsecret>num Entonces
				Escribir "El número ingresado es menor al número secreto"
				Escribir "Le quedan " int " intentos"
			SiNo
				Escribir "El número ingresado es mayor al número secreto"
				Escribir "Le quedan " int " intentos"
			FinSi
		FinSi
		
	Hasta Que (int==0) o (win==Verdadero)
	Si win==Verdadero Entonces
		Escribir "FELICITACIONES"
		Escribir "Logro adivinar el número secreto"
		Escribir "Completo el juego en: " int " intentos"
		Escribir "El número secreto era: " nsecret
	SiNo
		Escribir "GAME OVER"
		Escribir "No logro adivinar el número secreto"
		Escribir "El número secreto era: " nsecret
	FinSi
FinProceso
