Algoritmo intercambio_de_variables 
	//entradas/salidas
	Definir A Como Entero
	Definir B Como Entero	
	
	//variables auxiliares
	Definir aux Como Entero
	
	// leer entrada 
	Escribir 'ingrese un valor entero'
	Leer A
	Escribir 'ingrese un segundo valor entero'
	Leer B

	//intercambiar el contenido de B y A
	aux <- B
	B <- A
	B <- aux
    
	//Escribir la salida
	Escribir ' el resultado de intercambio es B=',B ' A=',A
FinAlgoritmo
