Proceso sin_titulo
	Definir nsecret, num, int Como Entero
	Definir win Como Logico
	int<-10
	win<-Falso
	Escribir "BIENVENIDO" 
	Escribir "N�MERO SECRETO es un juego en el cual se debera adivinar el n�mero generado al azar"
	Escribir "Es un n�mero entre 1 y 60"
	Escribir "Solo tendra 10 intentos para adivinar"
	Escribir "MUCHA SUERTE"
	nsecret<-1+azar(60-1+1)
	Escribir nsecret
	Repetir 
		Escribir "Advivine el n�mero"
		Escribir "Por favor ingrese un n�mero"
		Leer num
		int<-int-1
		Si nsecret==num Entonces
			win<-Verdadero
		SiNo
			Si nsecret>num Entonces
				Escribir "El n�mero ingresado es menor al n�mero secreto"
				Escribir "Le quedan " int " intentos"
			SiNo
				Escribir "El n�mero ingresado es mayor al n�mero secreto"
				Escribir "Le quedan " int " intentos"
			FinSi
		FinSi
		
	Hasta Que (int==0) o (win==Verdadero)
	Si win==Verdadero Entonces
		Escribir "FELICITACIONES"
		Escribir "Logro adivinar el n�mero secreto"
		Escribir "Completo el juego en: " int " intentos"
		Escribir "El n�mero secreto era: " nsecret
	SiNo
		Escribir "GAME OVER"
		Escribir "No logro adivinar el n�mero secreto"
		Escribir "El n�mero secreto era: " nsecret
	FinSi
FinProceso
