Algoritmo HH_MM_SS
	definir hh como entero
	definir mm Como Entero
	definir ss como entero
	escribir"Ingrese la hora, minutos y segundos."
	leer hh,mm,ss
	escribir"Hora ingresada: " 
	si hh<=24 Entonces
		escribir hh,":",mm,":",ss " - Verificación: Válida (Hora)"
		si mm<=60 Entonces
			escribir hh,":",mm,":",ss " - Verificación: Válida (Minutos)"
			si ss<=60 Entonces
				escribir hh,":",mm,":",ss " - Verificacion: Válida (Segundos)"
			FinSi
		FinSi
		
	FinSi
	si hh>=24 entonces escribir hh,":",mm,":",ss " - Verificación: Inválida (Hora)"
		si mm>=60 entonces escribir hh,":",mm,":",ss " - Verificación Inválida (Minutos)"
			si ss>=60 entonces escribir hh,":",mm,":",ss " -Verificación Inválida (Segundos)"
				
			FinSi
		FinSi
	FinSi
FinAlgoritmo
//intenté varias maneras y no me ha salido. espero poder aprenderlo en la siguiente clase.