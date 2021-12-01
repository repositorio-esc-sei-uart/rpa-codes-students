// Resolucion y Problemas de  Algoritmos.
// Clase : 10
// Tema : Sentencia Interactiva  for 
// Descripcion :  Promedio , notas de alumnos
// Autor : Benicio Anahi 
// Año : 2021



#include <stdlib.h>
#include <time.h>
#include <stdio.h>


int main ()
{
    int  alumnos, nota ,x, y, suma; 
	float  promedio; 
	
	srand (time (0));
	int  a = 1 , b= 10 ;
	
	printf ("INGRESE LA CANTIDAD DE ALUMNOS \n");
	scanf ("%d", & x);
	printf ( "INGRESE CANTIDAD DE NOTAS\n ");
	scanf ("%d", & y );
	
	
	
	for  ( alumnos = 1; alumnos <=x  ; alumnos ++){
		printf ( "ALUMNO % d: \n", alumnos );
		scanf ( "%d", &x );
		suma = 0;
		
		
		for ( nota=1 ; nota<=y ; nota++){
			printf ( " NOTA %d: ", y);
			scanf ("%d",& y);
			suma = suma + y  ;    
    	
    }
	promedio = suma /y ;
	printf (" PROMEDIO DEL ALUMNO %d :%21f\n ", alumnos , promedio );
    }
    
    	return 0;
}

