Algoritmo intercambio_de_variables 
	//entradas/salidas
	Definir B Como Entero
	Definir C Como Entero	
	
	//variables auxiliares
	Definir aux Como Entero
	
	// leer entrada 
	Escribir 'ingrese un valor entero'
	Leer B
	Escribir 'ingrese un segundo valor entero'
	Leer C

	//intercambiar el contenido de C y B
	aux <- C
	C <- B
	B <- aux
    
	//Escribir la salida
	Escribir ' el resultado de intercambio es C=',C ' B=',B
FinAlgoritmo
