Algoritmo calculadora
	Definir A, B como real
	Definir opc, opc1, opc2, opc3, opc4, opc5, opc6 como real
	
	Escribir "CALCULADORA"
	Escribir "Ingrese primer valor: "
	Leer A
	Escribir "Ingrese segundo valor: "
	Leer B
	
	num<-1
	Mientras num=1 hacer
	Escribir "Seleccione el operador matem�tico que va a utilizar: " 
	Escribir "1. SUMA "
	Escribir "2. RESTA "
	Escribir "3. MULTIPLICACI�N "
	Escribir "4. DIVISI�N "
	Escribir "5. M�DULO "
	Escribir "6. SALIR"
	Leer opc
	
	Segun opc hacer
	
		1:
			Escribir "SUMA"
			Escribir "Reslutado:"
			Escribir A + B
		2:
			Escribir "RESTA"
			Escribir "Reslutado:"
			Escribir A - B
		3:
			Escribir "MULTIPLICACI�N"
			Escribir "Reslutado:"
			Escribir A * B
		4:
			Escribir "DIVISI�N"
			Escribir "Reslutado:"
			Escribir A + B
		5:
			Escribir "M�DULO"
			Escribir "Reslutado:"
			Escribir A % B
		6:
			Escribir "SALIR"
				num<-2
			de otro modo:
				Escribir "ingrese una opcion v�lida"
		FinSegun
	FinMientras
FinAlgoritmo
