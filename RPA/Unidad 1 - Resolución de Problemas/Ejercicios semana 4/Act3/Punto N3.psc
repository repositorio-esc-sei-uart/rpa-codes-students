Algoritmo bruto_valido

	//pedir datos de entrada
	escribir 'ingrese monto'
	leer monto;
	
	//opciones
	escribir 'ingrese un opcion'
	escribir '1.Efectivo';
	Escribir '2.tarjeta de debito';
	Escribir '3.transferencia bancaria';
	Escribir '4 mercado pago';
	Escribir '5 tarjeta  de credito ';
	
	Leer opc;

	//Proceso 
	Segun opc Hacer
		1:
			res= monto  ;
			Escribir 'con efectivo', res;
		2:
			Recargo <-monto*3/100;
			monto <- monto+Recargo
			res= monto;
			Escribir 'con Tarjeta de debito  tiene un recargo del 3% ', res;
		3:
			Recargo <-monto*5/100;
			monto <- monto+Recargo
			res= monto;
			Escribir 'con transferencia bancaria tiene un recargo del 5% ', res;
		4:	
			Recargo <-monto*5/100;
			monto <- monto+Recargo
			res= monto;
			Escribir 'con mercado pago tiene un recargo del 5% ', res;
		5:
			Recargo <-monto*7/100;
		     monto <- monto+Recargo
			res= monto;
			 Escribir 'con tarjeta de credito tiene un recargo del 7% ', res;
		De Otro Modo:
			Escribir ' opcion incorrecta';
	Fin Segun
	

	
FinAlgoritmo
