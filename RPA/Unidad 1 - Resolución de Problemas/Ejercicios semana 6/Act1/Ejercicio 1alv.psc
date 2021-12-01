Algoritmo Enunciado_Complicado
	//Defimiciones
	Definir Num , NumCan , SumaPar , CanPar , CanImpar , A Como Entero
	//Iniciales
	NumCan <- 0
	SumaPar <- 0
	CanPar <- 0
	CanImpar <- 0
	A <- 0
	//Entrada
	Escribir "Hola, mucho gusto, ahora voy a pedirle numeros y cuando..."
	Escribir "...la suma de pares pase 30 terminara el algoritmo"
	Escribir "Por favor, introdusca un numero entero"
	//Calculo
	Mientras SumaPar < 30 
		si A == 1
			Escribir "Por favor, introdusca otro numero"
		FinSi
		Leer Num
		NumCan <- NumCan + 1
		Si Num MOD 2 == 0 Entonces
			CanPar <- CanPar + 1
			SumaPar <- SumaPar + Num
		SiNo
			CanImpar <- CanImpar + 1
		Fin Si
		A <- 1
	FinMientras
	//Salida
	Escribir "Usted a introducido " NumCan " Numeros"
	Escribir CanImpar " de ellos fueron impares"
	Escribir "y " CanPar " fueron pares"
	Si SumaPar == 30
		Escribir "La suma de pares es igual a " SumaPar " y por eso se a detenido el algoritmo"
	SiNo 
		Escribir "La suma de pares llego a los " SumaPar
		SumaPar <- SumaPar - 30
		Escribir "y se detuvo el algoritmo por pasar los 30 por " SumaPar
	FinSi
	//Fin
FinAlgoritmo
