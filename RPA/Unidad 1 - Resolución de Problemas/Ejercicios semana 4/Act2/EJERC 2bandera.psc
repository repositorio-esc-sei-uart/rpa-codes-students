Algoritmo bandera 
	Definir nota1 , nota2,nota3 Como Entero
	Definir promedio como Real
	


	Escribir " Ingrese las notas "
	Leer  nota1 , nota2, nota3
	promedio<- (nota1 + nota2 + nota3) / 3
	
	
	Si promedio >= 7 Entonces 
		Escribir " Usted promociona"
	
	Sino
		Si promedio >= 4 Entonces
			Escribir " Usted regulariza, debe rendir examen final "
		Sino 
			Escribir " Usted queda libre "
		
	FinSi

		
	FinSi
	
FinAlgoritmo
