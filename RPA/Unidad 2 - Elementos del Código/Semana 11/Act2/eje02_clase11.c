

// Resolucion y Problemas de  Algoritmos.
// Clase : 11
// Tema : Sentencia Interactiva  whilw , do while
// Descripcion : Generar una serie de números aleatorios comprendidos entre 1 y 100 mientras que
//se obtenga 20 pares. Mostrar por pantalla los aleatorios pares y la cantidad total
//de aleatorios generados.
// Autor : Benicio Anahi 
// Año : 2021

# include<stdio.h>
# include <stdlib.h>
# include <time.h>

/*int main ()
{
	
	int n ,x , cont=0 , suma=0, par;
	
	srand (time (0));

	
	printf("NUMEROS ALEATORIOS\n ");
	
	
	
	for (cont=0 ; cont <=x; cont++)
    {
    x=1+rand()%100;
    printf ( "\n %3d", cont);
	printf ("ALEATORIOS %d :",x);
	
	while (cont>=20 ){
	 cont++;
	}
		if ( x%2==0 ){
	 	printf(" PAR\n ");
	    }
	
	}
	
	printf ("\nTOTAL DE NUMEROS ALEATORIOS: %d" , cont );
		
   
	return 0 ;
}*/
	   
	int main(){
		
		int n ,x , cont=0 , suma=0, par;
	    srand (time (0));
	    printf("NUMEROS ALEATORIOS\n ");
	
		
	do {
		for (cont=0 ; cont <=x; cont++)
       {
       x=1+rand()%100;
       printf ( "\n %3d", cont);
	   printf ("ALEATORIOS %d :",x);
	
	    while (cont>=20 ){
	    cont++;
	    }
		if ( x%2==0 ){
	 	printf(" PAR\n ");
	    }
	
    	}
	
	printf ("\nTOTAL DE NUMEROS ALEATORIOS: %d" , cont );
    
   }
   	while(cont!=20);{
	}
    return 0;
   }


