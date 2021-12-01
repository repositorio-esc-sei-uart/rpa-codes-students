Algoritmo Mas_o_menos
	
	Definir Num Como Real
	
	Escribir "Hola, mucho gusto, ahora voy a pedirle un numero y"
	Escribir "decirle si es positivo, negativo o cero"
	
	Escribir "Por favor, escriba un numero"
	Leer Num
	
	Si Num = 0 Entonces
		Escribir "Su numero es cero"
	SiNo
		Si Num < 0 Entonces
			Escribir "Su numero es negativo"
		SiNo
			Escribir "Su numero es positivo"
		Fin Si
	Fin Si
	
FinAlgoritmo
