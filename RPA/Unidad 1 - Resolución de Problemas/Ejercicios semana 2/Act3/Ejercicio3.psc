//Alumno: Pablo Laime
Algoritmo Intercambiar_valores_si_uno_es_mayor_a_otro
	
	//Defino variables
	Definir A como Entera
	Definir B como Entera
	Definir aux como Entera
	
	//Leo la entrada de datos
	Escribir "Hola, ingrese dos n�meros, en caso de que el A sea mayor a B, estos seran intercambiados "
	Escribir "Ingrese un n�mero entero"
	Leer A
	Escribir "Por favor, ingrese otro n�mero entero"
	Leer B
	
	//Completo mi estructura de seleccion
	Si A > B Entonces
		aux <- A
		A <- B
		B <-aux
		Escribir " Los valores intercambiados quedar�an as�"
		Escribir "A= " A
		Escribir "B= " B
	SiNo
		Escribir "A= " a
		Escribir "B= " b
		Escribir a " no es mayor a " b " por lo tanto no se realiza el intercambio"
	Fin Si
	
	Escribir "Fin de la sesi�n"
	
FinAlgoritmo
