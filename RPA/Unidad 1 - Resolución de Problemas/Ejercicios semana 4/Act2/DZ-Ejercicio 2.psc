Proceso sin_titulo
	//Suponga que para aprobar una asignatura, a un alumno se le calcula el
	//promedio aritmético de tres notas, luego si éste es superior o igual a 7,
	//entonces está promocionado (eximido). Si el promedio es menor que 7, pero
	//mayor o igual a 4, entonces regulariza y debe rendir un examen final. Si el
	//promedio es menor que 4, queda libre y tiene que recursar la asignatura. La
	//escala de evaluación es de 1 a 10. Además, si algunas de las tres notas del
	//alumno es menor que 4 entonces debe rendir recuperatorio. (utilice bandera).
	Definir N1, N2, N3 Como Entero
	Definir Cond Como Logico
	Cond<-Falso
	Escribir "Bienvenido profesor/a, por favor ingrese las notas del alumno"
	Escribir "RECUERDE que la escala de notas es de 1-10"
	Escribir "Ingrese Nota del 1er pacial"
	Leer N1
	Escribir "Ingrese nota del 2do parcial"
	Leer N2
	Escribir "Ingrese nota del 3er parcial"
	Leer N3
	Si (N1>=1) Y (N3<=10) Y (N3>=1) Y (N2<=10) Y (N2>=1) Y (N2<=10) Entonces
		Prom<-(N1+N2+N3)/3
		Si (N1<4) o (N2<4) o (N3<4) Entonces
			cond<-Verdadero
		FinSi
		Si cond==Verdadero Entonces
			Escribir "El alumno debe rendir recuperatorio"
			Escribir "Promedio:" Prom
		FinSi
		Si Prom>=7 Entonces
			Escribir "El alumno promociono la meteria"
			Escribir "Promedio:" Prom
		SiNo
			Escribir "El alumno regularizo la materia pero debe rendir un examen final"
			Escribir "Promedio:" Prom
		FinSi
	SiNo
		Escribir "NO respeta la escala de notas (1-10)"
		Escribir "Notas ingresadas: " 
		Escribir  "Primer parcial: " N1 
		Escribir  "Segundo parcial: " N2 
		Escribir  "Tercer pacial: " N3
	FinSi
FinProceso
