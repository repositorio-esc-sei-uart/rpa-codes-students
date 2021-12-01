Algoritmo Intercambio_dos
	Definir A, B,aux Como Entero
	
	Escribir " Ingrese el primer numero"
	Leer A
	Escribir " Ingrese el segundo numero"
	Leer B 
	
	Si A > B Entonces
	
		aux<-A 
		A<-B 
		B<-aux 
	
	Escribir "Intercambio:" "A=" A ;
	Escribir "Intercambio:" " B=" B;
	
	
	FINSi	

FinAlgoritmo
