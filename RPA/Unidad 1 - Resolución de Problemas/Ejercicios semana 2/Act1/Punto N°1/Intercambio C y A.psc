Algoritmo intercambio_de_variables 
	//entradas/salidas
	Definir A Como Entero
	Definir C Como Entero	
	
	//variables auxiliares
	Definir aux Como Entero
	
	// leer entrada 
	Escribir 'ingrese un valor entero'
	Leer C
	Escribir 'ingrese un segundo valor entero'
	Leer A

	//intercambiar el contenido de C y B
	aux <- C
	C <- A
	C <- aux
    
	//Escribir la salida
	Escribir ' el resultado de intercambio es C=',C ' A=',A
FinAlgoritmo
