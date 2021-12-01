Proceso sin_titulo
	Escribir "Bienvenido, ingrese las notas respetando una escala de 1 a 10"
	Leer N1
	Si (N1>=1) Y (N1<=10) Entonces
		Leer N2
		Si (N2>=1) Y (N2>=10) Entonces
			
			Si (N1>=4) Y (N2>=4) Entonces
				Escribir "El alumno esta aprobado"
				SiNo
					Escribir "El alumno esta desaprobado"
					
			FinSi
		SiNo
			Escribir "Valor incorrecto, no respeta la escala de notas"
		FinSi
	SiNo
		Escribir "Valor incorrecto, no respeta la escala de notas"
		
	FinSi
	
FinProceso
