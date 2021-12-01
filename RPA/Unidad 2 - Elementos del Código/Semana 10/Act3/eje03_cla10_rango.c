//Resolucion y Problemas de  Algoritmos.
// Clase : 10
// Tema : Sentencia interactivas for 
// Descripcion :  Numeros aleatorios entre un rango 
// Autor : Benicio Anahi 
// Año : 2021



#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main (){
	
	  
	int n , cont, p, t;
	
	srand (time (0));
	int  a = -50 , b= 50 ;
	

	
	printf ("INGRESE CINCO NUMEROS ENTRE -50 Y 50 \n ");
	

	
	for ( cont=0 ; cont<=5 ; cont ++)
	
	{   
	     
		n= 0 + rand()% 6;		
		
		printf ( "INGRESE NUMERO: " );
		scanf ( "%d", & n);
	
    }
	
		
	printf ( "NUMERO MINIMO %d\n", rand ()% n);
    printf ( "NUMERO MAXIMO %d\n", rand ()% n );	
	 	
	 
    
    	return 0;
	
}
