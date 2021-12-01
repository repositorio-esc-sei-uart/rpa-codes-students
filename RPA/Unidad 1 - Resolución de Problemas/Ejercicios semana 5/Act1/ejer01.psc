Algoritmo Cuenta_de_pares_e_impares
	
// Variables.	
Definir i, n, num, pares, impares, sumapares, sumaimpares Como Entero	

Escribir " ¿Cuántos números desea ingresar? "	
Leer n

pares<-0
impares<-0
sumaimpares<-0
sumapares<-0

// Proceso.
si n>0
	Escribir " Bien, ahora averiguaremos cuántos son pares y cuántos impares."
	Escribir " Luego, haremos la suma de cada uno. "

  Para i<-1 Hasta n Con Paso 1 Hacer
	Escribir "Ingresar el °" i " número."
	Leer num
	si (num MOD 2)==0
		pares<-pares+1
		sumapares<-sumapares+num
	SiNo
		impares<-impares+1
		sumaimpares<-sumaimpares+num
	FinSi

Fin Para
Escribir " Los pares ingresados son:" pares " y su suma es el total de:" sumapares
Escribir " Los impares ingresados son:" impares " y su suma es el total de:" sumaimpares
SiNo Escribir " El valor ingresado es inválido. "
FinSi


	
FinAlgoritmo
