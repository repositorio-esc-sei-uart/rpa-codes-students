Algoritmo Calculadora
	
     // Variables
	Definir Modulo Como Entera
	Definir Dividir Como Numerica
	Definir Multiplicar Como Numerica
	Definir Resta Como Numerica
	Definir Suma Como Numerica
	Definir op Como Caracter
	Definir B Como Entera
	Definir A Como Entera
	
	// Entrada de datos
	Escribir " Hola, por favor ingrese dos número enteros"
	Leer A
	Leer B
	Escribir " Ahora dígame que operación desea ejecutar."
	Escribir " (+) Para Sumar. "
	Escribir " (-) Para Restar. "
	Escribir " (*) Para Multiplicar. "
	Escribir  " (/) Para Dividir. El divisor debe ser distinto a cero. "
	Escribir " (MOD) Para sacar el resto de la división. "
	Leer op
	
	
     // Operación
	Si op= '+' Entonces
		Suma<-A+B
		Escribir " El resultado es: " Suma
	SiNo
		Si op='-' Entonces
			Resta<-A-B
			Escribir " El resultado es: " Resta
		SiNo
			Si op='*' Entonces
				Multiplicar<-A*B
				Escribir " El resultado es: " Multiplicar
			SiNo
				
				
				Si op='/' Y B<>0 Entonces
					Dividir<-A/B
					Escribir " El resultado es: " Dividir
				SiNo
					Si op='MOD' Entonces
						Modulo<-A MOD B
						Escribir " El resultado es: " Modulo
					FinSi
					
				FinSi
			FinSi
		Fin Si
	Fin Si
	
	
FinAlgoritmo
