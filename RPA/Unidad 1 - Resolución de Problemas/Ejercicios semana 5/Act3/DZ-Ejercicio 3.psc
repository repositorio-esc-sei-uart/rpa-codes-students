Proceso sin_titulo
	Definir Num Como Entero
	cont3<-0
	cont5<-0
	Escribir "Bienvenido, por favor ingrese 10 numeros"
	Para i<-1 Hasta 10 con paso 1 Hacer
		Leer Num
		Si (Num mod 3)==0 y (Num mod 5)==0 Entonces
			cont3<-cont3+1
			cont5<-cont5+1
			Sum5<-Sum5+Num
			Sum3<-Sum3+Num
		SiNo
			Si (Num mod 5)==0 Entonces
				cont5<-cont5+1
				Sum5<-Sum5+Num
			SiNo
				Si (Num mod 3)==0 Entonces
					cont3<-cont3+1
					Sum3<-Sum3+Num
				FinSi
			FinSi
			
		FinSi
		
	FinPara
	Escribir "Multiplos de 3 ingresados: " cont3 
	Escribir "Suma de multiplos de 3 ingresados: " Sum3
	Escribir "Multiplos de 5 ingresados: " cont5
	Escribir "Suma de multiplos de 5 ingresados: " Sum5
FinProceso
