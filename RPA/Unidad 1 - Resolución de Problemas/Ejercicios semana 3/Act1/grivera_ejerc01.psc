Algoritmo positivo_negativo_o_cero
	
	// Entrada.
	Definir Numero Como Entera
	
	// Ingreso de n�mero entero.
	Escribir " Hola, ingrese un n�mero entero por favor, y luego presionar Enter."
	Escribir " Le dir� si este es positivo, negativo o cero."
	Leer Numero
	
	// Seg�n el n�mero ingresado se dir� si este es positivo, negativo o cero.
	Si Numero > 0 Entonces
		Escribir " El n�mero ingresado es positivo."
	SiNo
		Si Numero < 0 Entonces
			Escribir " El n�mero ingresado es negativo."
		SiNo
			Escribir " El n�mero ingresado es cero."
		Fin Si
	Fin Si
	
	// Mensaje para el usuario.
	Escribir " Si desea saber la condici�n de otro n�mero reinicie la ejecuci�n por favor."
	Escribir " Gracias."
	
FinAlgoritmo
