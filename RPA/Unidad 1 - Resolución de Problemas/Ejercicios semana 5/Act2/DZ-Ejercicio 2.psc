Proceso sin_titulo
	Definir N1 Como Entero
	Definir N2 Como Entero
	Definir N3 Como Entero
	Definir prom Como Real
	Definir alumno Como Caracter
	cond<-0
	rec<-0
	Escribir "Bienvenido profesor/a, por favor ingrese las notas del alumno"
	Escribir "RECUERDE que la escala de notas es de 1-10"
	Para i<-1 hasta 6 con paso 1 Hacer
		Escribir "Ingrese nombre del alumno"
		Leer alumno
		Escribir "Alumno:" alumno
		Escribir "Ingrese nota del primer parcial"
		Leer N1
		Escribir "Ingrese nota del segundo parcial"
		Leer N2 
		Escribir "Ingrese nota del tercer parcial"
		Leer N3
		Si (N1<4) o (N2<4) o (N3<4) Entonces
			rec<-1
		FinSi
		Si (N1>1) Y (N1<10) Y (N2>1) Y (N2<10) Y (N3>1) Y (N3<10) Entonces
			prom<-(N1+N2+N3)/3
			Si (prom<=4) Y (prom>1) Entonces
			cond<-1
			SiNo
			Si (prom>4) Y (prom<7) Entonces
				cond<-2
			SiNo
				cond<-3
				FinSi
			FinSi
			Segun cond hacer
				1:
					Escribir "El alumno: " alumno " queda libre"
				2:
					Si rec==1 Entonces
						Escribir "El alumno " alumno " recupera un parcial para regularizar la materia"
					SiNo
						Escribir "El alumno " alumno " regularizo la materia"
					FinSi
				3: 
					Si rec==1 Entonces
						Escribir "El alumno " alumno " recupera un parcial para promocionar"
					SiNo
						Escribir "El almuno " alumno " promociono la materia"
					FinSi
			FinSegun
		SiNo
			Escribir "NO respeto la escala de notas"
		FinSi
		
	FinPara
FinProceso
