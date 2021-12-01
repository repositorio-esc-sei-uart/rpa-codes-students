// Resolucion y Problemas de  Algoritmos.
// Clase : 10
// Tema : Sentencia Interaccion for 
// Descripcion :  20 numeros aleatorios
// Autor : Benicio Anahi 
// Año : 2021




#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main (){
	
	  
	int n , cont ;
	int prom , suma=0 ;
	
	
	srand (time (0));
	int  a = 0 , b= 100 ;
	
    printf ("NUMERO ALEATORIO  % d \n", rand ()%100 );
    
    
	printf (" INGRESE 20 NUMEROS ALEATORIOS \n");
	
	
	for ( cont=0 ; cont<=20 ; cont ++)
	
	{
		n= 0 + rand()% 21;		
		
		printf ( "INGRESE NUMERO: " );
		scanf ( "%d", & n);
		suma = suma + n; 

	}
	
	printf (" LA SUMA  TOTAL ES  %d\n ",suma); 
	
    prom = suma / 20 ;
    
	printf (" PROMEDIO  %d \n ", prom);
	
		return 0;
	
}
