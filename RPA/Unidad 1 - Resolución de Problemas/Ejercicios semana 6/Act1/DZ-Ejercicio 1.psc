Proceso sin_titulo
	Definir num, sum, c1 Como Entero
	sum<-0
	cont<-0
	Escribir "Bienvenido, a continuacion se obtendran números al azar"
	Escribir "los númerons pares obtenidos se sumaran sin que supere los 30"
	Repetir
		num<-azar(8)+1
		
		Escribir num
		
		Si (num mod 2)==0 Entonces
			cont<-cont+1
			
			sum<-sum+num
		FinSi
	Hasta Que sum==30
	Escribir "Numero pares sumados: " cont
FinProceso
