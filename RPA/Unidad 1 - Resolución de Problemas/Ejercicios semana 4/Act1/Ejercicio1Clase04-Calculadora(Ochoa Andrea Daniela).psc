Algoritmo Calculadorita
	
	definir num Como Entero
	definir a Como Real
	definir b como real
	num<-1
	Escribir "Hola! Soy tu calculadora personal"
	Escribir ""
	mientras num <> 0 Hacer
		Escribir "A continuaci�n seleccion� una operaci�n que desees que resuelva:"
		Escribir"1 = Suma"
		Escribir "2 = Resta"
		Escribir "3 = Multiplicaci�n"
		escribir"4 = Divisi�n"
		escribir"5 = M�dulo"
		escribir"Presiona otro n�mero para SALIR"
		leer num
		si num>0 y num<6 Entonces
			escribir"Ingresa dos n�meros"
			leer a,b
			Segun num hacer
				1: 
					escribir"La suma: " ,a," + ",b," = ",a+b
				2: 
					escribir"La resta: " ,a," - ",b," = ",a-b
				3:
					escribir"La multiplicaci�n: " ,a," * ",b," = ",a*b
				4:
					escribir"La divisi�n: " ,a," / ",b," = ",a/b
				5:
					escribir "El m�dulo de ",a," / ",b," = ",a MOD b
				De Otro Modo:
					Escribir "Ingrese una opci�n correcta"
			FinSegun
			Escribir ""
		SiNo
			num<-0
		FinSi
	FinMientras
	
FinAlgoritmo
