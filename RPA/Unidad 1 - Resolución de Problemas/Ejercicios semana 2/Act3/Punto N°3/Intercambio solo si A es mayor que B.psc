Algoritmo sin_titulo
	Definir a Como Entero
	// leer la entrada
	Escribir 'ingrese un valor'
	Leer a
	Definir b Como Entero
	Escribir 'ingrese un segundo valor'
	Leer b
	// verificar si es mayor num1 
	Si a>b Entonces
		Escribir 'A es mayor que B'
	SiNo
		Escribir 'b es mayor que a'
	FinSi
	
     // solo si es mayor A
	Mientras b > a Hacer
	
	FinMientras
	
	// variables auxiliares
	
	Definir aux Como Entero
	// intercambiar el contenido de A y B
	
	aux <- b
	b <- a
	a <- aux
	
	// Escribir la salida
	Escribir ' el resultado de intercambio es a=',a,' b=',b
FinAlgoritmo
