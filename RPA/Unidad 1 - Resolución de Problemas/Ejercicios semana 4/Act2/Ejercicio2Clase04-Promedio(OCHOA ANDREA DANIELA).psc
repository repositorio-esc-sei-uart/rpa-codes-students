Algoritmo Promedio
	definir notas como entero 
	definir suma Como Real
	definir prom como real
	definir num como real 
	definir acum como entero 
	acum<-1
	suma<-0
	escribir"Cuántas notas desea promediar?"
	leer notas
	mientras acum<=notas hacer 
		escribir "Ingrese la nota número: ", acum 
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
			escribir"El estudiante regularizó la materia"
		SiNo
			escribir"El estudiante quedó libre y tendrá que recursar la materia"
		FinSi
	FinSi
	
	
	
	
	
FinAlgoritmo
