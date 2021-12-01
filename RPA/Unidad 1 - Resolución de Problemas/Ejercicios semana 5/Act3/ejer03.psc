Algoritmo Multiplos_de_5_y_3
	
	// Variables.
	Definir i, n, contar3, contar5, mult3, mult5 Como Entero
	
	
	contar3<-0
	contar5<-0
	mult3<-0
	mult5<-0
	Escribir " Bienvenido, ingrese 10 números enteros por favor."
	Escribir " Luego le diré cuántos son múltiplos de 3 y 5, y la suma de los mismos. "
	Para i<- 1 Hasta 10 Con Paso 1 Hacer
		Leer n
		si (n MOD 3) ==0
			contar3<-contar3+1
			mult3<-mult3+n
		si (n MOD 5) ==0
			contar5<-contar5+1
			mult5<-mult5+n
		fin si
		FinSi
	Fin Para
	Escribir " La cantidad de múltiplos de 3 son: " contar3 " y su suma es: " mult3
	Escribir " La cantidad de múltiplos de 5 son: " contar5 " y su suma es: " mult5
FinAlgoritmo
