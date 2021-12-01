//Alumno: Pablo Laime

Algoritmo Cajero_de_supermercado
	
	//DefIno las variables
	Definir monto como Numerica
	Definir monto_total como Numerica
	Definir monto_recargo como Numerica
	Definir recargo como Numerica
	Definir A Como Caracter
	Definir t Como Caracter
	Definir B Como Caracter
	
	//Leo la entrada de datos (monto)
	Escribir "Ingrese el monto a pagar"
	Leer monto
	
	//Verifico que el monto sea valido
	Si monto > 0 Entonces
		Escribir "El monto es valido"
		Escribir "Ingrese la forma de pago, Tarjeta (T), Efectivo (intro)"
		Leer b
		//Segun la forma de pago, agregar o no un recargo 
		Si b <> t Entonces    
			recargo <- monto * 10 / 100
			monto_recargo <- recargo + monto
			Escribir "El monto total a pagar con tarjeta (con el 10% de recargo) es: $" monto_recargo
			
		SiNo
			Escribir "El monto total a pagar es: $" monto
		Fin Si
	SiNo
		Escribir "El monto es invalido"
	Fin Si

FinAlgoritmo
