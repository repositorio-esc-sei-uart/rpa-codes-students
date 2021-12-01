Algoritmo azar_
	definir i,num,cont,suma Como Entero
	definir mult5 Como Logico
	mult5<-Falso
	num<-10+azar(40)
	Mientras  num<>10 Hacer
		Escribir 'el numero es: ',num
		num<-10+azar(40)
		si (num MOD 5)==0 entonces 
			mult5<-Verdadero
			cont<-cont+1
		FinSi
		
	FinMientras
	Escribir 'Se generó un multiplo de 5? ',mult5
	Escribir '',cont
FinAlgoritmo
