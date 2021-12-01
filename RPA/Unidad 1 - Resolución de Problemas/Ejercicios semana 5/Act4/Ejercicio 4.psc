Algoritmo Mucho_Caracter
	//Definiciones
	Definir Car Como Caracter
	Definir Contador Como Entero
	Definir ConVoc Como Entero
	Definir ConCon Como Entero
	Definir ConDig Como Entero
	Definir ConMat Como Entero
	Definir ConErr Como Entero
	//Iniciales
	ConVoc <- 0
	ConCon <- 0
	ConDig <- 0
	ConMat <- 0
	ConErr <- 0
	//Entrada
	Escribir "Hola, mucho gusto, ahora voy a pedirle un caracter cualquiera..."
	Escribir "...15 veces y le dire que es cada uno"
	Escribir "(Por favor solo un caracter a la vez)"
	//"Calculo"
	Para Contador <- 1 Hasta 15 Con Paso 1 Hacer
		Escribir "------------------------------------------------------------------------"
		Escribir "Por favor, escriba el " Contador "° caracter"
		Leer Car
		Si Car == "A" o Car == "a" o Car == "E" o Car == "e" o Car == "I" o Car == "i" o Car == "O" o Car == "o" o Car == "U" o Car == "u"  Entonces
			ConVoc <- ConVoc + 1
			Escribir Car " Es una vocal"
		SiNo
			Si Car == "B" o Car == "b" o Car == "C" o Car == "c" o Car == "D" o Car == "d" o Car == "F" o Car == "f" o Car == "G" o Car == "g" o Car == "H" o Car == "h" o Car == "J" o Car == "j" o Car == "K" o Car == "k" o Car == "L" o Car == "l" o Car == "M" o Car == "m" o Car == "N" o Car == "n" o Car == "Ñ" o Car == "ñ" o Car == "P" o Car == "p" o Car == "Q" o Car == "R" o Car == "r" o Car == "S" o Car == "s" o Car == "T" o Car == "t" o Car == "V" o Car == "v" o Car == "W" o Car == "w" o Car == "X" o Car == "x" o Car == "Y" o Car == "y" o Car == "Z" o Car == "z" Entonces
				ConCon <- ConCon + 1
				Escribir Car " Es una consonante"
			SiNo
				Si Car == "1" o Car == "2" o Car == "3" o Car == "4" o Car == "5" o Car == "6" o Car == "7" o Car == "8" o Car == "9" o Car == "0" Entonces
					ConDig <- ConDig + 1
					Escribir Car " Es un digito"
				SiNo
					Si Car == "+" o Car == "-" o Car == "*" o Car == "/" o Car == "MOD" o Car == "^" o Car == "=" o Car == "<" o Car == ">" Entonces
						ConMat <- ConMat + 1
						Escribir Car " Es un operador matematico"
					SiNo
						ConErr <- ConErr + 1
						Escribir "¡ERROR!:El caracter que a elegido no enta listado"
					Fin Si
				Fin Si
			Fin Si
		Fin Si
	Fin Para
	//Salida
	Escribir "De los 15 caracteres recibidos..."
	Si ConVoc > 0 Entonces
		Escribir "Hay un total de " ConVoc " vocales"
	FinSi
	Si ConCon > 0 Entonces
		Escribir "Hay un total de " ConCon " consonantes"
	FinSi
	Si ConDig > 0 Entonces
		Escribir "Hay un total de " ConDig " digitos"
	FinSi
	Si ConMat > 0 Entonces
		Escribir "Hay un total de " ConMat " operadores matematicos"
	FinSi
	Si ConErr > 0 Entonces
		Escribir "Hay un total de " ConErr " caracteres no listados"
	FinSi
	//Fin
FinAlgoritmo
