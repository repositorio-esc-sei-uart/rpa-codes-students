Algoritmo intercambio
	
	//Entradas
	Definir B Como Entera
	Definir A Como Entera
	//Variable Auxiliar
	Definir Aux Como Numerica
	
	//Ingreso de valores
	Escribir "Ingresar primer valor"
	Leer A
	Escribir "Ingresar segundo valor"
	Leer B
	
	//Resolución
	Si A<=B Entonces
		Escribir "El segundo número es mayor o igual"
	SiNo
		Aux <- A
		A <- B
		B <- Aux
		Escribir "El nuevo valor del primer ingreso es: " A , " y del segundo valor es: " B
	Fin Si
	
	
FinAlgoritmo
