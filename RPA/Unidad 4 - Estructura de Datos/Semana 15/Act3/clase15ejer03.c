#include <stdlib.h>
#include <time.h>
#include <stdio.h>
# define MAXV 10
 
 void  mostrar (int v[MAXV]);




int main()
{
   int  vec [MAXV],cont ;
   
   
   srand (time (0));
    
    for (cont=0; cont<MAXV; cont++)
	{
		vec[cont]=10+rand ()% 51;
		
		printf ("LOS VECTORES SON :\n");
		printf ("\n");
		mostrar (vec);
    	
	}
}

void  mostrar (int v[MAXV])

{ 
 int  cont ;
 for ( cont =0 ; cont < MAXV; cont ++)
  printf ("%d", v [cont] );
	
}

 
