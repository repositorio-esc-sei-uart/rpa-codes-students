Proceso sin_titulo
	//Solicitar al usuario un monto bruto válido en $ para abonar por la venta de
	//un producto. Luego pedir que elija entre los siguientes métodos de pago, los
	//cuales tendrá un costo extra: (1) Efectivo: 0%; (2) Tarjeta de Débito:
	//+3%; (3) Transferencia Bancaria: +5%; (4) Mercado Pago: +5%; (5)
	//Tarjeta de Crédito: +7%. Finalmente mostrar el valor final con el importe
	//extra por medio de pago elegido.
	Definir pagar Como Real
	Definir MePago Como Entero
	Escribir "Bienvenido usuario, por favor ingrese el monto a pagar:"
	Leer Pagar
	Escribir "Con que medio va a pagar el cliente?"
	Escribir "Seleccione un medio de pago"
	Escribir "(1) Efectivo:0%"
	Escribir "(2) Tarjeta de Débito:+3%"
	Escribir "(3) Transferencia Bancaria:+5%"
	Escribir "(4) Mercado Pago: +5%"
	Escribir "(5) Tarjeta de Crédito:+7%"
	Leer MePago
	Segun MePago hacer
		1: 
			Escribir "Usted selecciono EFECTIVO"
			Escribir "Total a pagar: " Pagar
		2: 
			Escribir "Usted selecciono TARJETA DE DEBITO"
			TDB<-(Pagar/100)*3
			Tpagar<-TDB+Pagar
			Escribir "Total a pagar: " Tpagar 
		3:
			Escribir "Ustede selecciono TRANSFERENCIA BANCARIA"
			TB<-(Pagar/100)*5
			Tpagar<-TB+Pagar
			Escribir "Total a pagar: " Tpagar
		4: 
			Escribir "Usted selecciono MERCADO PAGO"
			MP<-(Pagar/100)*5
			Tpagar<-MP+Pagar
			Escribir "Total a pagar: " Tpagar
		5: 
			Escribir "Usted selecciono TARJETA DE CREDITO"
			TC<-(Pagar/100)*7
			Tpagar<-TC+Pagar
			Escribir "Total a pagar: " Tpagar
			
	FinSegun
	
FinProceso
