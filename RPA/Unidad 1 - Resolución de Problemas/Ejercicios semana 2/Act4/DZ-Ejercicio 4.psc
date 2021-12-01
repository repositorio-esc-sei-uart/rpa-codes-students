Proceso sin_titulo
	Escribir "Bienvenido, por favor ingrese dos valores numericos"
	Escribir "Ingrese el primer valor:"
	Leer A
	Escribir "Ingrese el segundo valor:"
	Leer B
	Si B=0 Entonces
		Escribir "División inválida"
	SiNo
		Div<-A/B
		Escribir "División entre los valores ingresados:" Div 
	FinSi
FinProceso
