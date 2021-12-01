Algoritmo sin_titulo
definir n,i,num,multiplo3,multiplo5 Como Entero
escribir 'ingrese la cantidad de numeros a ingresa'
leer n
si n > 0 Entonces
	multiplo3=0
	multiplo5=0
	para i=1 hasta n Hacer
		Escribir i, '°numero:'
		leer num
		si (num mod 3 ==0) Entonces
			multiplo3 <- multiplo3+num
			Escribir 'es multiplo de tres'
		SiNo 
			Escribir ' no es multiplo de tres'
		FinSi
		si (num mod 5 ==0) Entonces
			multiplo5 <- multiplo5+num
			Escribir 'es multiplo de cinco'
		SiNo
			Escribir 'no es multiplo de cinco'
		FinSi
	FinPara
	Escribir 'la suma de los multiplos de tres son: ',multiplo3
	Escribir 'la suma de los multiplos de cinco son: ',multiplo5
SiNo
	Escribir 'cantidad no valida'
FinSi
FinAlgoritmo
