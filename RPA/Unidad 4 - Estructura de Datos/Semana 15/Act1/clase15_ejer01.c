#include <stdio.h>
#include <stdlib.h>
#include <time.h>´´
# define VECS 5
# define  MAXV 10 

void cargarIntercalado( int vec[MAXV]);


int main ()
{
	 int vec1[VECS] = {10,20,30,40,50};
	 int vec2[VECS]= {15,25,35,45,55};
	 int vec3[MAXV];
	 int cont,contvec1,contvec2;
	 
	 
 
	contvec1=0;
	contvec2=0;

	
	printf("EL VECTOR 1 ES:");
	
	for(cont=0;cont<VECS; cont++)
	printf ("[ %d]", vec1[cont]);
	printf ("\n");
	
	printf("EL VECTOR 2 ES:");
	
    for (cont=0;cont<VECS; cont++)
	printf ("[ %d]", vec2[cont]);
	printf ("\n");
	
	cargarIntercalado(vec3);
	 
	

	
	
	}

		
	

	 
 void cargarIntercalado( int vec[MAXV])
 
 {  
     int cont;
     int vec1[VECS] = {10,20,30,40,50};
	 int vec2[VECS]= {15,25,35,45,55};
	 int vec3[MAXV];
	 int contvec1,contvec2;
	 
	 
	 
 
	contvec1=0;
	contvec2=0; 
	
		
   
	for  ( cont=0;cont <MAXV; cont++)
	
	{ if (cont %2)
	     { vec[cont]= vec2[contvec2];
	     contvec2++;
	     }
	     else
	     {
	     	vec[cont] = vec1[contvec1];
	     	contvec1++;
		 }
	
	}	
	printf("EL VECTOR 3 INTERCALADO:");
	
	for ( cont = 0 ;cont <MAXV;cont++);
   printf ( "[ %d]",vec[cont]);
		
}

		
 
 	
	

 
	

