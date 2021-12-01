Algoritmo intercambio_numeros
	Definir A,B,C,aux Como Entero
	A=2
	Escribir "A=2" 
	B=10
	Escribir "B=10" 
	C=40
	Escribir "C=40" 
	
	//A=10 B=2
	aux <- B
	B <- A
	A <- aux
	Escribir "Intercambio A:",A " B:", B
	
	//B=40 C=10
	aux <- C   
	C <- B    
	B <- aux  
	Escribir "Intercambio B:",B " C:", C
	
	//A=40 C=2
	aux <- C  
	A <- C    
	C <- aux  
	Escribir "Intercambio C:",C " A:", A
FinAlgoritmo
