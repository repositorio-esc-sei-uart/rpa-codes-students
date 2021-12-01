Algoritmo valores_positivos_negativos_ceros
	Definir num,i,contpos,contneg,contcero Como Entero
	contpos<-0
	contneg<-0
	contcero<-0
	Para i<-1 Hasta 20 Con Paso 1 Hacer
		
		Escribir "Ingrese numero ",i
		Leer num
		
		Si num > 0 Entonces
			contpos<-contpos+1
		SiNo
			Si num < 0 Entonces
				contneg<-contneg+1
			SiNo
				contcero<-contcero+1
			Fin Si
		Fin Si
	Fin Para
	Escribir "Cantidad de numeros positivos: ",contpos
	Escribir "Cantidad de numeros negativos: ",contneg
	Escribir "Cantidad de numeros cero: ",contcero
FinAlgoritmo
