#include<stdio.h>
# define pi 3.141592

 int main()
 {
 
	float  area;
	int radio;
	 
	printf (" INGRESE EL VALOR DEL RADIO: ");
	scanf ( "%d", &radio);
	
	area= ( radio*radio)* pi; 
	
	printf(" EL AREA  DEL CIRCULO ES : % 4f",area);
	
	return 0;
	
}
