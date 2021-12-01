Algoritmo menu
	definir num, pot,res,fact,i como entero
 repetir
	 Limpiar Pantalla
	 Escribir 'Menù de opciones que calcula'
	 Escribir 'potencia y factorial de un nùmero.'
	 Escribir ''
	 Escribir '1- Calcular la potencia de un número'
	 Escribir '2- Calcular el factorial de un número'
	 Escribir '3- Salir'
	 Escribir ''
	 Escribir 'Ingrese la opcion que desee'
	 leer opcion
 Hasta Que (opcion>0 y opcion<4)
 Segun opcion hacer
	 1: 
		 Escribir ''
		 Escribir 'Ingresa un número base'
		 leer num
		 Escribir ''
		 Escribir 'Ingresa el número exponente a elevar'
		 leer pot
		 res<-num^pot
		 Escribir ''
		 Escribir 'Resultado:'
		 Escribir num ' elevado a la potencia de ',pot,' es: ',res
	 2:
		 Escribir ''
		 Escribir 'Ingresa un nùmero'
		 leer num
		 si num<0 Entonces
			 Escribir ''
			 Escribir 'El nùmero no se puede calcular.'
		 SiNo
			 i<-1
			 fact<-1
			 Mientras i<=num Hacer
				 fact<-fact*i
				 i<-i+1
			 FinMientras
			 Escribir ''
			 Escribir 'Resultado:'
			 
			 Escribir 'El factorial del nùmero ',num,' = ',fact
		 FinSi
 FinSegun
FinAlgoritmo
