#include <stdio.h>

int main ()
{
	char letra1,letra2;
	 
	printf("INGRESE  UNA LETRA " );
	scanf ("%c", &letra1);
	
	printf("INGRESE OTRO CARACTER");
	scanf ("%c", &letra2);
	
	
	letra1=letra2 ;
	letra2 =letra1;
	
	 printf (" LAS LETRAS INGRESADAS SON ",letra1, letra2 );
	
	return 0;
} 
