Algoritmo Numero_Negativo_o_Positivo
	definir n como entero
	escribir"Hola! A continuación vamos a determinar si un número es Positivo, Negativo o Neutro (cero)"
	escribir"Por favor ingrese un Número"
	leer n
	si n>0 Entonces
		escribir"El número:" ,n, ", que usted ingresó es Positivo"
	SiNo
		si n<0 Entonces
			escribir"El número:" ,n, ", que usted ingresó es Negativo"
		SiNo
			escribir"El número:",n, ", que usted ingresó es Neutro (cero)"
		FinSi
	FinSi
	
FinAlgoritmo
