Algoritmo sin_titulo
	
	Definir num,x ,suma como Entero 
	Definir mult3 , mult5 como Logico
	
	mult3<-Falso
	mult5<-Falso
	

	
	conteo3<-0
	conteo5<-0
	
	
	
		
	
    Para x=1 hasta 10 Con Paso 1 Hacer 
		Escribir " INGRESE UN NUMERO", X
			Leer num
			
			si (num mod 3) ==0 Entonces 
				mult3<-Verdadero
				
				Escribir " ES MULTIPLO DE 3 "
				conteo3<-conteo3 +1
				
				
			sino 
				mult5<- Verdadero 
				
				
				sI (num mod 5 ) == 0 Entonces 
					
					Escribir "ES MULTIPLO DE 5 "
					
					conteo5<-conteo5 +1
					
			     FinSi
				
				
			FinSi
			
			
		FinPara
		Escribir " TOTAL MULTIPLOS DE 3 ", conteo3
		Escribir "TOTAL MULTIPLOS DE 5 ", conteo5
		 
		

	
	
	
	
	
	
	
FinAlgoritmo
