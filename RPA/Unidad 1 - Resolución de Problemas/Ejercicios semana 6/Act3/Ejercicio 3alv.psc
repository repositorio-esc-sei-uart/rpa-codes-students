Algoritmo El_Azar
	//Defimiciones
	Definir Num , Cont , Sum Como Entero
	Definir Prom , ENTER Como Real
	//Iniciales
	Cont <- 0
	Prom <- 0
	Sum <- 0
	//Entrada
	Escribir "Hola, mucho gusto, ahora generare numeros al azar hasta que consiga..."
	Escribir "...un multiplo de 5 y le dire cuantos numeros genere y su promedio"
	Escribir "Por favor, presione ENTER para empezar"
	Leer ENTER
	//Calculo
	Repetir
		Num <- 10 + Azar(40-10+1)
		Sum <- Sum + Num
		Cont <- Cont + 1
		Escribir Cont "° numero " Num
	Hasta Que Num MOD 5 == 0
	Prom <- Sum / Cont
	//Salida
	Escribir Num " es multiplo de 5"
	Escribir "Se genero un total de " Cont " numeros"
	Escribir "y su promedio es de " Prom
	//Fin
FinAlgoritmo
