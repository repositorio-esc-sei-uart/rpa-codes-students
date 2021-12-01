Algoritmo El_precio

	Definir Precio Como Real
	Definir Forma Como Caracter
	Definir Recargo Como Real
	
	Escribir "Hola mucho gusto, ahora voy a pedirle un precio y la forma de pago"
	Escribir " "
	
	Escribir "Coloque el precio a pagar"
	Repetir
		Leer Precio
		Si Precio <= 0 Entonces
			Escribir "No es posible un precio de 0 o menos"
		FinSi
	Hasta Que Precio > 0
	
	Escribir " "
	Escribir "¿Desea pagar con tarjeta?"
	Escribir "(Tarjeta o Efectivo)"
	Leer Forma
	Si Forma = "Tarjeta" o Forma = "T" o Forma = "tarjeta" Entonces
		Escribir "con Tarjeta seria tiene un recargo del 10%"
		Recargo <- Precio * 10 / 100
		Precio <- Precio + Recargo
		Escribir "El monto a pagar seria de " Precio "$"
	SiNo
		Escribir "Con Efectivo el monto a pagar seria de " Precio "$"
	Fin Si
	
FinAlgoritmo
