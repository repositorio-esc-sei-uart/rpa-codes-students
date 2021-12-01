Algoritmo Negatvo_positivo_o_cero
	
	//Defino variables
	Definir num1 como Entera
	
	//Leo la entrada de datos
	Escribir "Ingrese un numero entero para saber si es negativo, positivo o cero"
	Leer num1
	
	//Estructura de seleccion
	Si num1 > 0 Entonces
		Escribir num1 " Es positivo" 
	SiNo
		Si num1 < 0 Entonces
			Escribir num1 " Es negativo"
		SiNo
			Si num1 == 0 Entonces
				Escribir num1 " Es igual a cero"
			Fin Si
		Fin Si
	Fin Si
FinAlgoritmo
