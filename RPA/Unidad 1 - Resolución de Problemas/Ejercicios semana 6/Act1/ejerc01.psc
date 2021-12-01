Algoritmo Suma_de_pares
	Definir suma Como Numerica
	Definir b Como Entera
	Definir a Como Entera
	
	
	suma<-0
	Escribir " Hola, voy a sumar dos números pares hasta que la suma de 30. "
	
	Repetir
		Escribir " Por favor ingresar el primer número par. "
		Leer a
		si (a MOD 2) <> 0
			Escribir " El número ingresado es inválido. "
		SiNo 
			Escribir " Por favor ingresar el segundo número par. "
		Leer b
		   si (b MOD 2) <> 0
			Escribir " El número ingresado es inválido. "
		   SiNo
			suma<-a+b
			Escribir " La suma da: " suma
			
		   FinSi
	     FinSi
	
	Hasta Que suma >= 30
	Escribir " La suma de pares es igual o supera el número 30. "
FinAlgoritmo
