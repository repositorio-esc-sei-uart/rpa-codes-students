Algoritmo Mas_que_cero
	//Definiciones
	Definir Num Como Entero
	Definir SumPos Como Entero
	Definir ConNeg Como Entero
	Definir ConCer Como Entero
	Definir Contador Como Entero
	//Entrada
	Escribir "Hola, mucho gusto, ahora le pedire 20 numeros, sumare los positivos..."
	Escribir "...y contare negativos y ceros"
	//Calculo
	Para Contador <- 1 Hasta 20 Con Paso 1 Hacer
		Escribir "------------------------------------------------------------------------"
		Escribir "Por favor, ingrese el " Contador "° numero"
		Leer Num
		Si Num > 0 Entonces
			SumPos <- SumPos + Num
		SiNo
			Si Num < 0 Entonces
				ConNeg <- ConNeg + 1
			SiNo
				ConCer <- ConCer + 1
			Fin Si
		Fin Si
	Fin Para
	//Salida
	Escribir "La suma total de todos los numeros positivos es de " SumPos
	Escribir "Y hay un total de " ConNeg " numeros negativos y " ConCer " ceros"
	//Fin
FinAlgoritmo
