Algoritmo Reloj
	
	Definir Hor Como Entero
	Definir Min Como Entero
	Definir Seg Como Entero
	
	Escribir "Hola, mucho gusto, ahora le pedire un horario (en formato 24hs)"
	Escribir "y le dire si este es valido o no"
	
	Escribir "Por favor, ingrese las horas"
	Leer Hor
	Escribir "Ahora ingrese los minutos"
	Leer Min
	Escribir "Por ultimo ingrese los segundos"
	Leer Seg
	
	Si (Seg < 0 o Seg > 60) o (Min < 0 o Min > 60) o (Hor < 0 o Hor > 24) Entonces
		Escribir "El horario " Hor ":" Min ":" Seg " es un horario invalido"
	SiNo
		Escribir "El horario " Hor ":" Min ":" Seg " es un horario valido"
	Fin Si
	
FinAlgoritmo
