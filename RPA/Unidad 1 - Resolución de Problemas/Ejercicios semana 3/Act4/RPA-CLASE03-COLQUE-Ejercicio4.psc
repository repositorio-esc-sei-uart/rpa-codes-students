Algoritmo Precios
	
	Definir monto, monto_recargo Como Numerica
	Definir t, B Como Caracter
	
	Escribir "Hola"
	Escribir "Ingrese el monto a pagar"
	Leer monto
	
	Si monto>0 Entonces
		Escribir "Ingrese el medio de pago, Tarjeta (t), efectivo (Enter)"
		leer B
		Si B=="t" Entonces
			monto_recargo<-(monto/10)+monto
			Escribir "El monto a pagar es: $" monto_recargo
		SiNo
			Escribir "El monto a pagar es: $" monto
		Fin Si
	SiNo
		Escribir "El monto ingresado es invalido"
	Fin Si
	
FinAlgoritmo