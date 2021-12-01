Proceso sin_titulo
	//Se requiere diseñar una calculadora donde el usuario seleccione el operador
	//matemático que va a utilizar (suma, resta, multiplicación, división y módulo)
	//para operar con dos valores (A y B) ingresados por pantalla. Muestre el
	//cálculo de la operación solicitada. Nota: Controle que la operación de
	//división evite el error de la división por cero.
	Escribir "Bienvenido, por favor ingrese el operando que desee utilizar"
	Escribir "(+) Suma"
	Escribir "(-) Resta"
	Escribir "(*) Multiplicacion"
	Escribir "(/) Division"
	Definir operador Como caracter
	Leer operador
	Segun operador hacer
		"+": 
			Escribir "Ingrese valores a sumar"
			Leer A
			Leer B
		"-":
			Escribir "Ingrese valores a restar"
			Leer A
			Leer B
		"*":
			Escribir "Ingrese valores a multiplicar"
			Leer A
			Leer B
		"/":
			Escribir "Ingrese valores a dividir"
			Leer A
			Leer B
		De Otro Modo:
			Escribir "Operador incorrecto"
	FinSegun
	Segun operador hacer
		"+":
			Escribir "Usted seleciiono el operando SUMA"
			Sum<-A+B
			Escribir A "+" B "=" Suma
			Escribir "El resultado de la suma es:" Suma
		"-":
			Escribir "Usted seleciiono el operando RESTA"
			Resta<-A-B
			Escribir A "-" B "=" Resta
			Escribir "El resultado de la resta es:" Resta
		"*":
			Escribir "Usted selecciono el operando MULTIPLICACION"
			Mult<-A*B
			Escribir A "*" B "=" Mult
			Escribir "El resultado de la multiplicacion es:" Mult
		"/":
			Si B==0 Entonces
				Escribir "No se puede dividir por 0"
			SiNo
				Escribir "Usted selecciono el operando DIVISION"
				Div<-A/B
				Escribir A "/" B "=" Div
				Escribir "El resultado de la division es:" Div
			FinSi
		De Otro Modo:
			Escribir "Hasta luego"
	FinSegun
	
FinProceso
