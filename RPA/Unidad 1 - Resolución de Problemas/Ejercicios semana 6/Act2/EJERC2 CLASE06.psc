Algoritmo sin_titulo
	Definir op, i ,pot, res, fact, num Como Entero
	op <- 0
	pot<-0
	res<-0
	num<-1
	fact=1
	
	Repetir 
		Escribir"SELECCIONE UNA OPCION"
		Escribir " (1) CALCULAR POTENCIA "
		Escribir " (2) CALCULAR FACTORIAL "
		Escribir " (3) SALIR"
		LEER op 
		Segun op hacer
			1:
				Escribir " INTRODUCE UN NUMERO "
				Leer num
				Escribir " INTRODUCE LA POTENCIA "
				Leer pot
				res<-num^pot
				Escribir "EL RESULTADO ES " ,res
			2:  Si num > 0 Entonces 
					Escribir " INGRESE UN NUMERO"
					Leer num
					Para i <-1 hasta num Con Paso 1 hacer 
						fact<- fact * i
					FinPara
				Sino 
					
				fin si
					
				Escribir " EL FACTORIAL ES ",fact
			
		FinSegun
	Hasta Que op ==3
FinAlgoritmo
