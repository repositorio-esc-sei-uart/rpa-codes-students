//Alumno: Pablo Laime
Algoritmo Numeros_positivos_negativos_y_ceros
	//Defino las variables
	Definir num, i, suma_positivos, cont_negativos, ceros Como Entero
	
	Escribir "Ingrese 20 n�meros enteros y se mostrar� la suma de los positivos, la cantidad de numeros negativos y ceros"
	
	//Uso la estructura para, con una estructura si-entonces
	Para i<-1 Hasta 20 Con Paso 1 Hacer
		
		Escribir "Ingrese el " i "� n�mero"
		Leer num
		Si num > 0 Entonces
			suma_positivos <- suma_positivos + num
		SiNo
			Si num < 0 Entonces
				cont_negativos <- cont_negativos + 1
			SiNo
				Si num == 0 Entonces
					ceros <- ceros + 1
				SiNo
					Escribir "N�mero invalido"
				Fin Si
			Fin Si
		Fin Si
	Fin Para
	
	//Escribo los valores finales de las variables
	Escribir "El total de la suma de los n�meros positivos ingresados es: " suma_positivos
	Escribir "El total de n�meros negativos ingresados es: " cont_negativos
	Escribir "Total de ceros ingresados:" ceros
	
FinAlgoritmo


