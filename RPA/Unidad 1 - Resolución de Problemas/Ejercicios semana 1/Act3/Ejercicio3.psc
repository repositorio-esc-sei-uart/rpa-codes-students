// Nombre: Pablo Laime

Algoritmo Convertor_de_medidas
	
	// Defino Variables
	Definir Metros Como Numerica
	Definir Centimetros Como Numerica
	Definir a Como Numerica
	
	// Leo la entrada de datos
	Escribir " Ingrese una medida en milimetros "
	Leer a
	
	// Calcular la conversion 
	Centimetros <- a / 10
	Metros <- a / 1000
	
	// Escribir los resultados
	Escribir a " milimetros son igual a " Centimetros " centimetros y a " Metros " metros "
	
FinAlgoritmo
