//Alumno: Pablo Laime 
Algoritmo Validar_Hora
	
	//Defino las variables
	Definir hora, min, seg como Entera
	
	//Leo la entrada de datos HH:MM:SS
	Escribir "Ingrese una hora HH MM SS"
	Escribir "Ingrese HH (Horas)"
	Leer hora
	Escribir "Igrese MM (Minutos)"
	Leer min
	Escribir "Ingrese SS (Segundos)"
	Leer seg
	
	//Verifico que la hora ingresada sea valida
	Si hora <= 24 Y min <= 60 Y seg <= 60 Entonces
		Si hora >= 0 Y min >= 0 Y seg >= 0 Entonces
			Escribir "Hora ingresada: " hora ":" min ":" seg " Verificación valida"
		SiNo
			Escribir "Hora ingresada: " hora ":" min ":" seg " Verificación invalida"
		Fin Si
	SiNo
		Escribir "Hora ingresada: " HH ":" MM ":" SS " Verificación invalida"
	Fin Si
	
FinAlgoritmo
