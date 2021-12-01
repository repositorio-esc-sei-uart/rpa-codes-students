Algoritmo calculadora 
	
	Definir valorA, valorB, operador, resultado como Entero
	
	Escribir" Ingrese un valor "
	Leer valorA;
	Escribir " Ingrese  otro valor "
	Leer valorB;
	
	Escribir " Ingrese un operador"
	EScribir " 1. Suma"
	Escribir " 2. Multiplicacion"
	Escribir " 3. Resta "
	Escribir " 4. Division "
	Leer operador 
	
	Segun operador Hacer
		1:
			resultado= valorA + valorB;
			Escribir resultado
		2:
			resultado= valorA * valorB;
			Escribir resultado
		3:
			resultado = valorA-valorB;
			Escribir resultado
		4:
			resultado= valorA/valorB
			Escribir resultado
			Si valorA <> 0 Entonces 
				Leer resultado 
			sino 
				Escribir" valor incorrecto"
			FinSi
			
			
			
	FinSegun

	
FinAlgoritmo
