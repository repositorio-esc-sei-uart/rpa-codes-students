Algoritmo CuantoNumero
	//Definiciones
	Definir Cantidad Como Entero
	Definir Contador Como Entero
	Definir Num Como Entero
	Definir ModNum Como Entero
	Definir Pares Como Entero
	Definir Impares Como Entero
	Definir Sumapar Como Entero
	Definir Sumaimpar Como Entero
	Definir Sumatotal Como Entero
	//Iniciales
	Sumatotal <- 0
	Pares <- 0
	Impares <- 0
	//Entrada
	Escribir "Hola, mucho gusto, ahora le voy a pedir una cantidad de numeros..."
	Escribir "...que voy a sumar y le dire cuales son pares e impares."
	Escribir "------------------------------------------------------------------------"
	Escribir "¿Cuantos numeros desea añadir?"
	Leer Cantidad
	Escribir "------------------------------------------------------------------------"
	//Calculo
	Para Contador <- 1 Hasta Cantidad Con Paso 1 Hacer
		Escribir "Por favor, ingrese el " Contador "° Numero"
		Leer Num
		ModNum <- Num
		Sumatotal <- Sumatotal + Num
		Si ModNum MOD 2 == 0 Entonces
			Sumapar <- Sumapar + Num
			Pares <- Pares + 1
			Escribir "PAR"
		SiNo
			Sumaimpar <- Sumaimpar + Num
			Impares <- Impares + 1
			Escribir "IMPAR"
		Fin Si
		Escribir "------------------------------------------------------------------------"
	FinPara
	//Salida
	Escribir "Hay en total " Pares " numeros pares que sumados dan " Sumapar
	Escribir "Y hay en total " Impares " numeros impares que sumados dan " Sumaimpar
	Escribir "Y la suma total de ambos es de " Sumatotal
	//Fin
FinAlgoritmo
