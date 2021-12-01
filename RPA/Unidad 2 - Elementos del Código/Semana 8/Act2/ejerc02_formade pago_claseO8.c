/* (1649) RESOLUCION DE ROBLEMAS  Y ALGORTMOS 
CLASE : 08
TEMA: Sentencia  de seleccion if -else
DESCRIPCION: Forma de pagos
AUTOR : Benicio Anahi
AÑO: 2021 */









#include<stdio.h>



int main ()

{
	float  monto;
	float tarjeta , efectivo; 
	float  recargo;
	
	printf("INGRESE EL MONTO A APAGAR");
	scanf ("%f", &monto );
	
	if (monto>0){
		printf("FORMA DE PAGO TARJETA O EFECTIVO?");
		scanf("%f", & tarjeta );
		scanf("%f",& efectivo);
 
		if ("&=tarjeta"){
			
			recargo=(monto*10/100)+monto;
			
			
		 printf("\n el total es %f", recargo);
			
		
		}
	    else {
	    	printf("\n el total es %f ", monto);
		}
	}
	
	else 
	   printf("SECCION INVALIDA");
}

	
	
