Algoritmo positivo_negativo_o_cero
	
	// Entrada.
	Definir Numero Como Entera
	
	// Ingreso de número entero.
	Escribir " Hola, ingrese un número entero por favor, y luego presionar Enter."
	Escribir " Le diré si este es positivo, negativo o cero."
	Leer Numero
	
	// Según el número ingresado se dirá si este es positivo, negativo o cero.
	Si Numero > 0 Entonces
		Escribir " El número ingresado es positivo."
	SiNo
		Si Numero < 0 Entonces
			Escribir " El número ingresado es negativo."
		SiNo
			Escribir " El número ingresado es cero."
		Fin Si
	Fin Si
	
	// Mensaje para el usuario.
	Escribir " Si desea saber la condición de otro número reinicie la ejecución por favor."
	Escribir " Gracias."
	
FinAlgoritmo
