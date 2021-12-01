Algoritmo Hora
	
	Definir H, Min, Seg Como Numerica
	Definir bb Como Caracter
	
	Escribir "Hola, para verificar ingrese:"
	Escribir ""
	Escribir "La Hora en formato (24hs):"
	Leer H
	Escribir ""
	Escribir "Los Minutos:"
	Leer Min
	Escribir ""
	Escribir "Los Segundos:"
	Leer Seg
	
	Si H<=24 y Min<=60 y Seg<=60 Entonces
		Escribir "La verificación de la Hora " H ":" Min ":" Seg " ingresada es Valida"
	SiNo
		Escribir "La verificación de la Hora " H ":" Min ":" Seg " ingresada es Invalida"
	Fin Si
	
FinAlgoritmo