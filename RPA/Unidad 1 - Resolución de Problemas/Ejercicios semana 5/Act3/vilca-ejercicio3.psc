Algoritmo multiplos_de_5_y_3
	Definir i, num, contc, contd Como Entero
	contc<-0
	contd<-0
	num<-0
	Para i<-1 Hasta 10 Con Paso 1 Hacer
		Escribir "Ingrese número ", i
		Leer num
		Si (num mod 5)==0 Entonces
			contc<-contc+1
		SiNo
			Si (num mod 3)== 0 Entonces
				contd<-contd+1
			Fin Si
		Fin Si
	Fin Para
	Escribir "Cantidad de multiplos de 5: ", contc
	Escribir "Cantidad de multiplos de 3: ", contd
FinAlgoritmo
