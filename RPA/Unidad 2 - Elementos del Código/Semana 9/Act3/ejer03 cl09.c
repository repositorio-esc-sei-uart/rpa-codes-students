# include <stdio.h>
# include<string.h>
# include <ctype.h>



int main() {
	
	char   car1,car2, aux;
	int  suma;
	
	printf ("PROCESAMIENTO DE LOS CARACTERES\n" );
	
	printf (" ingresa  un caracteres \n ");
	scanf ( "%c" ,&car1);
	fflush (stdin);
	printf (" ingresa  un caracteres \n ");
	scanf ( "%c" ,&car2);
	fflush (stdin);
	
	
		if (isalpha (car1 ) )
	{
		printf (" SON LETRAS ");
		
		if (islower( car1  )){
		
			printf ( "EN MINUSCULA. CONVERSION A MAYUSCULA: %c \n" ,toupper(car1 ));
	
	    }
		else {
		   printf("EN MAYUSCULA. CONVERTIR A MINUSCULA: %c \n", tolower(car1 ));
			
		}
		if (isalpha (car2 ) )
	{
		printf (" SON LETRAS ");
		
		if (islower( car2  )){
		
			printf ( "EN MINUSCULA. CONVERSION A MAYUSCULA: %c \n" ,toupper(car2 ));
	
	    }
		else {
		   printf("EN MAYUSCULA. CONVERTIR A MINUSCULA: %c \n", tolower(car2 ));
			
		}
  		
    }
    
  		
    }
    
    if (isdigit(car1 ))
    	printf("\n  ES UN DIGITO ");
    	if (isdigit(car2)){
    	printf("\n  ES UN DIGITO ");
    	 
   	}
	
    
        
	  
             

	return 0;
        
}
    

