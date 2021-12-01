//Alumno: Pablo Laime
Algoritmo Promedio_del_alumno
	
	//Defino las variables
	Definir nota1, nota2 como Enteras 
	Definir promedio como Numerica
	
	//Leo la entrada de datos
	Escribir "Ingrese dos notas del 1 al 10"
	Escribir "Ingrese la primer nota"
	Leer nota1
	Escribir "Por favor inrese la segunda nota"
	Leer nota2
	
	//Asigno la expresion a la variable promedio
	promedio <- (nota1 + nota2) / 2
	
	//Determino si las notas ingresadas son validas caso contrario finalizo el algoritmo 
	Si nota1 > 0 Y nota1 <= 10 Y nota2 > 0 Y nota2 <=10 Entonces
		Si nota1 > 4 Y nota2 > 4 Entonces
			Escribir "El alumno está aprobado con un promedio de: " promedio
		SiNo
			Escribir "El alumno está desaprobado con un promedio de: " promedio
		Fin Si
	SiNo
		Escribir "El valor de una de las notas o ambas es inválido, por favor, verifique e ingrese nuevamente las notas "
	Fin Si
FinAlgoritmo
