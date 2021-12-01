Algoritmo numeros_spar_simpar
	Definir in,fn,spar,simpar Como Entero
	spar <- 0
	simpar <- 0
	Escribir 'ingrese el inicio del rango'
	Leer in
	Escribir 'ingrese el fin del rango'
	leer fn
	Mientras (in<=fn) Hacer
		si (in mod 2 = 0) Entonces
			spar <- spar + in
			sino
				simpar <- simpar + in
		
				
			
			FinSi
			in <- in + 1
		FinMientras
		Escribir  'la suma de los pares es:',spar
		Escribir  'la suma de los impares es:',simpar
FinAlgoritmo
