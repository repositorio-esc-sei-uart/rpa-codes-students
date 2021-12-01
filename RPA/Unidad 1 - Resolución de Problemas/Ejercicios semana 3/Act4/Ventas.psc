Algoritmo monto_a_pagar
	
	Definir monto,pago1,pago2 Como Entero
	Definir regarco como Real 
	
	recargo<-( monto * 10 )/100 
	
	monto =2000
	pago1= tarjeta
	pago2= efectivo
	
	
	Escribir " Ingrese el monto a pagar"
	Leer monto

	
	Si  monto = 2000 Entonces
		Escribir " ingreso valido"
		monto= 2000
		si pago1=tarjeta o pago2=efectivo Entonces
			recargo<-( monto * 10 )/100 
			monto= 2000
			
			Escribir recargo,"  Es el recargo"
			    
		sino 
			Escribir" El total es 2000"
			Leer monto
				
		      FinSi
		 
	sino 
		Escribir"· ingreso invalido"
		
	FinSi
	
	
	
	
FinAlgoritmo
