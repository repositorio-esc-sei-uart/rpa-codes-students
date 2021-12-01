Algoritmo El_Juego
	//Definiciones
	Definir NumAza , NumAdi , Fallos , Correcto , Cont Como Entero
	//Iniciales
	Cont <- 1
	Correcto <- 0
	Fallos <- 0
	//Entrada
	Escribir "Hola, mucho gusto, quiero jugar un juego, voy a pensar en un numero..."
	Escribir "...del 1 al 60 y usted debe adivinar cual es"
	//Calculo
	NumAza <- Azar(61)
	Escribir "Intente adivinar el numero"
	Repetir
		Escribir "Intento " Cont
		Leer NumAdi
		Cont <- Cont + 1
		Si NumAza == NumAdi Entonces
			Correcto <- 1
		SiNo
			Fallos <- Fallos + 1
			Si NumAdi > NumAza
					Escribir "El numero que busca es menor"
				SiNo
					Escribir "El numero que busca es mayor"
			FinSi
		Fin Si
	Hasta Que Fallos == 10 o Correcto == 1
	//Salida
	Si Correcto == 1 Entonces
		Escribir "¡FELICIDADES!"
		Escribir "adivino el numero en el que estaba pensando"
	SiNo
		Escribir "Que pena, se acabaron los intentos"
		Escribir "el numero que estaba buscando era " NumAza
	FinSi
	//Fin
FinAlgoritmo
