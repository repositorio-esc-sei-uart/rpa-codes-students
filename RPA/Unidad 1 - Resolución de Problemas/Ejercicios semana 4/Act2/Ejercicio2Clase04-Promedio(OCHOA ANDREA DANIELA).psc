Algoritmo Promedio
	definir notas como entero 
	definir suma Como Real
	definir prom como real
	definir num como real 
	definir acum como entero 
	acum<-1
	suma<-0
	escribir"Cu�ntas notas desea promediar?"
	leer notas
	mientras acum<=notas hacer 
		escribir "Ingrese la nota n�mero: ", acum 
		leer num
		suma <- suma+num 
		acum <- acum+1
		
	FinMientras
	prom <- suma/notas 
	escribir "El promedio es: ",prom 
	si prom>=7 entonces 
		escribir"El estudiante esta promocionado"
	sino
		si prom>=4 entonces 
			escribir"El estudiante regulariz� la materia"
		SiNo
			escribir"El estudiante qued� libre y tendr� que recursar la materia"
		FinSi
	FinSi
	
	
	
	
	
FinAlgoritmo
