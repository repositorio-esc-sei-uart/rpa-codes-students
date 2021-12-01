Algoritmo precio_de_un_cajero
	Escribir 'ingrese precio'
	Leer Precio
	Repetir 
	Hasta Que Precio>0
	Escribir '¿Desea pagar con tarjeta?'
	Escribir '(Tarjeta o Efectivo)'
	Leer Forma
	Si Forma='Tarjeta' O Forma='T' O Forma='tarjeta' Entonces
		Escribir 'con Tarjeta seria tiene un recargo del 10%'
		Recargo <- Precio*10/100
		Precio <- Precio+Recargo
		Escribir 'El monto a pagar seria de ',Precio,'$'
	SiNo
		Escribir 'Con Efectivo el monto a pagar seria de ',Precio,'$'
	FinSi
FinAlgoritmo
