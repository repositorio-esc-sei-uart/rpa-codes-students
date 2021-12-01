Algoritmo numeros_aleatorios
	
	Definir num,veces, suma Como Entero
	Definir promedio Como Real
	num<-0

	
	Repetir
		num<- 10 + azar(40-10+1)
		Escribir num
		veces<-veces+1
		suma<-suma+num
	Hasta Que num mod 5 ==0
	Escribir " La cantidad de números al azar son: " veces
	promedio<-suma/veces
	Escribir " El número promedio es: " promedio
	
	
	
FinAlgoritmo


