Algoritmo caja_registradora
	
	Definir monto Como Entero
	Definir recargo Como Real
	Definir monto_total Como Real
	Definir forma_de_pago Como Numerica
	
	Escribir "Ingrese el monto a pagar"
	Leer monto
	
	Si monto > 0 Entonces
		
		Escribir "Seleccione su forma de pago"
		Escribir "(1) Efectivo " " (2) Tarjeta de debito +3% " " (3) Transferencia bancaria +5% " " (4) Mercado pago +5% " "  (5) Tarjeta de Credito +7% "
		Leer forma_de_pago
		
		Segun forma_de_pago Hacer
			1:
				Escribir "Su monto total a pagar es: $" monto
			2:
				recargo <- monto * 3 / 100
				monto_total <- recargo + monto
				Escribir "El monto total a pagar con 3% de recargo es de: $" monto_total
			3:
				recargo <- monto * 5 / 100
				monto_total <- recargo + monto
				Escribir "El monto total a pagar con 5% de recargo es de: $" monto_total
			4:
				recargo <- monto * 5 / 100
				monto_total <- recargo + monto
				Escribir "El monto total a pagar con 5% de recargo es de: $" monto_total
			5:
				recargo <- monto * 7 / 100
				monto_total <- recargo + monto
				Escribir "El monto total a pagar con 7% de recargo es de: $" monto_total
			De Otro Modo:
				Escribir "Opcion invalida"
		Fin Segun
	SiNo
		Escribir "El monto ingresado es invalido"
	Fin Si
	
	
FinAlgoritmo
