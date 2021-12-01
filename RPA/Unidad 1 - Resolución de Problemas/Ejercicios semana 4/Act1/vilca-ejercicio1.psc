Algoritmo calculadora
	Definir num1,num2,num3 Como Entero
	Definir resultado como real
	
	Escribir "Ingrese número 1"
	Leer num1
	Escribir "Ingrese número 2"
	Leer num2
	
	Escribir "Ingrese una opcion"
	Escribir "1. Suma"
	Escribir "2. Resta"
	Escribir "3. Multiplicacion"
	Escribir "4. Division"
	Escribir "5. Modulo"
	Leer num3
	
	Segun num3 Hacer
		1:
			resultado = num1+num2
			Escribir num1 "+" num2 "=",resultado
		2:
			resultado = num1-num2
			Escribir num1 "+" num2 "=",resultado
		3:
			resultado = num1*num2
			Escribir num1 "*" num2 "=",resultado
		4:
			
			Si num2=0 Entonces
				Escribir "Error. No se puede dividir por cero"
			SiNo
				resultado = num1/num2
				Escribir num1 "/" num2 "=",resultado
			Fin Si
			
		5:
			
			Si num2=0 Entonces
				Escribir "El segundo numero para obtener el modulo no puede ser cero"
			SiNo
				resultado = num1 mod num2
				Escribir "El modulo de " num1 "/" num2 "=",resultado
			Fin Si
		De Otro Modo:
			Escribir "Opcion Invalida"
	Fin Segun
FinAlgoritmo
