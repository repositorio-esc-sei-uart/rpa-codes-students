Algoritmo Numeros_enteros
	
	
	// Variables.
	Definir ptvo, ntvo, ceros, i, n Como Entero
	
	Escribir " Hola, ingresar 20 n�meros enteros."
	Escribir " Al final le dir� la suma de los positivos, y cu�ntos ceros o negativos ingres�. "
	ptvo<-0
	ntvo<-0
	ceros<-0
	Para i<-1 Hasta 20 Con Paso 1 Hacer
		Escribir " Por favor ingrese el �" i " n�mero."
		Leer n
		si n=0
			ceros<-ceros+1
		    SiNo
			
		    si n>0
			ptvo<-ptvo+n
		    SiNo
			ntvo<-ntvo+1
		
		FinSi
	FinSi
	
	Fin Para
	Escribir " La suma de los n�meros positivos es: " ptvo
	Escribir " Se han ingresado " ntvo " n�meros negativos."
	Escribir " La cantidad de ceros ingresados es: " ceros
FinAlgoritmo
