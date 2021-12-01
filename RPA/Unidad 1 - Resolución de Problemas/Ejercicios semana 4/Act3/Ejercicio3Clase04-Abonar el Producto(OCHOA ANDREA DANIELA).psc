Algoritmo Abonar_el_producto
	definir monto como real
	definir recargo como numerico
	definir montorecargo como numerico
	definir mododepago Como numerico
	Escribir "Ingrese el monto a Pagar"
	leer monto
	si monto >0 Entonces
		Escribir "Ingrese el Modo de Pago"
		escribir"1 = Efectivo"
		Escribir "2 = Tarjeta de Débito (Costo extra del 3% )"
		Escribir "3 = Transferencia Bancaria (Costo extra del 5%)"
		Escribir "4 = Mercado pago Costo ectra del 5%)"
		escribir"5 = Tarjeta de Crédito (Costo extra del 7%)"
		leer mododepago
		Segun  mododepago hacer
			1:
				escribir"El monto a pagar con efectivo es: $ ",monto
			2:
				recargo<-monto*3/100
				montorecargo<-recargo+monto
				escribir "El monto a pagar con Tarjeta de Débito es: $ ",montorecargo
			3:
				recargo<-monto*5/100
				montorecargo<-recargo+monto
				Escribir "El monto a pagar con Transferencia bancaria es: $ ",montorecargo
			4:
				recargo<-monto*5/100
				montorecargo<-recargo+monto
				Escribir "EL monto a pagar con Mercado pago es: $ ",montorecargo
			5:
				recargo<-monto*7/100
				montorecargo<-recargo+monto
				Escribir "El monto a pagar con Tarjeta de credito es: $ ",montorecargo
		FinSegun
		
		
	SiNo
		escribir"El Monto a pagar que ud. ingresó es inválido."
	FinSi
	
FinAlgoritmo
