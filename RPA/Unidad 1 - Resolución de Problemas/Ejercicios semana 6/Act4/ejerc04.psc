Algoritmo adivinar_el_numero
	
	Definir num, numazar, intento, oportunidad Como Entera
	
	
	
	numazar<-0
	numazar<- 1 + azar (60 - 1 +1)
	intento<-1
	oportunidad<-10
	
	Escribir " Hola, �vamos a jugar! Tienes 10 oportunidades"	
	Escribir " para adivinar el n�mero en el rango [1-60]. "
	Escribir " Ingrese el primer intento."
	Leer num
	

	Mientras num<>numazar Y intento<10 Hacer
		si num<=0 O num > 60
			Escribir " El n�mero ingresado es inv�lido."
		FinSi
		si num<numazar
			Escribir " El n�mero es m�s alto. "
		SiNo
			Escribir " El n�mero es m�s bajo. "
		FinSi
		oportunidad<-oportunidad-1
		Escribir " Le quedan " oportunidad " intentos. "
		Leer num
		intento<-intento+1
		
	Fin Mientras
	
	si num=numazar Entonces
		Escribir " �Felicidades! Has conseguido adivinar el n�mero en " intento " intentos. "
	SiNo
		Escribir " Has perdido el juego, el n�mero era: " numazar
	FinSi

	
	
	
FinAlgoritmo
