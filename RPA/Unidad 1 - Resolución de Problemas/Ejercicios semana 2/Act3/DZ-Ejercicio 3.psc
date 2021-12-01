Proceso sin_titulo
	Escribir "Bienvenido, por favor ingrese dos valores numericos"
	Escribir "Ingrese el primer valor:"
	Leer A
	Escribir "Ingrese el segundo valor:"
	Leer B
	AUX<-0
	Si A>B Entonces
		AUX<-A
		A<-B
		B<-AUX
		Escribir "A=" A
		Escribir "B=" B
	SiNo
		Escribir "Hasta pronto"
	FinSi
FinProceso
