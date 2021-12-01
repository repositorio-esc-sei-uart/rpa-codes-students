Algoritmo Condicion_alumno

	// Entrada.
	Definir NotaB Como Entera
	Definir NotaA Como Entera
	Definir Promedio Como Real
	Escribir " Hola, vamos a ver si las notas del alumno alcanzan para aprobar."
	
	// Ingreso de notas del alumno.
	Escribir " Ingresar la primer nota por favor. Apretar Enter. "
	Leer NotaA
	Escribir " Ingresar la segunda nota por favor. Apretar Enter. "
	Leer NotaB
	Promedio <- (NotaA+NotaB) /2
	
	
	// Se dice si las notas y el promedio alcanzan para aprobar.
	Si NotaA > 4
		Escribir " La primera nota alcanza para aprobar."
	 
		Si NotaB >4
			Escribir " La segunda nota alcanza para aprobar."
			
		SiNo 
			Escribir " La segunda nota no alcanza para aprobar."
			
		Fin Si
	SiNo 
		Escribir " La primera nota no alcanza para aprobar."
		
	Fin Si
	
	
	Escribir "El promedio del alumno es: " Promedio
	
	
    
	
	
FinAlgoritmo
