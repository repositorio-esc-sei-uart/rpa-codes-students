# include<stdio.h>
# include <stdlib.h>
# include <time.h>

int main (){
	int resp=0 ;
	int num=0 ;
	int turnos=10;
	

		srand(time(0));
		num= 1+rand()% 60;
	
		printf (" AVIDIVINA EL NUMERO\n");
		printf ("ingresa un numero entre 1 y 60\n");
		
		
	    
		do {
		 	printf(" INGRESA TU RESPUESTA\n");
			scanf ("%d",&resp);
		 	if (resp>num)
			 {
		 		printf("MUY ALTO\n");
			 }
		 	else
			 {
		 		printf("MUY BAJO\n");
			 }
			
	    }
		    
		while(resp!=num);
		{
			printf("JUEGA DE NUEVO");
		}
		if (turnos=0){
		    	 printf ("FIN DE INTENTOS ;EL NUMERO ERA", num );
		    	   turnos=turnos-1; 
				   }
    
	return 0; 
}               
