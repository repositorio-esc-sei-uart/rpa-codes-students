//Alumno: Pablo Laime
Algoritmo Intercambio_de_tres_variables
	
	//Defino Variables
	Definir A como Entera
	Definir B como Entera
	Definir C como Entera
	Definir aux1 como Entera
	
	// Asigno los valores a las variables
	A <- 2
	B <- 10
	C <- 40
	
	// Escribo un mensaje para informar sobre lo que se va a realizar y enseño los valores
	Escribir "Hola, sabiendo que los valores de las variables son"
	Escribir "A = " A
	Escribir "B = " B
	Escribir "C = " C
	Escribir "Vamos a hacer los siguientes intercambios"
	Escribir "B intercambia con A"
	Escribir "C intercambia con B"
	Escribir "A intercambia con C"
	
	// Realizo el intercambio de los valores
	aux1 <- a
	a <- b
	b <- c
	c <- aux1
	
	// Escribo el resultado de los intercambios realizados.
	Escribir "Entonces con los valores ya intercambiados, nos quedaría así"
	Escribir "El valor de A= ", a
	Escribir "El valor de B= ", b
	Escribir "El valor de C= ", c
	Escribir "Eso es todo, hasta luego"
FinAlgoritmo
