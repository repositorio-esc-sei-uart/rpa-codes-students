Algoritmo acumulador 
	
	
	Definir num ,par2 como  Entero 
	par2<-0 
	suma<-0
	
	Para num<-1 hasta 10 Con Paso  1 hacer
		Si num mod 2 =0 Entonces
			par2<-par2+ num
		sino 
			
		FinSi
		Si suma <=30 Entonces 
			suma <- suma + num
		sino 
			
		FinSi
		
	FinPara
	Escribir " LA SUMA DE PARES ES " par2
FinAlgoritmo

	
	

	
