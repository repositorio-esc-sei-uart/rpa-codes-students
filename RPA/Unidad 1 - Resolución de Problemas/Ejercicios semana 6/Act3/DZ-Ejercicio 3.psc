Proceso sin_titulo
	Definir num, c Como Entero
	Definir Mul Como Logico
	Mul<-Falso
	c<-0
	Escribir "Bienvenido, a continuación se generaran números al azar"
	Escribir "los cuales se dejaran de generar hasta obtener un multiplo de 5"
	Repetir
		num<-10+azar(40-10+1)
		c<-c+1
		sum<-sum+num
		Escribir "Numero aleatorio: " num
		Si (num mod 5)==0 Entonces
			Mul<-Verdadero
			Escribir "Multiplo de 5 ingresado: " num
			
		FinSi
		
	Hasta Que Mul==Verdadero
	prom<-sum/c
	Escribir "Promedio de los numeros ingresados: " prom
	Escribir "Numeros generados: " c
FinProceso
