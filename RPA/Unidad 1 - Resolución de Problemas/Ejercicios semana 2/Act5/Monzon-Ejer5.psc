Algoritmo monto_a_pagar
	Definir total Como Real
	Definir opc como real
	Definir opc1 Como Real
	Definir opc2 Como Real
	
	
	Escribir "Formas de pago: "
	Escribir "1. Tarjeta de cr�dito"
	Escribir "2. Efectivo"
	Escribir "Elija una opci�n"
	Leer opc
	
	Escribir "Monto a pagar: "
	Leer total
	
	Si opc=1 entonces 
		total <- (total/10) + total
		
		Escribir "El total a pagar con un 10% de recargo es: " total
		
		
	sino opc=2 
		Escribir "El total a pagar en efectivo es: " total
		
	FinSi
	
FinAlgoritmo
