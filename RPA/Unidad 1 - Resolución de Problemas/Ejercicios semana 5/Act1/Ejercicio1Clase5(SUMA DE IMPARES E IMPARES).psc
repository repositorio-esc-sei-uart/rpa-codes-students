Algoritmo SumaDeParesEImpares
	definir i,n,num,Cpar,Cimpar,sumap,sumai Como Entero
	Escribir "�Cu�ntos n�meros desea contar?"
	leer n 
	si n > 0 Entonces
		Cpar<-0
		Cimpar<-0
		para i<-1 hasta n Hacer
			Escribir i,"� N�mero: "
			leer num
			si (num MOD 2)==0 entonces 
				Cpar<-Cpar+1
				sumap<-sumap+num
			SiNo
				Cimpar<-Cimpar+1
				sumai<-sumai+num
			FinSi
		FinPara
		Escribir "Total Pares: ",Cpar
		escribir "La suma total de pares es: ",sumap
		Escribir "Total Impares: ",Cimpar
		Escribir "La suma total de Impares es: ",sumai
	SiNo
		Escribir "Ingrese un n�mero con valor"
	FinSi
FinAlgoritmo
