Algoritmo sin_titulo
	definir n,i,num,negativos,positivos,neutro Como Entero
	escribir 'ingrese la cantidad de numeros a ingresa'
	leer n
	si n > 0 Entonces
		negativos=0
		positivos=0
		neutro=0
		para i=1 hasta n Hacer
			Escribir i, '°numero:'
			leer num
			si (num > 0) Entonces
				positivos <- positivos+num
				Escribir 'el numero ingresado es positivo'
			SiNo 
			
			FinSi
			si (num < 0) Entonces
				negativos <-negativos+1
				Escribir 'el numero ingresado es negativo'
			SiNo
				
			FinSi
			si (num = 0) Entonces
				Escribir 'el numero ingresado es neutro'
			SiNo
				
			FinSi
		FinPara
		Escribir 'la suma de los numeros positivos son: ',positivos
		Escribir 'la cantidad de negativos son: ',negativos
		Escribir  'usted ingreso :', neutro
	SiNo
		Escribir 'cantidad no valida'
	FinSi
FinAlgoritmo
