Algoritmo intercambio_de_valores
	Definir numA,numB Como Entero
	Definir aux Como Entero
	Escribir "Ingrese el primer valor"
	Leer numA
	Escribir "Ingrese el segundo valor"
	Leer numB
	Si numA>numB Entonces
		aux<-numA
		numA<-numB
		numB<-aux
		Escribir "El intercambio es valor A:" numA, " valor B:" numB
	SiNo
		Escribir "No se pueden intercambiar los valores"
	Fin Si
FinAlgoritmo
