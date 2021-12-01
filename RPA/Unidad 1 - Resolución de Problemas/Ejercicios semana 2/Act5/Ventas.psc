Algoritmo monto_a_pagar
	
	Definir monto,recargo,pago1,pago2 Como Entero
	
	monto=2000
	recargo= monto
	Pago1= tarjeta
	Pago=efectivo
	
	Escribir "Ingrese el monto a pagar"
	Leer monto
	Escribir" Ingrese la forma de pago1 si es tarjeta o pago2 efectivo"
	

	Si  monto = 2000 Entonces
		Escribir " Ingreso Valido"
		
		si pago1=tarjeta Entonces
			
			Escribir " tu pago es de 2000 mas 200 de recargo"
			
			pago1=tarjeta
		sino 
			Escribir" El total es 2000"
			Efectivo=2000
				
		FinSi
		 
	sino 
		Escribir"· ingreso invalido"
		
	FinSi
	
	
	
	
FinAlgoritmo
