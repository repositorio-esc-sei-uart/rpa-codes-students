Algoritmo HH_MM_SS
	
	Definir HH, MM, SS Como Entero
	
	Escribir "Vamos a verificar si una hora es v�lida o inv�lida"
	Escribir "Ingresa las horas: "
	leer HH
	
	Si HH  < 24 Entonces
		Escribir "La hora es v�lida: "
	SiNo
		Escribir "La hora no es valida"
		
	FinSi
	
	Escribir "Ingresa los minutos v�lidos: "
	leer MM
	
	Si MM  < 60 Entonces
		Escribir "Los minitos son v�lidos: "
	SiNo
		Escribir "Los minutos no son validos"
		
	FinSi
	
	Escribir "Ingresa los segundos: "
	
	leer SS
	
	Si SS  < 60 Entonces
		
		Escribir "Los segundos son: "
	SiNo
		Escribir "Los segundos no son validos"
		
	FinSi
	
	Escribir "La hora es: "
	
	Escribir  HH,":", MM,":", SS
	
	Escribir "Fin de la sesi�n"
	
FinAlgoritmo