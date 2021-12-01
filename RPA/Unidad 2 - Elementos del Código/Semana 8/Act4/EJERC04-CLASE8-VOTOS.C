/* (1649) RESOLUCION DE ROBLEMAS  Y ALGORTMOS 
CLASE : 08
TEMA: Sentencia  de seleccion if -else
DESCRIPCION: Candidotos  y sus votos 
AUTOR : Benicio Anahi
AÑO: 2021 */






# include<stdio.h>

int main(){
	
	
	 int  A=0,B=0,C=0,suma=0;
	 float porcentaje=0 ;
	 
	 
	 
	 printf ("ingrese los votos del candidato A");
	 scanf( "%d",&A);
	 printf ("ingrese los votos del candidato B");
	 scanf( "%d",&B);
	 printf ("ingrese los votos del candidato C");
	 scanf( "%d",&C);
	 
	 suma= A+B+C;
	 
	 printf("\n total de votos  %d", suma);
	 
	 
	 if (A > B &&  A>C) {
	 	
	 	
	 	
	 	printf("CANDIDATO A  GANA");
	 
	   if (porcentaje >= 45){
	   	porcentaje=(suma*45/100)+suma;
	   	printf ("el porcentaje es", porcentaje);
	   }
	    else{
	    	printf(" el porcentaje es bajo ",porcentaje);
		}
    }
	else{
	 	printf ("  CANDIDATO  A NO ALCANZA PARA GANAR");
	 }
	 
	 if (B > A &&  B>C) {
	 	
	 	porcentaje=(suma*45/100)+suma;
	 	
	 	printf("CANDIDATO B  GANA");
	 }
	 else{
	 	printf ("  CANDIDATO  B NO ALCANZA PARA GANAR");
	 }
	 if (C> B &&  C>A) {
	 	
	 	porcentaje=(suma*45/100)+suma;
	 	
	 	printf("CANDIDATO C  GANA");
	 }
	 else{
	 	printf ("  CANDIDATO  C NO ALCANZA PARA GANAR");
	 }
	 
	
	 
}
