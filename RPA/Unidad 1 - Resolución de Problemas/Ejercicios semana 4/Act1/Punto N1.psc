Algoritmo calculadora
	//definir variable
	definir n1,n2,opc,res,div Como Entero
	
	//pedir datos de entrada
	escribir 'ingrese un numero'
	leer n1;
	escribir 'ingres un segundo numero'
	leer n2;
	
	//opciones
	escribir 'ingrese un opcion'
	escribir '1.sumar';
	Escribir '2.restar';
	Escribir '3.multiplicar';
	Escribir '4 dividir';
	Leer opc;
	
	//Proceso 
	Segun opc Hacer
		1:
			res= n1 + n2;
			Escribir 'la suma es', res;
		2:
			res= n1 - n2;
			Escribir 'la resta es', res;
		3:
			res= n1 * n2;
			Escribir 'la multiplicacion es', res;
		4:	
			res= n1 / n2;
			Escribir 'la division es', res;
		De Otro Modo:
			Escribir ' opcion incorrecta';
	Fin Segun
	
	definir esPar Como Logico //v o f
	definir num Como Entero
	esPar = Falso
	
	Escribir 'ingrese un numero par o impar'
	
	Leer num
	
	si (num mod 2)==0
		esPar=Verdadero
	FinSi
	
	si espar == verdadero Entonces
		escribir ' el numero es par'
		sino
		Escribir 'el numero es impar'
		
	FinSi
	
FinAlgoritmo
