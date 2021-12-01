Algoritmo verificar_la_hora
	Definir HH,MM,SS Como Entero
	Escribir "ingrese la hora"
	Leer HH
	Escribir "ingrese los minutos"
	Leer MM
	Escribir "ingrese los segundos"
	Leer SS
	Si HH<24 Y MM<60 Y SS<60 Entonces
		Escribir "La hora es " HH ":" MM ":" SS
	SiNo
		Escribir "La hora es invalida"
	Fin Si
	
FinAlgoritmo
