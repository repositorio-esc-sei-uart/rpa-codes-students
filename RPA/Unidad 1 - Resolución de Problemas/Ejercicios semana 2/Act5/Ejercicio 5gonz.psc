	Algoritmo PagoTarjeta
		Definir multiplicacion como numerica
		Definir Precio como numerica
		Escribir "forma pago"
		Leer precio
		Si T<> "T" Entonces 
			resultado<-(precio*0.10)+precio
			Escribir "El monto a pagar con credito es: " resultado
		Sino
			Escribir "El monto a pagar en efectivo es: " precio 
		FinSi
		
FinAlgoritmo
