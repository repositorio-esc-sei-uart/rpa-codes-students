Algoritmo Tres_O_Cinco
	//Definiciones
	Definir Num Como Entero
	Definir ConNon Como Entero
	Definir ConTre Como Entero
	Definir ConCin Como Entero 
	Definir ConDos Como Entero
	Definir SumNon Como Entero
	Definir SumTre Como Entero
	Definir SumCin Como Entero
	Definir SumDos Como Entero
	Definir Contador Como Entero
	//Iniciales
	ConNon <- 0
	ConTre <- 0
	ConCin <- 0
	SumNon <- 0
	SumTre <- 0
	SumCin <- 0
	//Entrada
	Escribir "Hola, mucho gusto, ahora voy a tomar 10 numeros y decirle cuales son..."
	Escribir "...multiplos de 3 o 5"
	Escribir "------------------------------------------------------------------------"
	//Calculo
	Para Contador <- 1 Hasta 10 Con Paso 1 Hacer
		Escribir "Por favor, ingrese el " Contador "° numero"
		Leer Num
		Si Num MOD 3 == 0 Y Num MOD 5 == 0 Entonces
			ConDos <- ConDos + 1
			SumDos <- SumDos + Num
			ConTre <- ConTre + 1
			SumTre <- SumTre + Num
			ConCin <- ConCin + 1
			SumCin <- SumCin + Num
			Escribir "Multiplo de 3 y 5"
		SiNo
			Si Num MOD 3 == 0 Entonces
				ConTre <- ConTre + 1
				SumTre <- SumTre + Num
				Escribir "Multiplo de 3"
			SiNo
				Si Num MOD 5 == 0 Entonces
					ConCin <- ConCin + 1
					SumCin <- SumCin + Num
					Escribir "Multiplo de 5"
				SiNo
					ConNon <- ConNon + 1
					SumNon <- SumNon + Num
					Escribir "No es multiplo de 3 o 5"
				Fin Si
			Fin Si
		Fin Si
		Escribir "------------------------------------------------------------------------"
	Fin Para
	//Salida
	Escribir "Hay un total de " ConTre " multiplos de 3 que suman en total " SumTre
	Escribir ""
	Escribir "Y hay un total de " ConCin " multiplos de 5 que suman en total " SumCin
	Si ConDos > 0 Entonces
		Escribir ""
		Escribir "Tambien hay un total de " ConDos " numeros que son multiplos de 3 y 5 que..."
		Escribir "...suman un total de " SumDos
	FinSi
	Si ConNon > 0 Entonces
		Escribir ""
		Escribir "Aparte hay un total de " ConNon " numeros que no son multiplo de 3 o 5 y..."
		Escribir "...suman en total " SumNon
	FinSi
	Escribir "------------------------------------------------------------------------"
	//Fin
FinAlgoritmo
