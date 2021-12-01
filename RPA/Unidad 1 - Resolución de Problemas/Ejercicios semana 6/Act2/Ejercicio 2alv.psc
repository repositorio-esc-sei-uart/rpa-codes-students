Algoritmo El_Menu
	//Defimiciones
	Definir Opc , Pot , Cont Como Entero
	Definir Num , NumAux Como Real
	//Iniciales
	Opc <- 0
	Cont <- 1
	//Entrada
	Escribir "Hola, mucho gusto, ahora abrire un menu con opciones"
	Escribir "Por favor, eliga una opcion"
	//Calculo
	Repetir
	Escribir "Opciones:"
	Escribir "[1] Calcular la potencia"
	Escribir "[2] Calcular el factorial"
	Escribir "[3] Salir"
	Leer Opc
	Segun Opc Hacer
		1:
			Escribir "Eligio calcular la potencia"
			Escribir "Por favor, escriba un numero"
			Leer Num
			Escribir "Ahora escriba su potencia"
			Leer Pot
			si Num > 0 y Pot >= 0
			Cont <- 0
			NumAux <- 1
			Mientras  Cont < Pot hacer
				Cont <- Cont + 1
				NumAux <- NumAux * Num
			FinMientras
			Escribir "La potencia de " Num " a la " Pot " es de " NumAux
			SiNo
			Escribir "Uno de los numeros dados es invalido"
			FinSi
		2:
			Escribir "Eligio calcular el factorial"
			Escribir "Por favor, escriba el numero a factorizar"
			Leer Num
			si Num > 0
			NumAux <- 1
			Para Cont <- 1 Hasta Num Con Paso 1 Hacer
				NumAux <- NumAux * Cont
			Fin Para
			Escribir "El resultado de la factorizacion de " Num " es de " NumAux
			SiNo
			Escribir "El numero elegido no es valido"
			FinSi
		3:
			Escribir "Eligio salir"
			Escribir "Cerrando..."
		De Otro Modo:
			Escribir "ERROR:Opcion invalida seleccionada"
			Escribir "Por favor eliga una opcion valida"
	Fin Segun
	Hasta Que Opc == 3 
	//Salida
	Escribir "Menu cerrado"
	//Fin
FinAlgoritmo
