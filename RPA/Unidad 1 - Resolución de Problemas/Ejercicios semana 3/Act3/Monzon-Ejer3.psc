Algoritmo HH_MM_SS
	
	Definir HH, MM, SS Como Entero
	
	Escribir "Vamos a verificar si una hora es válida o inválida"
	Escribir "Ingresa las horas: "
	leer HH
	
	Si HH  < 24 Entonces
		Escribir "La hora es válida: "
	SiNo
		Escribir "La hora no es valida"
		
	FinSi
	
	Escribir "Ingresa los minutos válidos: "
	leer MM
	
	Si MM  < 60 Entonces
		Escribir "Los minitos son válidos: "
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
	
	Escribir "Fin de la sesión"
	
FinAlgoritmo