Proceso Importe_a_pagar_seg�n_medio_de_pago
	
	//Defino las variables a emplear
	Definir Monto Como Real
	Definir Efec, TDeb, Transf, MPag, TCred Como Real
	Definir Operaci�n Como Entero
	
	//Solicito el Monto al usuario
	Escribir "Hola, espero estes muy bien hoy."
	Escribir ""
	Escribir "A continuaci�n; ingrese el Monto Bruto a pagar $"
	Leer Monto
	
	Si Monto>0 Entonces //Cuando monto sea correcto
		
		//Solicito al usuario la forma de pago para poder determinar los porcentajes de recargo cuando correspondieren
		Escribir "indique la opci�n correspondiente a la operaci�n que desea realizar."
		Escribir ""
		Escribir "Considere:"
		Escribir "(1) Efectivo - (2) Tarjeta de D�bito - (3) Transferencia Bancaria - (4) Mercado Pago - (5) Tarjeta de Cr�dito"
		Leer Operaci�n
		
		Segun Operaci�n Hacer
			1:
				Efec <- Monto
				Escribir "El Monto a pagar en Efectivo es: $" Efec
				
			2:
				TDeb <- Monto + ((3/100)*Monto)
				Escribir "El Monto a pagar con Tarjeta de D�bito es: $" TDeb
				
			3:
				Transf <- Monto + ((5/100)*Monto)
				Escribir "El Monto a pagar con Transferencia Bancaria es: $" Transf
				
			4:
				MPag <- Monto + ((5/100)*Monto)
				Escribir "El Monto a pagar con Mercado Pago es: $" MPag
				
			5:
				TCred <- Monto + ((7/100)*Monto)
				Escribir "El Monto a pagar con Tarjeta de Credito es: $" TCred
				
			De Otro Modo:
				
				//Cuando Opci�n incorrecta
				Escribir "La Opcion ingresada es INVALIDA, por favor reintente"
			
		Fin Segun
		
		
	SiNo
		Escribir "El monto ingresado es invalido" //Cuando monto incorrecto
	Fin Si
	
	
FinProceso