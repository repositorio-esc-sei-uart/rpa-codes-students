Algoritmo vocales_digitos_etc
	definir c Como Caracter
	definir i como entero
	para i <- 1 hasta 15 con paso 1 hacer 
		leer c
		segun c hacer 
			'a','c','e','o','i','u':
				escribir 'vocal'
			'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','x','x','y','z':
				escribir 'consonante'
			'0','1','2','3','4','5','6','7','8','9':
				Escribir 'digito'
			'+','-','*','/':	
				Escribir  'operador matermatico'
		FinSegun
	FinPara
FinAlgoritmo
