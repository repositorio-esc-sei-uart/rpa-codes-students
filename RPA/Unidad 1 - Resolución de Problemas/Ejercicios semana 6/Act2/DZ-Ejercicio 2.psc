Proceso sin_titulo
	Definir N3, Base, Expo, N, Fac, Pot, i Como Entero
	
	Pot<-1
	
	Fac<-1
	
	Repetir
		Escribir "Menu"
		
		Escribir "(1) Potencia"
		
		Escribir "(2) Factotial"
		
		Escribir "(3) Salir"
		
		Escribir "Seleccione tarea a ralizar"
		
		Leer N3
		
		Segun N3 Hacer
			
			1: Escribir "Ingrese base"
				
				Leer Base
				
				Escribir "Ingrese exponente"
				
				Leer Expo
				
				Pot<-Base^Expo
				
				Escribir "Resultado: " Pot
				
			2: 
				
				Escribir "Ingrese numero"
				Leer N
				Fac<-1
				
				i<-1
				Mientras i<=N Hacer
					
					Fac<-Fac*i
					
					i<-i+1
				FinMientras
				Escribir "Resultado: " Fac
			De Otro Modo:
				Escribir "Opción invalida"
		FinSegun
	Hasta Que N3==3
FinProceso
