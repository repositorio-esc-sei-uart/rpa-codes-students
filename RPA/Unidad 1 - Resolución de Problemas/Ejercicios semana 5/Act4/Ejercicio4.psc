//Alumno: Pablo Laime
Algoritmo Caracteres_
	//Defino las variables
	Definir c Como Caracter
	Definir num, i Como Entero
	
	Escribir "Ingrese un caracter y este será identificado como Vocal, Consonante o Operador Matematico"
	Para i<-1 Hasta 15 Con Paso 1 Hacer
		
		Escribir "Ingrese el " i "° caracter"
		Leer c     //Leo la entrada de datos
		//Con la estructura Segun determino que tipo de caracter es c
		Segun c Hacer
			'a','e','i','o','u':
				Escribir "El cararcter ingresado es una Vocal"
			'b','c','d','f','g','h','j','k','l','m','n','ñ','p','q','r','s','t','v','w','x','y','z':
				Escribir "El caracter ingresado es una Consonante"
			'/','*','-','+':
				Escribir "El caracter ingresado es un Operador Matematico"
			De Otro Modo:
				Escribir "El caracter ingresado es un Digito"
		Fin Segun
	Fin Para
FinAlgoritmo
