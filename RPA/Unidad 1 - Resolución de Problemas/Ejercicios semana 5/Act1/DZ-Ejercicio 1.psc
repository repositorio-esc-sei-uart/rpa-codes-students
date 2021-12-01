Proceso sin_titulo
	Definir CantRep Como Entero
	Definir num Como Entero
	Escribir "Bienvenido, ingrese cantidad de numeros que va a ingresar"
	Leer CantRep
	contpar<-0
	contimpar<-0
	suma<-0
	Para i<-1 hasta CantRep Con Paso 1 Hacer
		Leer num
		Si (num mod 2) == 0 Entonces
			contpar<-contpar+1
			sumpar<-sumpar+num
		SiNo
			contimpar<-contimpar+1
			sumimp<-sumimp+num
		FinSi
	FinPara
	Escribir "Cantidad de numeros pares ingresados: " contpar
	Escribir "Suma de numeros pares ingresados: " sumpar
	Escribir "Cantidad de numeros impares ingresados: " contimpar
	Escribir "Suma de numeros impares ingresados: " sumimp
FinProceso
