Algoritmo nueva_venta
	Definir monto como real
	Definir m�todo Como entero
	Definir total como real
	Escribir "VENTA DE PRODUCTOS"
	Escribir "Ingresar el monto bruto del producto: "
	Leer monto
	
	Escribir "Elija el m�todo de pago: "
	Escribir " (1) Efectivo, (2) Tarjeta de D�bito, (3) Tranferencia Bancaria, (4) Marcado Pago, (5) Tarjeta de Cr�dito"
	Leer m�todo
	
	Si m�todo == 1 Entonces
		Escribir "EFECTIVO: 0% " 
		Escribir "El monto total a pagar es: $" monto
	FinSi
	Si m�todo == 2 Entonces
		Escribir "TARJETA DE D�BIDO: +3%"
		total <- (monto*3)/100 + monto
		Escribir "El monto total a pagar es: $" total
	FinSi 
	Si m�todo == 3 Entonces
		Escribir "TRANSFERENCIA BANCARIA: +5%"
		total <- (monto*5)/100 + monto
		Escribir "El monto total a pagar es: $" total
	FinSi 
	Si m�todo == 4 Entonces
		Escribir "MERCADO PAGO: +5%"
		total <- (monto*5)/100 + monto
		Escribir "El monto total a pagar es: $" total
	FinSi 
	Si m�todo == 5 Entonces
		Escribir "TARJETA DE CR�DITO: +7%"
		total <- (monto*7)/100 + monto
		Escribir "El monto total a pagar es: $" total
	FinSi 
FinAlgoritmo








