Algoritmo pago_de_la_compra
	

	Definir Recargo Como Numerica
	Definir division Como Numerica
	Definir Precio Como Numerica
	Escribir "¿Cuánto le debo por la compra? "
	Leer Precio
	Si Precio > 0
		Entonces
		Escribir "Si desea pagar con tarjeta de crédito presione t"
		Si Leer t
			division<-Precio/10
			Recargo<-Precio+division
			Escribir "El monto a pagar es$" Recargo
		SiNo
			Escribir "El monto a pagar es $" Precio
		Fin Si
	SiNo
		Escribir "El monto es inválido"
	Fin Si
	
FinAlgoritmo
