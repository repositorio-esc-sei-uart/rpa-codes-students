Proceso sin_titulo
	Escribir "Bienvenido usuario"
	
	Escribir "Ingrese monto a pagar:"
	Definir P Como Entero
	Leer P
	
	Si P>0 Entonces
		
		
		Escribir "De que forma va abona el cliente?"
		
		Escribir "Recuerde que con tarjeta tiene un recargo del 10%"
		
		Escribir "Ingrese (T) si es con tarjeta de credito o ingrese (E) si es en efectivo"
		
		Definir Op Como Caracter
		
		Leer Op
		
		Si Op=='T' Entonces
			
			Rec<-(P/10)+P
			
			Escribir "El monnto a pagar con tarjeta de credito es de:" Rec
			
		SiNo
			Si A=='E' Entonces
				Escribir "El monto a pagar es de:" P
				
			SiNo
				Escribir "Dato invalido"
			FinSi
			
		FinSi
	SiNo
		Escribir "Monto invalido, fin de operación"
		
	FinSi
	
FinProceso
