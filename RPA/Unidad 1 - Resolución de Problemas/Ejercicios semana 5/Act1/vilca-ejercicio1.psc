Algoritmo numeros_pares_impares
	Definir n, i, num, contpar, contimpar Como Entero
	Escribir "Cantidad de n�meros a ingresar: "
	Leer n
	Si n>0 Entonces
		contpar<-0
		contimpar<-0
		Para i<-1 Hasta n Con Paso 1 Hacer
			Escribir i, "� n�mero: "
			Leer num
			Si (num mod 2) == 0 Entonces
				contpar<-contpar + 1
			SiNo
				contimpar<-contimpar + 1
			Fin Si
		Fin Para
		Escribir "Cantidad de n�meros pares: ", contpar
		Escribir "Cantidad de n�meros impares: ", contimpar
	SiNo
		Escribir "Invalido"
	Fin Si
	
FinAlgoritmo
