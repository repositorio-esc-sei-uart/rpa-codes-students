Algoritmo Numeros_enteros
	
	
	// Variables.
	Definir ptvo, ntvo, ceros, i, n Como Entero
	
	Escribir " Hola, ingresar 20 números enteros."
	Escribir " Al final le diré la suma de los positivos, y cuántos ceros o negativos ingresó. "
	ptvo<-0
	ntvo<-0
	ceros<-0
	Para i<-1 Hasta 20 Con Paso 1 Hacer
		Escribir " Por favor ingrese el °" i " número."
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
	Escribir " La suma de los números positivos es: " ptvo
	Escribir " Se han ingresado " ntvo " números negativos."
	Escribir " La cantidad de ceros ingresados es: " ceros
FinAlgoritmo
