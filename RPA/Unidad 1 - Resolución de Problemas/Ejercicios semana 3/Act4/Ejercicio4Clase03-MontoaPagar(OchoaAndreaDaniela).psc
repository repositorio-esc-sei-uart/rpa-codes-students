Algoritmo Monto_a_Pagar
	definir monto Como Real
	definir montoT Como Real
	definir montoR Como Real
	definir recarga Como Real
	definir a Como Caracter
	definir b como caracter 
	definir T Como Caracter
	escribir"Ingrese el monto a pagar"
	leer monto
	si monto>0 Entonces
		escribir"el monto es válido"
		escribir"Elija la forma de pago, Tarjeta(T), Efectivo (Enter)"
		leer b
		si b!= t Entonces
			recarga <- monto * 10/100
			montoR<-recarga+monto
			escribir "el monto total a pagar con tarjeta, el cual se aplica el 10% de recargo) es : $ " montoR
		sino
			escribir "El monto total a pagar es: $ " monto
			FinSi
	SiNo
		escribir"El monto es Inválido"
	FinSi
	
FinAlgoritmo
