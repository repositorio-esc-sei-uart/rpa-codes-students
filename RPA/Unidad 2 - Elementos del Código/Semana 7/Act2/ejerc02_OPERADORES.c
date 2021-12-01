#include <stdio.h>

int main ()
{
	int a, b,c ;
	printf("INGRESE UN NUMERO ") ;
	scanf ( "%d",&a);
	printf("INGRESE OTRO NUMERO ") ;
	scanf ( "%d",&b);
	c= a+b;
	
	printf (" LA SUMA ES : %d ",c);
	
	c=a*b; 
	
	printf (" LA MULTILICACION  ES : %d ",c);
	
	c = a-b;
	
	printf (" LA RESTA ES : %d ",c);
	
	c=a/b; 
	
	printf (" LA DIVISION  ES : %d ",c);
	
	
	
	
	return 0 ;
	
	
}
