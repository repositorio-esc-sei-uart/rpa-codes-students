Algoritmo calcula_el_promedio_de_notas
	// pedir datos
	Escribir 'ingrese el primer numero '
	Leer n
	acum <- 0
	Para i<-1 Hasta n Hacer
		Escribir 'ingrese el dato',i,':'
		Leer dato
		acum <- acum+dato
	FinPara
	prom <- acum/n
	Escribir 'el promedio es',prom
	Escribir 'ingrese resultado del promedio'
	Leer prom
	Si prom>7 Entonces
		Escribir 'Esta promocionado'
	SiNo
		Si prom  >= 4 Entonces
			Escribir 'el alumno regulariza'
		SiNo
			Si prom<4 Entonces
			Escribir 'el alumno queda libre'
			FinSi
		FinSi
	FinSi
FinAlgoritmo
