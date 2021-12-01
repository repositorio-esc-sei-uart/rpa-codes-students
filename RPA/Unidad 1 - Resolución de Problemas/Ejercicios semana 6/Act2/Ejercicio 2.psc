//Alumno: Pablo Laime
Algoritmo Factorial_y_Potencia
	//Defino las variables
	Definir num, f, expo, op, Factorial, Potencia Como Entero
	
	Repetir
		Escribir "MENU DE OPCIONES"
		Escribir "Seleccione la opcion que desea realizar: Potencia (1) Factorial (2) Salir (3)"
		Leer op //Leo la opcion 
		
		Segun op Hacer
			1:
				Escribir "Usted selecciono la opción de potencia"
				Escribir "Ingrese un número"
				Leer num
				Escribir "Ingrese el exponente"
				Leer expo
				Potencia <- num ^ expo
				Escribir "El resultado es: " Potencia
			2:
				Escribir "Usted ingreso la opcion Factorial"
				Escribir "Ingrese un número positivo"
				Leer num
				
				Si num >= 0 Entonces
					f <- 1
					Factorial <- 1 //Inicializo las variables em uno 
					Mientras f <= num Hacer
						Factorial<- Factorial * f
						f <- f + 1
					Fin Mientras
					Escribir "El factorial de " num " es: " Factorial
				SiNo
					Escribir "No se puede realizar el factorial con numeros negativos"
				Fin Si
			3:
				Escribir "Fin de la sesion"
				
			De Otro Modo:
				Escribir "Usted selecciono una opcion invalida"
		Fin Segun
	Hasta Que op==3
	
FinAlgoritmo
