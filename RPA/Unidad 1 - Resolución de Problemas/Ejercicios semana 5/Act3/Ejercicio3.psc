//Alumno:Pablo Laime
Algoritmo Multiplos_de_3_y_5
	
	//Defino las variables
	Definir num, mult3, mult5, sum3, sum5, i Como Entero
	//Uso la estructura Para con otra estructura de Si-Entonces para saber si son o no multiplos
	Para i<-1 Hasta 10 Con Paso 1 Hacer
		Escribir "Ingrese 10 números enteros "
		Escribir "Ingrese el °" i " número"
		Leer num
		Si (num mod 3) == 0 Y num <> 0 Entonces
			mult3 <- mult3 + 1
			sum3 <- sum3 + num                             
		SiNo//Puse que el numero ingresado sea distinto a cero por que si ingreso 0 cuenta como multiplo de 3 y no de 5
			Si (num mod 5) == 0  Y num <> 0  Entonces
				mult5 <- mult5 + 1
				sum5 <- sum5 + num
			Fin Si
		Fin Si
	Fin Para
	
	//Escribo los valores finales de las variables
	Escribir "Cantidad de números multiplos de 3: " mult3 " Y la suma de ellos es: " sum3
	Escribir "Cantidad de números multiplos de 5: " mult5 " Y la suma de ellos es: " sum5
FinAlgoritmo
