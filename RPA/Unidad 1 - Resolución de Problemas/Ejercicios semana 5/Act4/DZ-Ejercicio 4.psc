Proceso sin_titulo
	Escribir "Bienvenido, por favor ingrese un tipos de datos"
	Para i<-1 Hasta 15 con paso 1 Hacer
		Leer car
		Segun car hacer
			'+', '/', '-', '%', '*': 
				Escribir "Usted ingreso un operador matematico: " x
			'0', '1', '2', '3', '4', '5', '6', '7', '8', '9':
				Escribir "Usted ingreso un digito: " car
			'A', 'E', 'I', 'O', 'U':
				Escribir "Usted ingreso una vocal: " car 
			'a', 'e', 'i', 'o', 'u':
				Escribir "Usted ingreso una vocal: " car
			'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'll',  'm', 'n', 'ñ', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z':
				Escribir "Usted ingreso una consonante: " car
			'B', 'C', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'LL', 'M', 'N', 'Ñ', 'P', 'Q', 'R', 'S', 'T', 'V', 'W', 'X', 'Y', 'Z':
				Escribir "Usted ingreso una consonante: " car
			'!', '¡', '¿', '?', '(', ')', '[', ']', '{', '}', '$', '#', '@', '&', ';', ':', ',', '.', '|':
				Escribir "Usted ingreso un caracter: " car
			De Otro Modo:
				Escribir "Dato invalido"
		FinSegun
	FinPara
FinProceso
