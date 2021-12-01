Algoritmo Intercambio_de_Valores
	
	Definir A Como Entero
	Definir B Como Entero
	Definir aux Como Entero
	
	Escribir "Hola"
	Escribir "Ingrese el Primer Número"
	Leer A
	Escribir "Ingrese el Segundo Número"
	Leer B
	Si (A>B) Entonces
		Escribir "El Número " A " es mayor que " B
		aux<-A
		A<-B
		B<-aux
		Mostrar "Entonces B será: " B
	Fin Si
FinAlgoritmo