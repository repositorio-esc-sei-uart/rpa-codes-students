Algoritmo sin_titulo
	Definir num,x ,suma como Entero 
	Definir negat , posit como Logico
	
	posit<-Falso
	negat<-Falso
	
	
	
	
	conteopos<-0
	conteoneg<-0
	conteocero<-0
	
	
		
	Para x=1 hasta 20 Con Paso 1 Hacer 
		    Escribir " Ingrese un numero " , x
			Leer num
		
			si num >0 Entonces 
				posit<-verdadero
				conteopos <-conteopos  +1
			finsi 
			si num<0 Entonces 
				negat <-verdadero
				conteoneg <- conteoneg +1
			Finsi 
			si num =0 Entonces 
				conteocero<-conteocero +1
			FinSi
		
		FinPara
		Escribir "Numero positivo ", conteopos
		Escribir "Numero negativo ", conteoneg
		Escribir " ceros ",conteocero
		
FinAlgoritmo


