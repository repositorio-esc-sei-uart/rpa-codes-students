Proceso sin_titulo
	cont0<-0
	contneg<-0
	contpos<-0
	sumneg<-0
	sumpos<-0
	Definir Num Como Entero
	Escribir "Bienvenido, por favor ingrese 20 numeros"
	Para i<-1 hasta 20 con paso 1 Hacer
		Leer Num
		Si Num==0 Entonces
			cont0<-cont0+1
		SiNo
			Si Num<0 Entonces
				contneg<-contneg+1
				sumneg<-sumneg+Num
			SiNo
				contpos<-contpos+1
				sumpos<-sumpos+Num
			FinSi
		FinSi
	FinPara
	Escribir "Cantidad de ceros ingresados: " cont0
	Escribir "Cantidad de numeros negativos ingresados: " contneg
	Escribir "Suma de numeros negativos ingresados: " sumneg
	Escribir "Cantidad de numeros positivos ingresados: " contpos
	Escribir "Suma de numeros positivos ingresados: " sumpos
FinProceso
