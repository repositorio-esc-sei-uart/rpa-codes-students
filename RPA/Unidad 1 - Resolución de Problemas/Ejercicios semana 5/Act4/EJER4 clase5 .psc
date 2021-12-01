Algoritmo carateres
	
	Definir x Como Entero
	Definir car Como Caracter
	Definir vocal,consonate,digitos,operadores Como Logico 

	
		
		
		
		Para x=1 hasta 15 Con Paso 1 Hacer 
		    Escribir " Ingrese un caracter " , x
			Leer car
			
			si car == "a" o car=="e" o car=="i"o  car=="o" o car=="u" Entonces 
				
				Escribir" El caracter es un a vocal"
			finsi 
			si car=="+" o car=="-" o car=="*"  o car==":" Entonces 
				Escribir " El caracter operador"
			Finsi 
			
			Si  car <> "a" o car <>"e" o car <> "i" o car <> "o" o car <>"u"
				Escribir "Es una consonante"
				
			FinSi
				
			
		FinPara
		
FinAlgoritmo
