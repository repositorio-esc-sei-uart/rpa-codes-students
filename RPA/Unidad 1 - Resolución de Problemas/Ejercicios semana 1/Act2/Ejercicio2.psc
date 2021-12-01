// Nombre: Pablo Laime

Algoritmo Operaciones_con_dos_numeros
	
	// Defino Variables
	Definir division Como Numerica
	Definir modulo Como Entero
	Definir suma Como Entero
	Definir resta Como Entero
	Definir multiplicacion Como Entero
	Definir b Como Entero
	Definir a Como Entero
	
	
	//Leeo los datos de entrada
	Escribir 'Ingresar un número entero'
	Leer a
	Escribir 'Ingresar otro número entero'
	Leer b
	
	// Calcular las operaciones
	multiplicacion <- a * b
	suma <- a + b
	resta <- a - b
	division <- a / b
	modulo <- a MOD b
	
	// Escribe la salida de datos
	Escribir "Los resultados de las operaciones entre " a " y " b " son "
	Escribir " En la multiplicacion " multiplicacion
	Escribir " En la suma ", suma
	Escribir " En la resta ", resta
	Escribir " En la division " division
	Escribir " En el modulo " modulo
	
FinAlgoritmo
