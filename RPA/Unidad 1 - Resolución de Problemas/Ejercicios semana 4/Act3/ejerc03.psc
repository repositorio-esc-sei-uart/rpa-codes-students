Algoritmo Compra
	
	
	
	
	//  Variables.
	Definir metodo_de_pago Como Entera
	Definir credito Como Numerica
	Definir MP Como Numerica
	Definir transferencia Como Numerica
	Definir debito Como Numerica
	Definir monto Como Entero
	
	
	// Inreso de datos.
	Escribir " Ingresar el monto a pagar por favor. "
	Leer monto
	debito<- (monto*3/100) + monto
	transferencia<-(monto*5/100) + monto
	MP<-(monto*5/100) + monto
	credito<-(monto*7/100) + monto
	Escribir " ¿Cómo desea abonar? "
	Escribir " (1) Para abonar en efectivo. "
	Escribir " (2) Para abonar con tarjeta de débito. "
	Escribir " (3) Para abonar con transferencia bancaria. "
	Escribir " (4) Para abonar con Mercado Pago. "
	Escribir " (5) Para abonar con tarjeta de crédito. "
	Leer metodo_de_pago
	
	
	
	// Proceso de pago.
	Segun metodo_de_pago Hacer
		1:
			Escribir " El monto a pagar es: $" monto
		2:
			Escribir " El monto a pagar es: $" debito
		3:
			Escribir " El monto a pagar es: $" transferencia
		4: 
			Escribir " El monto a pagar es: $" MP
		5: 
			Escribir " El monto a pagar es: $" credito
		De Otro Modo:
			Escribir " La opción ingresada es incorrecta. "
	Fin Segun
	
	Escribir " Gracias por su compra. "
	
FinAlgoritmo
