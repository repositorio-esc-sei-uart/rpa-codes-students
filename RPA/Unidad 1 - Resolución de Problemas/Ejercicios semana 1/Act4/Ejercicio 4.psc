Algoritmo Precio_Promedio
	
	Definir PrecioA Como Real
	Definir PrecioB Como Real
	Definir PrecioC Como Real
	Definir PrecioABC Como Real
	Definir Promedio Como Real
	
	Escribir "Hola, Mucho gusto"
	Escribir "Porfavor, escriba un precio (ej:3506.50)"
	Leer PrecioA
	Escribir "Porfavor, escriba un segundo precio (ej:3499.00)"
	Leer PrecioB
	Escribir "Porfavor, escriba un ultimo precio (ej:3501.45)"
	Leer PrecioC
	Escribir "Este seria el promedio de los 3 precios"
	
	PrecioABC <- PrecioA + PrecioB + PrecioC
	Promedio <- PrecioABC / 3
	
	Escribir Promedio
	
FinAlgoritmo
