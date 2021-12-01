Algoritmo sin_titulo
	Escribir 'ingrese nombre del producto'
	Leer PD
	Escribir 'ingrese precio'
	Leer pr
	Escribir 'impusto por pago de tarjeta'
	Leer porc
	Escribir 'Forma de pago'
	Leer FP
	Segun pago  Hacer
		tarjeta:
			Escribir 'se aplicara un 10% de recargo'
			Leer t
			valpor <- pr*porc/10
			cantplus <- pr+valpor
			cantminus <- pr-valpor
			Escribir 'valor del producto:',valpor,'pesos'
			Escribir 'valor del producto con impuestos:',cantplus,'pesos'
			Escribir 'el valor con descuento es:',cantminus,'pesos'
		De Otro Modo:
			Leer e
			Escribir 'valor a pagar ',valpor, 'pesos' 
	FinSegun
FinAlgoritmo
