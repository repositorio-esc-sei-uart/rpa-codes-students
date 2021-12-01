#include <stdio.h>
#include <string.h>

int main(){
	
	char cad1[20],cad2[20],cad3[20];
 
	printf( "ingrese  la primera palabra\n "); 
	gets(cad1);
	printf( "ingrese  la  segunda  palabra\n");
	gets(cad2);
	printf ( "ingrese  la  tercera  palabra\n");
	gets(cad3);
	
	if (strcmp (cad1,cad2)==0)
	{
		printf (" LA PRIMERA Y SEGUNDA PALABRA SON IGUALES\n ", cad1,cad2);
		}
	else { 
		printf ( " LA PRIMERA Y SEGUNDA  PALABRA  SON DISTINTAS\n ", cad1,cad2);
    }  
        if (strcmp (cad1,cad3)==0)
	{
		printf ("LA PRIMERA  Y TERCERA PALABRA SON IGUALES\n ", cad1,cad3);
		}
	else {
		printf ( " LA PRIMERA Y TERCERA  PALABRA SON DISTINTAS\n ", cad1,cad3);
    }   
    if (strcmp (cad2,cad1)==0)
	{
		printf (" LA SEGUNDA Y PRIMERA PALABRA SON IGUALES\n ", cad2,cad1);
		}
	else { 
		printf ( " LA SEGUNDA  Y PRIMERA PALABRA  SON DISTINTAS\n ", cad2,cad1);
    }  
    if (strcmp (cad2,cad3)==0)
	{
		printf (" LA  SEGUNDA Y TERCERA PALABRA SON IGUALES\n ", cad2,cad3);
		}
	else { 
		printf ( " LA SEGUNDA  Y TERCERA PALABRA  SON DISTINTAS\n ", cad2,cad3);
    }  
    if (strcmp (cad3,cad1)==0)
	{
		printf (" LA TERCERA Y PRIMERA PALABRA SON IGUALES\n ", cad3,cad1);
		}
	else { 
		printf ( " LA TERCERA Y PRIMERA  PALABRA  SON DISTINTAS\n ", cad3,cad1);
    }  
	if (strcmp (cad3,cad2)==0)
	{
		printf (" LA TERCERA Y SEGUNDA PALABRA SON IGUALES\n ", cad3,cad2);
		}
	else { 
		printf ( " LA TERCERA Y SEGUNDA  PALABRA  SON DISTINTAS\n ", cad3,cad2);
	return 0;	
    }
}


	 
 
