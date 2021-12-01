//Alumno Pablo Laime
Algoritmo adivinar_numero
	Definir ad, num, int, intr Como Entero
	intr <- 10
	int <- 0
	ad <- 1 + azar(60-1+1)
	
	Escribir "Hola!, vamos a jugar a un juego el cual consiste en adivinar el número que se genera de manera al azar del 1 al 60"
	Escribir "..........."
	Escribir "El número secreto ya esta listo ahora toca adivinarlo"
	Repetir
		int <- int + 1
		Escribir "Ingresar número"
		Leer num
		Si num==ad Entonces
			Escribir "Adivinaste! El número es " ad
			Escribir "Lo lograste en  " int " intentos"
		SiNo
			Si num > ad Entonces
				intr <- intr - 1
				Escribir "El número a adivinar es menor al que ingresaste"
				Escribir "Te quedan " intr " intentos"
			SiNo
				intr <- intr - 1
				Escribir "El número a adivinar es mayor al que ingresaste"
				Escribir "Te quedan " intr " intentos"
			Fin Si
		Fin Si
		
	Hasta Que int == 10 O num == ad
	Si int==10  Entonces
		Escribir "Perdiste! El número era: " ad
	
	Fin Si
FinAlgoritmo
