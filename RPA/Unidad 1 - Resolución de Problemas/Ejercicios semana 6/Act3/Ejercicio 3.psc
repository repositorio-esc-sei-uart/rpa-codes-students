Algoritmo Numeros_al_azar
	Definir num, contNum, sumNum Como Entero
	Definir promedio Como Real
	
	Repetir
		num <- 10 + azar(40-10+1)
		Escribir num
		contNum <- contNum + 1
		sumNum <- sumNum + num
	Hasta Que (num mod 5) == 0
	
	promedio <- sumNum / contNum
	Escribir "Total de numeros aleatorios generados: " contNum
	Escribir "El promedio total de los numeros aleatorios es: " promedio
FinAlgoritmo
