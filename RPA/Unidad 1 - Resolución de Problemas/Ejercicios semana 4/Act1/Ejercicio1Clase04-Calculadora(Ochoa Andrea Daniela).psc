Algoritmo Calculadorita
	
	definir num Como Entero
	definir a Como Real
	definir b como real
	num<-1
	Escribir "Hola! Soy tu calculadora personal"
	Escribir ""
	mientras num <> 0 Hacer
		Escribir "A continuación seleccioná una operación que desees que resuelva:"
		Escribir"1 = Suma"
		Escribir "2 = Resta"
		Escribir "3 = Multiplicación"
		escribir"4 = División"
		escribir"5 = Módulo"
		escribir"Presiona otro número para SALIR"
		leer num
		si num>0 y num<6 Entonces
			escribir"Ingresa dos números"
			leer a,b
			Segun num hacer
				1: 
					escribir"La suma: " ,a," + ",b," = ",a+b
				2: 
					escribir"La resta: " ,a," - ",b," = ",a-b
				3:
					escribir"La multiplicación: " ,a," * ",b," = ",a*b
				4:
					escribir"La división: " ,a," / ",b," = ",a/b
				5:
					escribir "El módulo de ",a," / ",b," = ",a MOD b
				De Otro Modo:
					Escribir "Ingrese una opción correcta"
			FinSegun
			Escribir ""
		SiNo
			num<-0
		FinSi
	FinMientras
	
FinAlgoritmo
