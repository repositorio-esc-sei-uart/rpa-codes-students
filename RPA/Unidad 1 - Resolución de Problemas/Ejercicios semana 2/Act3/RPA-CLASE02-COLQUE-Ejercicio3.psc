Algoritmo Intercambio_de_Valores
	
	Definir A Como Entero
	Definir B Como Entero
	Definir aux Como Entero
	
	Escribir "Hola"
	Escribir "Ingrese el Primer N�mero"
	Leer A
	Escribir "Ingrese el Segundo N�mero"
	Leer B
	Si (A>B) Entonces
		Escribir "El N�mero " A " es mayor que " B
		aux<-A
		A<-B
		B<-aux
		Mostrar "Entonces B ser�: " B
	Fin Si
FinAlgoritmo