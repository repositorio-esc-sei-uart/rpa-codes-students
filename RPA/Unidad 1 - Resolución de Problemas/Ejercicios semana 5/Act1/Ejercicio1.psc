//Alumno: Pablo Laime
Algoritmo Par_o_impar
	//Defino variables
	Definir n, num, contpar, contimpar, i, sumpar, sumimpar Como Entero
	contimpar <- 0   //Inicializo los contadores en 0
	contpar <- 0
	
	Escribir "Ingrese la cantidad de n�meros a contar"
	//Leo la entrada de datos
	Leer n
	
	//Uso la  Esturctura Para
	Para i <- 1 Hasta n Con Paso 1 Hacer
		Escribir "Ingrese el " i, "� N�mero"
		Leer num
		Si (num mod 2) == 0 Entonces
			contpar <- contpar + 1
			sumpar<-sumpar+num
			
		SiNo
			contimpar <- contimpar + 1
			sumimpar <- sumimpar + num
		Fin Si
	Fin Para
	
	//Escribo los resultados
	Escribir "N�meros impares ingresados " contimpar
	Escribir "N�meros pares ingresados " contpar
	Escribir "La suma de los n�meros impares ingresados es igual a: " sumimpar
	Escribir "La suma de los n�meros pares ingresados es: " sumpar
	
FinAlgoritmo
