Proceso Calculadora
	
	//Defino las variables a emplear
	Definir Num1, Num2 Como Real
	Definir Sum, Res, Mul, Div, M�d Como Real
	Definir Operaci�n Como Entero
	
	//Solicito al usuario la operaci�n a realizar
	Escribir "Hola, espero estes muy bien hoy."
	Escribir ""
	Escribir "A continuaci�n, indique la opci�n correspondiente a la operaci�n que desea realizar."
	Escribir ""
	Escribir "Considere:"
	Escribir "(1) Suma - (2) Resta - (3) Multiplicaci�n - (4) Divisi�n - (5) M�dulo"
	Leer Operaci�n
	
	//Indicada la Operaci�n a realizar, se ejecutan las mismas.
	Segun Operaci�n Hacer
		1:
			//Solicito al usuario los numeros para desarrollar la Operaci�n indicada
			Escribir "Por favor, ingrese el primer n�mero"
			Leer Num1
			Escribir "Por favor, ingrese el segundo n�mero"
			Leer Num2
			
			Sum <- Num1 + Num2
			Escribir "El resultado de la SUMA entre " Num1 " y " Num2 " es: " Sum
			
		2:
			//Solicito al usuario los numeros para desarrollar la Operaci�n indicada
			Escribir "Por favor, ingrese el primer n�mero"
			Leer Num1
			Escribir "Por favor, ingrese el segundo n�mero"
			Leer Num2
			
			Res <- Num1 - Num2
			Escribir "El resultado de la RESTA entre " Num1 " y " Num2 " es: " Res
			
		3:
			//Solicito al usuario los numeros para desarrollar la Operaci�n indicada
			Escribir "Por favor, ingrese el primer n�mero"
			Leer Num1
			Escribir "Por favor, ingrese el segundo n�mero"
			Leer Num2
			
			Mul <- Num1 * Num2
			Escribir "El resultado de la MULTIPLICACI�N entre " Num1 " y " Num2 " es: " Mul
			
		4:
			//Solicito al usuario los numeros para desarrollar la Operaci�n indicada
			Escribir "Por favor, ingrese el Dividendo."
			Leer Num1
			Escribir "Por favor, ingrese el Divisor."
			Leer Num2
			
			//Considerar divisor = 0 "Inv�lido"
			Si Num2 <> 0 Entonces
				Div <- Num1 / Num2
				Escribir "El resultado de la DIVISI�N entre " Num1 " y " Num2 " es: " Div
			SiNo
				Escribir "El DIVISOR ingresado es inv�lido"
			Fin Si
			
		5:
			//Solicito al usuario los numeros para desarrollar la Operaci�n indicada
			Escribir "Por favor, ingrese el primer n�mero"
			Leer Num1
			Escribir "Por favor, ingrese el segundo n�mero"
			Leer Num2
			
			M�d <- Num1 MOD Num2
			Escribir "El M�DULO de " Num1 " y " Num2  " es: " M�d
			
		De Otro Modo:
			
			//Considerar el ingreso de una Opci�n incorrecta
			Escribir "La Opcion ingresada es INVALIDA, por favor reintente"
			
	Fin Segun
	
FinProceso
