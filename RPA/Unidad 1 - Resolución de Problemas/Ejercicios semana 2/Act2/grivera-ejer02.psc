Algoritmo mayor_numero
	
	// Entradas
	Definir B Como Entero
	Definir A Como Entero
	
	// Leer entradas
	Escribir 'Ingresar el primer valor'
	Leer A
	Escribir 'Ingresar el segundo valor'
	Leer B
	
	// Descubrir el número mayor
	Si A == B Entonces
		Escribir "Los números ingresados son iguales"
	SiNo
		Si A>B Entonces
			Escribir "El número mayor es: " A
		SiNo
			Escribir "El número mayor es: " B
		FinSi
	FinSi
FinAlgoritmo
