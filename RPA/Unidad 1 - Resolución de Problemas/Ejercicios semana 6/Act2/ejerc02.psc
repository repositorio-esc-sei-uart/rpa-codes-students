Algoritmo Potencia_y_factorial
	
	// Variables.
	Definir opc Como Entero
	Definir num, expo, pot, fact, x Como Entero
	
	
	opc <- 0
	
	Repetir
		
	 
	Escribir " Seleccione una opci�n del men�: "
	Escribir " [1] Calcular la potencia. "
	Escribir " [2] Calcular el factorial. "
	Escribir " [3] Salir. "
	Leer opc
	
	Segun opc Hacer
		1: 
			Escribir " Ingrese la base: "
			Leer num
			Escribir " Ingrese el exponente. "
			Leer  expo
			pot<- num ^ expo
			Escribir " La potencia de ", num , " elevado a " expo " es: " pot
			
		2:
			Escribir " Ingrese un n�mero: "
			Leer num
			si num < 0
				Escribir " El n�mero no se puede calcular. "
			SiNo
				x<-1
				fact<-1
				Mientras fact<= num Hacer
					x<-x*fact
					fact<-fact+1
				FinMientras
				Escribir " El factorial del n�mero ",num, " = ", x
			FinSi
		3:
			Escribir " Sesi�n terminada. "
		De Otro Modo:
			Escribir " La opci�n ingresada es inv�lida. "
	Fin Segun
	
Hasta Que opc == 3
	
	
	
	
	
	
FinAlgoritmo
