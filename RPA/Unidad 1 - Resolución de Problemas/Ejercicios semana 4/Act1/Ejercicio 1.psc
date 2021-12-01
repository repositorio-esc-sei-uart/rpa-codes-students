Algoritmo Calculadora
	
	Definir ValorA Como Real
	Definir ValorB Como Real
	Definir ValorC Como Real
	Definir Operacion Como Entero
	
	Escribir "Hola, mucho gusto, ahora voy a hacer un calculo basico"
	Escribir "------------------------------------------------------------------------"
	
	Escribir "Por favor, eliga un calculo"
	Escribir"(Escriba el numero corresondiente para cada operacion de 1 a 5)"
	Escribir "------------------------------------------------------------------------"
	
	Escribir "[1] Suma"
	Escribir "[2] Resta"
	Escribir "[3] Multiplicacion"
	Escribir "[4] Division"
	Escribir "[5] Modulo"
	
	Leer Operacion
	
	Segun Operacion Hacer
		1:
			Escribir "Eligio suma"
			Escribir "Escriba el primer numero por favor"
			Leer ValorA
			Escribir "Escriba el segundo numero por favor"
			Leer ValorB
			ValorC <- ValorA + ValorB
			Escribir ValorA " + " ValorB " = " ValorC
		2:
			Escribir "Eligio resta"
			Escribir "Escriba el primer numero por favor"
			Leer ValorA
			Escribir "Escriba el segundo numero por favor"
			Leer ValorB
			ValorC <- ValorA - ValorB
			Escribir ValorA " - " ValorB " = " ValorC
		3:
			Escribir "Eligio multiplicacion"
			Escribir "Escriba el primer numero por favor"
			Leer ValorA
			Escribir "Escriba el segundo numero por favor"
			Leer ValorB
			ValorC <- ValorA * ValorB
			Escribir ValorA " * " ValorB " = " ValorC
		4:
			Escribir "Eligio division"
			Escribir "Escriba el primer numero por favor"
			Leer ValorA
			Escribir "Escriba el segundo numero por favor"
			Leer ValorB
			Si ValorA == 0 o ValorB == 0 Entonces
				Escribir "No es posible dividir por 0"
			SiNo
				ValorC <- ValorA / ValorB
				Escribir ValorA " / " ValorB " = " ValorC
			Fin Si
		5:
			Escribir "Eligio modulo"
			Escribir "Escriba el primer numero por favor"
			Leer ValorA
			Escribir "Escriba el segundo numero por favor"
			Leer ValorB
			Si ValorA == 0 o ValorB == 0 Entonces
				Escribir "No es posible conseguir un modulo de 0"
			SiNo
				ValorC <- ValorA MOD ValorB
				Escribir ValorA " MOD " ValorB " = " ValorC
			Fin Si
		De Otro Modo:
			Escribir "No eligio una operacion valida"
	Fin Segun
	
FinAlgoritmo
