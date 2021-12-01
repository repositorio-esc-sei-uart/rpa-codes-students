#include<stdio.h>
// Resolucion y Problemas de  Algoritmos.
// Clase : 11
// Tema : Sentencia Interactiva  whilw , do while
// Descripcion : Calcular potencia y factorial.
// Autor : Benicio Anahi 
// Año : 2021



/*int main(){
	int  opc=0 , r=0, n , i, exp, base, pot=1;
	int fac=1;
	

	
	
	printf ("\n   VAMOS A  CALCULAR \n");
	printf ("\n 1 POTENCIA");
	printf ("\n 2 FACTORIAL");
	printf ("\n 3 SALIR");
	
	
	printf ("\n ELIGE UNA OPCION  PARA CALCULAR  \n  ");
	scanf ("%d",& opc );
	
	switch (opc){
		case 1 :
			
		printf ("INGRESE LA BASE\n ");
		scanf ("%d", & base);
		printf("INGRESE LA POTENCIA\n ");
		scanf("%d",& exp);
		
		for (i=1;i<=exp ;i++){
			pot = pot*base;
			
		}
		printf ( "LA POTENCIA ES: %d", pot);
		break;	
		
			
		case 2 :
			
			printf("INGRESE EL NUMERO \n");
			scanf ( "%d", &n);
			
			for (i=1;i<=n ;i++){
				fac=fac*i;		
			}
			printf("EL FACTORIAL ES: %d  ",fac);
			break;
			
		case 3 :
			
			printf ("SALIR");
			break;		
	}
	
	
	return 0;
}  */

 
 // Version do  while
 
 int main (){
    int  opc=0 , r=0, n , i, exp, base, pot=1;
	int fac=1;
	

	do {
	printf ("\n   VAMOS A  CALCULAR \n");
	printf ("\n 1 POTENCIA");
	printf ("\n 2 FACTORIAL");
	printf ("\n 3 SALIR");
	
	
	printf ("\n ELIGE UNA OPCION  PARA CALCULAR  \n  ");
	scanf ("%d",& opc );
	
	switch (opc){
		case 1 :
			
		printf ("INGRESE LA BASE\n ");
		scanf ("%d", & base);
		printf("INGRESE LA POTENCIA\n ");
		scanf("%d",& exp);
		
		for (i=1;i<=exp ;i++){
			pot = pot*base;
			
		}
		printf ( "LA POTENCIA ES: %d", pot);
		break;	
		
			
		case 2 :
			
			printf("INGRESE EL NUMERO \n");
			scanf ( "%d", &n);
			
			for (i=1;i<=n ;i++){
				fac=fac*i;		
			}
			printf("EL FACTORIAL ES: %d  ",fac);
			break;
			
		case 3 :
			
			printf ("SALIR");
			break;	
			
		default:
			printf ( "OPCION INCORRECTA");
   
		break;
				
	 }
	 
			
		
   }
   while  ( opc!=3);
   
   	

  
	return 0;
}
 	
 


