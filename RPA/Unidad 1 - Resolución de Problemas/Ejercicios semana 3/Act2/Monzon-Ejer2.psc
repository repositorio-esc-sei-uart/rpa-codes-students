Algoritmo sin_titulo
	Definir nota1, nota2 como entero
	Definir prom como real
	
	Escribir "Hola, vamos a calificar a un alumno."
	
	Escribir "Ingresar primer nota del alumno: "
	Leer nota1
	
	Si (nota1 >= 4) y (nota1 <=10) entonces
	
	Escribir "El alumno está aprobado."
	sino 
	Escribir "El alumno está desaprobado."
     FinSi 

	Escribir "Ingresar segunda nota del alumno: "
	Leer nota2
	
	Si (nota2 >= 4) y (nota2 <=10) entonces
		
	Escribir "El alumno está aprobado."
	sino 
	Escribir "El alumno está desaprobado."
     FinSi

	prom <- (nota1+nota2)/2
	Escribir "El primedio del alumno es: " prom
	
	Escribir "Fin de la sesión"
	
FinAlgoritmo




