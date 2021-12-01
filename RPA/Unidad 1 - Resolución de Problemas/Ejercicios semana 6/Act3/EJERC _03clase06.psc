Algoritmo aletorio
	Definir i ,num , aleat como Entero
	
	num <- azar (40)+1 
	conteo<-0
	
	Mientras  num > 10 Hacer
		num <- azar (40)+1 
		conteo<- conteo + 1 
		
		Escribir num
		si num MOD  5 = 0 Entonces
			conteo<-0
			Escribir " ES MULTIPLO DE 5"
		Sino 
			Escribir " NO ES MULTIPLO DE 5"
			
		FinSi
	FinMientras
	Escribir  " TOTAL DE NUMEROS ALETORIOS ", conteo
	
	
	
	

	
	
	
FinAlgoritmo
