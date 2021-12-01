#include<stdio.h>
#include <math.h>
#define PI  3.141592


int main (){
	
	int  opc=0;
    float lado , base , altura, radio;
    float x;
	
	printf("\n  AREAS DE FIGURAS\n");
	printf( "ELIJA UNA OPCION\n" );
	printf("\n 1 AREA DEL  CIRCULO\n");
	printf("\n 2 AREA DEL CUADRADO\n");
	printf("\n 3 AREA DEL TRIANGULO \n ");
	scanf ("%d",& opc);
	
	
	switch (opc){
		case 1:
			printf("INGRESE  LA MEDIDA DEL RADIO"); 
			scanf ("%f",&radio );
			x= (radio*2)*PI;
			printf( "%f",x);
			break;
		case 2:
			printf("INGRESE  LA MEDIDA DEL LADO\n "); 
			scanf("%f",&lado);
			x=lado*lado;
			printf("%f",x );
			break;
		case 3:
		    printf("INGRESE LA ALTURA ");
			scanf ("%f",& altura );
			printf("INGRESE LA BASE ");
			scanf ( "%f", base);
			
			x= (base * altura) / 2;
			printf("%f",x);
			
		default:
		printf ("INGRESO INVALIDO");
			
	}
	return 0;
}

