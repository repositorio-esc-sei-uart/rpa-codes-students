Proceso sin_titulo
	Leer Hs
	Leer Min
	Leer Seg
	Si (Hs>=1) Y (Hs<=24) Entonces
		
		Si (Min>=0) Y (Min<=60) Entonces
			
			Si (Seg>=0) Y (Seg<=60) Entonces
				Escribir "Hora ingresada:" Hs,":",Min,":",Seg, " - Verificación:Valida"
			SiNo
				Escribir "Hora ingresada:" Hs,":",Min,":",Seg, " - Verificación:Invalida"
				
			FinSi
		SiNo
			Escribir "Hora ingresada:" Hs,":",Min,":",Seg, " - Verificación:Invalida"
		FinSi
	SiNo
		Escribir "Hora ingresada:" Hs,":",Min,":",Seg, " - Verificación:Invalida"
	FinSi
FinProceso
