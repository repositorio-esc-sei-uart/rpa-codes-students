Proceso sin_titulo
	Escribir "Bienvenido usuario"
	Escribir "Ingrese un numero por favor:"
	Definir Num Como Entero
	Leer Num
	Si Num==0 Entonces
		Escribir "El número ingresado es 0" Num
	SiNo
		Si Num>0 Entonces
			Escribir "El número infresado es positivo" Num
		SiNo
			Escribir "El número ingresado es negativo" Num
		FinSi
	FinSi
FinProceso
