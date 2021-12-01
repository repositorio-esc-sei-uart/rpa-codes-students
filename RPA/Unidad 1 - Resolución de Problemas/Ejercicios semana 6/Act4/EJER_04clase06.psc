Algoritmo adivina
	
	numalazar<- azar(59)+1
	intentos <-10
	conteo<- 0 
	Mientras intentos >0 hacer 
		Escribir " ESCRIBA UN NUMERO PARA ADIVINAR"
		Leer  num
		
		Si  num<-numalazar Entonces 
			Escribir "ADIVINASTE " 
		SINO 
			Escribir "NUMERO EQUIVOCADO"
			intentos <-intentos -1
			Si num > numalazar Entonces 
				Escribir " MUY ALTO "
			SINO 
				Escribir  " MUY BAJO"
				
			FinSi
			
			Escribir  " QUEDAN ", intentos , " INTENTOS "
			Leer num 
			
		FinSi
		
	FinMientras
	
	
FinAlgoritmo
