Algoritmo HH_MM_SS
	definir hh como entero
	definir mm Como Entero
	definir ss como entero
	escribir"Ingrese la hora, minutos y segundos."
	leer hh,mm,ss
	escribir"Hora ingresada: " 
	si hh<=24 Entonces
		escribir hh,":",mm,":",ss " - Verificaci�n: V�lida (Hora)"
		si mm<=60 Entonces
			escribir hh,":",mm,":",ss " - Verificaci�n: V�lida (Minutos)"
			si ss<=60 Entonces
				escribir hh,":",mm,":",ss " - Verificacion: V�lida (Segundos)"
			FinSi
		FinSi
		
	FinSi
	si hh>=24 entonces escribir hh,":",mm,":",ss " - Verificaci�n: Inv�lida (Hora)"
		si mm>=60 entonces escribir hh,":",mm,":",ss " - Verificaci�n Inv�lida (Minutos)"
			si ss>=60 entonces escribir hh,":",mm,":",ss " -Verificaci�n Inv�lida (Segundos)"
				
			FinSi
		FinSi
	FinSi
FinAlgoritmo
//intent� varias maneras y no me ha salido. espero poder aprenderlo en la siguiente clase.