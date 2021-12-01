# include <stdio.h>

// Resolucion y Problemas de  Algoritmos.
// Clase : 11
// Tema : Sentencia Interactiva  whilw , do while
// Descripcion : ingresar numeros enteros hasta obtener  5 positivos
// Autor : Benicio Anahi 
// Año : 2021


int main()
{
	int n , x,y;
	int cont=0;
    x= y;
	
	
	while (x<=y){
		 printf("ingrese numero\n  ");
		 scanf ("%d",&y);
		 
		 if ( y>0 && y%3==0){
		 	
		 	
		 	 printf ("positivo multiplo de 3\n ");
		 	 cont++;
		    }
		    while (cont>=5 ){
	        
	         }
	}
	
	
	return 0 ;
} 

/*int main (){
	
	int n , x, y ;
	int cont=0;
    x= y;
    
    do{
         (x<=y);
		 printf("ingrese numero\n  ");
		 scanf ("%d",&y);
		 
		 if ( y>0 && y%3==0){
		 	
		 	
		 	 printf ("positivo multiplo de 3\n ");
		 	 cont++;
		    }
		    while (cont>=5 ){
	        
	         }
  }
  while ( cont <5);
   return 0;
}*/

	
