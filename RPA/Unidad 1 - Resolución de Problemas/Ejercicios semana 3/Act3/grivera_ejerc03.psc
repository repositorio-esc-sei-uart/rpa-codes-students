Algoritmo Verificacion_de_hora
	

	// Entradas.
	Definir SS Como Entera
	Definir MM Como Entera
	Definir HH Como Entera
	
	// Se ingresan variables.
	Escribir " Hola, por favor ingresar una hora para verificar su validez. "
	Escribir " Primero ingresar la hora. Dar Enter. "
	Leer HH
	Escribir " Ahora ingrese los minutos por favor y dar Enter. "
	Leer MM
	Escribir " Por �ltimo ingresar los segundos. Apretar Enter. "
	Leer SS
	
	
	// Se verifica la validez del horario.
	Si HH <=24 Entonces
		Si MM <=59 Entonces
			Si SS<=59 Entonces
				Escribir " La hora ingresada es v�lida. "
			SiNo
				Escribir " La hora ingresada es inv�lida. "
			Fin Si
		SiNo
			Escribir " La hora ingresada es inv�lida. "
		Fin Si

	SiNo
		Escribir " La hora ingresada es inv�lida. "
	Fin Si
	
	
FinAlgoritmo
// No supe c�mo hacer ingresar el horario en formato HH:MM::SS
