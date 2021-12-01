Algoritmo Potencia_y_factorial
	
	// Variables.
	Definir opc Como Entero
	Definir num, expo, pot, fact, x Como Entero
	
	
	opc <- 0
	
	Repetir
		
	 
	Escribir " Seleccione una opción del menú: "
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
			Escribir " Ingrese un número: "
			Leer num
			si num < 0
				Escribir " El número no se puede calcular. "
			SiNo
				x<-1
				fact<-1
				Mientras fact<= num Hacer
					x<-x*fact
					fact<-fact+1
				FinMientras
				Escribir " El factorial del número ",num, " = ", x
			FinSi
		3:
			Escribir " Sesión terminada. "
		De Otro Modo:
			Escribir " La opción ingresada es inválida. "
	Fin Segun
	
Hasta Que opc == 3
	
	
	
	
	
	
FinAlgoritmo
