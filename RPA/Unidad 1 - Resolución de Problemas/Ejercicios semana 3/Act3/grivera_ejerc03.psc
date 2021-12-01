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
	Escribir " Por último ingresar los segundos. Apretar Enter. "
	Leer SS
	
	
	// Se verifica la validez del horario.
	Si HH <=24 Entonces
		Si MM <=59 Entonces
			Si SS<=59 Entonces
				Escribir " La hora ingresada es válida. "
			SiNo
				Escribir " La hora ingresada es inválida. "
			Fin Si
		SiNo
			Escribir " La hora ingresada es inválida. "
		Fin Si

	SiNo
		Escribir " La hora ingresada es inválida. "
	Fin Si
	
	
FinAlgoritmo
// No supe cómo hacer ingresar el horario en formato HH:MM::SS
