Algoritmo nueva_venta
	Definir monto como real
	Definir método Como entero
	Definir total como real
	Escribir "VENTA DE PRODUCTOS"
	Escribir "Ingresar el monto bruto del producto: "
	Leer monto
	
	Escribir "Elija el método de pago: "
	Escribir " (1) Efectivo, (2) Tarjeta de Débito, (3) Tranferencia Bancaria, (4) Marcado Pago, (5) Tarjeta de Crédito"
	Leer método
	
	Si método == 1 Entonces
		Escribir "EFECTIVO: 0% " 
		Escribir "El monto total a pagar es: $" monto
	FinSi
	Si método == 2 Entonces
		Escribir "TARJETA DE DÉBIDO: +3%"
		total <- (monto*3)/100 + monto
		Escribir "El monto total a pagar es: $" total
	FinSi 
	Si método == 3 Entonces
		Escribir "TRANSFERENCIA BANCARIA: +5%"
		total <- (monto*5)/100 + monto
		Escribir "El monto total a pagar es: $" total
	FinSi 
	Si método == 4 Entonces
		Escribir "MERCADO PAGO: +5%"
		total <- (monto*5)/100 + monto
		Escribir "El monto total a pagar es: $" total
	FinSi 
	Si método == 5 Entonces
		Escribir "TARJETA DE CRÉDITO: +7%"
		total <- (monto*7)/100 + monto
		Escribir "El monto total a pagar es: $" total
	FinSi 
FinAlgoritmo








