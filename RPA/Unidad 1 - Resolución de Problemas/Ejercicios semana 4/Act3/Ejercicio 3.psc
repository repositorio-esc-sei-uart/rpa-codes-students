Algoritmo El_precio_3_el_retorno_del_rey
	
	Definir Precio Como Real
	Definir Forma Como Entero
	Definir Recargo Como Real
	Definir PrecioRecargado Como Real
	
	Escribir "Hola mucho gusto, ahora voy a pedirle un precio y la forma de pago"
	Escribir "------------------------------------------------------------------------"
	
	Escribir "Coloque el precio a pagar"
	Leer Precio
	
	Si Precio > 0 Entonces
		Escribir "------------------------------------------------------------------------"
		Escribir "¿Como desea pagar?"
		Escribir "[1] Efectivo (Recargo del 0%)"
		Escribir "[2] Tarjeta de Débito (Recargo del 3%)"
		Escribir "[3] Transferencia Bancaria (Recargo del 5%)"
		Escribir "[4] Mercado Pago (Recargo del 5%)"
		Escribir "[5] Tarjeta de Crédito (Recargo del 7%)"
		Escribir"(Escriba el numero corresondiente para cada operacion de 1 a 5)"
		Leer Forma
		Escribir "------------------------------------------------------------------------"
		Segun Forma Hacer
			1:
				Escribir "Un pago en efectivo no tiene recargo"
				Escribir "El precio a pagar seria de " Precio "$"
			2:
				Recargo <- Precio * 3 / 100
				PrecioRecargado <- Precio + Recargo
				Escribir "Un pago con Tarjeta de Débito tiene un recargo de 3%"
				Escribir "El precio a pagar seria de " Precio "$"
				Escribir "Con un recargo de " Recargo "$"
				Escribir "Y el total siendo de " PrecioRecargado "$"
			3:
				Recargo <- Precio * 5 / 100
				PrecioRecargado <- Precio + Recargo
				Escribir "Un pago con Transferencia Bancaria tiene un recargo de 5%"
				Escribir "El precio a pagar seria de " Precio "$"
				Escribir "Con un recargo de " Recargo "$"
				Escribir "Y el total siendo de " PrecioRecargado "$"
			4:
				Recargo <- Precio * 5 / 100
				PrecioRecargado <- Precio + Recargo
				Escribir "Un pago con Mercado Pago tiene un recargo de 5%"
				Escribir "El precio a pagar seria de " Precio "$"
				Escribir "Con un recargo de " Recargo "$"
				Escribir "Y el total siendo de " PrecioRecargado "$"
			5:
				Recargo <- Precio * 7 / 100
				PrecioRecargado <- Precio + Recargo
				Escribir "Un pago con Tarjeta de Crédito tiene un recargo de 7%"
				Escribir "El precio a pagar seria de " Precio "$"
				Escribir "Con un recargo de " Recargo "$"
				Escribir "Y el total siendo de " PrecioRecargado "$"
			De Otro Modo:
				Escribir "La forma de pago elegida no es valida"
		Fin Segun
		
	SiNo
		Escribir "Precio invalido"
	Fin Si
	
FinAlgoritmo
