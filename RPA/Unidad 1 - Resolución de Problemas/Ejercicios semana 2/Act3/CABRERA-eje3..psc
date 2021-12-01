Algoritmo punto_3_2
	definir A Como Entero
	definir B Como Entero
	definir Aux Como Entero
	Escribir  "Acontinuacion le pediremos ingresar un valor para los caracteres A y B, en el caso de que A sea mayor que B, procederemos a intercambiar los valores, de no ser asi se pedira una verificacion de los valores ingresados" 
	Leer A
	Leer B
	Si A>B Entonces
		Aux <- A
		A <- B
		B <- Aux
	    Escribir " se ha intercabiado los datos de " A " por los datos de " B
	SiNo
		escribir "por fvor verifique los datos ingresados"
	Fin Si
	
	
FinAlgoritmo
