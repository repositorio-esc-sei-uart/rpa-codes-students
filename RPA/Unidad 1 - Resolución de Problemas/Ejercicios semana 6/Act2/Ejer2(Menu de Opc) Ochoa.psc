Algoritmo menu
	definir num, pot,res,fact,i como entero
 repetir
	 Limpiar Pantalla
	 Escribir 'Men� de opciones que calcula'
	 Escribir 'potencia y factorial de un n�mero.'
	 Escribir ''
	 Escribir '1- Calcular la potencia de un n�mero'
	 Escribir '2- Calcular el factorial de un n�mero'
	 Escribir '3- Salir'
	 Escribir ''
	 Escribir 'Ingrese la opcion que desee'
	 leer opcion
 Hasta Que (opcion>0 y opcion<4)
 Segun opcion hacer
	 1: 
		 Escribir ''
		 Escribir 'Ingresa un n�mero base'
		 leer num
		 Escribir ''
		 Escribir 'Ingresa el n�mero exponente a elevar'
		 leer pot
		 res<-num^pot
		 Escribir ''
		 Escribir 'Resultado:'
		 Escribir num ' elevado a la potencia de ',pot,' es: ',res
	 2:
		 Escribir ''
		 Escribir 'Ingresa un n�mero'
		 leer num
		 si num<0 Entonces
			 Escribir ''
			 Escribir 'El n�mero no se puede calcular.'
		 SiNo
			 i<-1
			 fact<-1
			 Mientras i<=num Hacer
				 fact<-fact*i
				 i<-i+1
			 FinMientras
			 Escribir ''
			 Escribir 'Resultado:'
			 
			 Escribir 'El factorial del n�mero ',num,' = ',fact
		 FinSi
 FinSegun
FinAlgoritmo
