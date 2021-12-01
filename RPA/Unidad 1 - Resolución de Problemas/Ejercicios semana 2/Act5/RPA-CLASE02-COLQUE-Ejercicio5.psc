Algoritmo Precios
	
	Definir A Como Entero
	Definir t Como Caracter
	Definir resultado Como Entero
	
	Escribir "Hola"
	Escribir "Inserte el monto total de la compra realizada"
	Leer A
	
	
	Escribir "Ingresa la forma de pago"
	escribir "Considere T para pago con tarjetas y E para pago en efectivo"
	leer B
	
	Si B=="t"
		resultado <- (A/10) + A
		Escribir "El monto a pagar con credito es: $" resultado
	Sino
		Escribir "El monto a pagar en efectivo es: $" A
	FinSi
	
	
FinAlgoritmo
