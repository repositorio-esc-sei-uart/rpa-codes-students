Algoritmo par_impar 
	
	Definir  x,n , num,suma, cont_par, cont_impar como Entero 
	Escribir "CANTIDAD DE NUMEROS  A INGRESAR"
	Leer  n
	
	
	sI n > 0 Entonces 
		cont_par<- 0
		cont_impar<-0
		

		Para x=1 hasta n Hacer 
			Escribir x, "NUMEROS"
			leer num
			
			
			si (num mod 2) ==0 Entonces 
	              cont_par=cont_par + 1
			
		sino 
			cont_impar = cont_impar + 1 
			suma<-  suma+n
			
		FinSi
	  FinPara
	  Escribir " TOTAL DE NUMEROS PARES ", cont_par
	  Escribir " TOTAL DE NUMEROS IMPARES ",cont_impar
	  Escribir " SUMA TOTAL ",suma
	  
    Sino 
		
	FinSi 
	
	
FinAlgoritmo
