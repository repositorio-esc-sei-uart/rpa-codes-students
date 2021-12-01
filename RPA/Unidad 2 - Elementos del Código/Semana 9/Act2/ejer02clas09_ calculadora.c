#include<stdio.h>

int main(){
	int  opc=0 , r=0;
	float  A,B ;
	float  x;
	
	
	printf("INGRESE UN NUMERO\n ");
	scanf ("%f", &A);
	printf("INGRESE OTRO NUMERO\n ");
	scanf ("%f", &B);
	
	
	
	printf ("\n   VAMOS A  CALCULAR \n");
	printf ("\n 1 SUMA");
	printf ("\n 2 RESTA");
	printf ("\n 3 MULTIPLICACION");
	printf ("\n 4 DIVISION");
	printf ("\n 5 MODULO\n ");
	printf ("\n ELIGE UNA OPCION  PARA CALCULAR  \n  ");
	scanf ("%d",& opc );
	
	switch (opc){
		case 1 :
			
			x= A + B ;
			printf("RESULTADO ", x);
			printf ( "%f " ,x);
			break;
		
			
		case 2 :
			
			x= A - B ;
			printf("RESULTADO ", x);
			printf( "%f",x);
			break;
		case 3:
			 x= A*B ;
			 printf("RESULTADO ", x);
			 printf ("%f", x);
			 break;
			
		case 4:
			 if (A>0){
			 	x= A/B;
			 	printf("RESULTADO ", x);
			    printf("%f", x);}
			 else 
			 	printf("NO INGRESE CEROS Al PRINCIPIO  PARA DIVIDIR\n");
			break;
		
	    

		default:
			
		printf ( "\n INGRESO INVALIDO");
			
			
		
	}
	
	
	
}
