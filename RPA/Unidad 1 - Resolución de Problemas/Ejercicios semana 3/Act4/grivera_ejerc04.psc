Algoritmo Pago_de_compra
	

	
	// Entradas.
	Definir division Como Numerica
	Definir recargo Como Numerica
	Definir Precio Como Numerica
	Definir Tarjeta Como Caracter
	
	
	// Variables.
	Leer Precio
	division<- Precio/10
	recargo<- Precio+division
	Tarjeta<- 'T'
	
	
	// Se define el precio de la compra.
	Si Precio>=0 Entonces Escribir " ¿Desea abonar con tarjeta de crédito? "
		
		Si  Leer 'T'
			
			Escribir " El monto a pagar es: " recargo
		SiNo
			Escribir " El monto a pagar es: " Precio
		Fin Si
	SiNo
		Escribir "El precio ingresado es inválido. "
	Fin Si
	
	
FinAlgoritmo
