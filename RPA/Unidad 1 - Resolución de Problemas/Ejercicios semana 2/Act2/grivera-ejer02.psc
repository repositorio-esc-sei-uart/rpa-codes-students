Algoritmo mayor_numero
	
	// Entradas
	Definir B Como Entero
	Definir A Como Entero
	
	// Leer entradas
	Escribir 'Ingresar el primer valor'
	Leer A
	Escribir 'Ingresar el segundo valor'
	Leer B
	
	// Descubrir el n�mero mayor
	Si A == B Entonces
		Escribir "Los n�meros ingresados son iguales"
	SiNo
		Si A>B Entonces
			Escribir "El n�mero mayor es: " A
		SiNo
			Escribir "El n�mero mayor es: " B
		FinSi
	FinSi
FinAlgoritmo
