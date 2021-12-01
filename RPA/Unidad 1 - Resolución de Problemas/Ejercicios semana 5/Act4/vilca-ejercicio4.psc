Algoritmo ingreso_caracteres
	Definir letra Como Caracter
	Definir i,contb, contc, contd, conte,contf Como Entero
	contb<-0
	contc<-0
	contd<-0
	conte<-0
	contf<-0
	Para i<-1 Hasta 15 Con Paso 1 Hacer
		Escribir "Ingrese caracter ",i
	    Leer letra
		Segun letra Hacer
			'a','e','i','o','u':
				contb<-contb+1
			'b','c','d','f','g','h','j','k','l','m','ñ','p','q','r','s','t','v','w','x','y','z':
				contc<-contc+1
			'0','1','2','3','4','5','6','7','8','9':
				contd<-contd+1
			'+','-','*','/':
				conte<-conte+1
			'°','|','!','#','$','%','&','(',')','=','¿','?','-','[',']','[',']','^',';',':','.','<','>':
				contf<-contf+1
			De Otro Modo:
				Escribir "Usted ingresó un caracter no valido"
		Fin Segun
	Fin Para
	Escribir "Cantidad de vocales: ",contb
	Escribir "Cantidad de consonantes: ",contc
	Escribir "Cantidad de números: ", contd
	Escribir "Cantidad de operadores matematicos: ", conte
	Escribir "Cantidad de simbolos: ", contf
FinAlgoritmo
