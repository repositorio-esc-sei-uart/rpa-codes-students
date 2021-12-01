Algoritmo hrs
	escribir "Ingrese la cantidad de segundos:"
	leer cantidad
	
	dias <- trunc(cantidad / 86400)
	acumulador <- trunc(cantidad mod 86400)
	horas <- trunc(acumulador / 3600)
	acumulador <- trunc(acumulador mod 3600)
	minutos <- trunc(acumulador/60)
	segundoss <- acumulador mod 60
	
	Escribir dias," dias ",horas, " hrs ", minutos, " min ", segundoss, "seg"
	

FinAlgoritmo
