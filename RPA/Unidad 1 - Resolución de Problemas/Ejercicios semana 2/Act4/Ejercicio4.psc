// Alumno: Pablo Laime
Algoritmo Division_de_dos_mumeros_segun_el_valor_de_b
	
	//Defino variables
	Definir a como Entera
	Definir b como Entera
	Definir Division como Numerica
	
	Escribir "Hola, a continuación se realizara una division en caso sea valida"
	Escribir "Ingrese un número entero"
	Leer a
	Escribir "Por favor, ingrese otro número entero"
	Leer b
	
	//Completo la estructura SI-SINO
	Si b <> 0 Entonces
		Division <- a / b
		Escribir "Entonces " a " / " b " Es igual a= " Division
	SiNo
		Escribir "Division Invalida"
	Fin Si
	Escribir "Fin de la sesion"
	
FinAlgoritmo
