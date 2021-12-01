Proceso Calculadora
	
	//Defino las variables a emplear
	Definir Num1, Num2 Como Real
	Definir Sum, Res, Mul, Div, Mód Como Real
	Definir Operación Como Entero
	
	//Solicito al usuario la operación a realizar
	Escribir "Hola, espero estes muy bien hoy."
	Escribir ""
	Escribir "A continuación, indique la opción correspondiente a la operación que desea realizar."
	Escribir ""
	Escribir "Considere:"
	Escribir "(1) Suma - (2) Resta - (3) Multiplicación - (4) División - (5) Módulo"
	Leer Operación
	
	//Indicada la Operación a realizar, se ejecutan las mismas.
	Segun Operación Hacer
		1:
			//Solicito al usuario los numeros para desarrollar la Operación indicada
			Escribir "Por favor, ingrese el primer número"
			Leer Num1
			Escribir "Por favor, ingrese el segundo número"
			Leer Num2
			
			Sum <- Num1 + Num2
			Escribir "El resultado de la SUMA entre " Num1 " y " Num2 " es: " Sum
			
		2:
			//Solicito al usuario los numeros para desarrollar la Operación indicada
			Escribir "Por favor, ingrese el primer número"
			Leer Num1
			Escribir "Por favor, ingrese el segundo número"
			Leer Num2
			
			Res <- Num1 - Num2
			Escribir "El resultado de la RESTA entre " Num1 " y " Num2 " es: " Res
			
		3:
			//Solicito al usuario los numeros para desarrollar la Operación indicada
			Escribir "Por favor, ingrese el primer número"
			Leer Num1
			Escribir "Por favor, ingrese el segundo número"
			Leer Num2
			
			Mul <- Num1 * Num2
			Escribir "El resultado de la MULTIPLICACIÓN entre " Num1 " y " Num2 " es: " Mul
			
		4:
			//Solicito al usuario los numeros para desarrollar la Operación indicada
			Escribir "Por favor, ingrese el Dividendo."
			Leer Num1
			Escribir "Por favor, ingrese el Divisor."
			Leer Num2
			
			//Considerar divisor = 0 "Inválido"
			Si Num2 <> 0 Entonces
				Div <- Num1 / Num2
				Escribir "El resultado de la DIVISIÓN entre " Num1 " y " Num2 " es: " Div
			SiNo
				Escribir "El DIVISOR ingresado es inválido"
			Fin Si
			
		5:
			//Solicito al usuario los numeros para desarrollar la Operación indicada
			Escribir "Por favor, ingrese el primer número"
			Leer Num1
			Escribir "Por favor, ingrese el segundo número"
			Leer Num2
			
			Mód <- Num1 MOD Num2
			Escribir "El MÓDULO de " Num1 " y " Num2  " es: " Mód
			
		De Otro Modo:
			
			//Considerar el ingreso de una Opción incorrecta
			Escribir "La Opcion ingresada es INVALIDA, por favor reintente"
			
	Fin Segun
	
FinProceso
