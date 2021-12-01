/* (1649) RESOLUCION DE ROBLEMAS  Y ALGORTMOS 
CLASE : 08
TEMA: Sentencia  de seleccion if -else
DESCRIPCION: Numero par e impar 
AUTOR : Benicio Anahi
AÑO: 2021 */





#include<stdio.h>

int main()
{ 
	int n;
	printf("INGRESE UN NUMERO");
	scanf("%i",&n);
	
	
	if (n%2==0){
		printf("EL NUMERO INGRESADO ES PAR ", n);
	
	
	 if (n >0 )  {
	 	printf(" POSITIVO ");
	 }
	  else{
	  	printf("  NEGATIVO");
	  }
	  
	
}
	else {
	
		printf ( "EL NUMERO INGRESADO ES IMPAR ");
	}
	 if (n<0){
	 	printf( "NEGATIVO");
	 	 }
	 else {
	 	printf("positivo ");
	 }
	
	
	
}


	
	

