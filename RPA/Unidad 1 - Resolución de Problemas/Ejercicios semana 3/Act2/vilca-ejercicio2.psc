Algoritmo notas_aprov
	Definir nota1, nota2 Como Entero
	Definir promedio Como numerico
	Escribir "Ingrese la nota 1"
	Leer nota1
	Escribir "Ingrese la nota 2"
	Leer nota2
	promedio <- (nota1  + nota2) / 2
	Si promedio >= 4 Entonces
		Escribir "El alumno fue aprobado"
	SiNo
		Escribir "El alumno fue desaprobado"
	Fin Si
	Escribir "El promedio final es " promedio
FinAlgoritmo
