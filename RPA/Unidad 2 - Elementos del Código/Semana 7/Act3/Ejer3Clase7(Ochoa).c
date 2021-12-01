 /**
 (1649) Resolución de Problemas y Algoritmos
 Clase N° 7
 Tema: Lenguaje C

 Descripción: Dadas las variables inicializadas A=2, B=10 y C=40, Realice un programa
con el siguiente intercambio:
 B que intercambie con A
 C que intercambie con B
A que intercambie con C

 Autor: Ochoa Andrea Daniela
 Año:2021
 **/

 #include<stdio.h>

 int main()
 {

 int a,b,c,aux;
 a=2;
 b=10;
 c=40;
aux=0;

 printf("\nValor de A: %d\n ",a);
 printf("\nValor de B: %d\n",b);
 printf("\nValor de C: %d\n",c);

 aux=a;
 a=b;
b=c;
c=aux;

printf("\n\nAhora intercambiammos el Valor de B, con el Valor de A: %d\n",a);
printf("\n\nAqui intercambiamos el Valor de C, con el Valor de B: %d\n ",b);
printf("\n\nFinalmente intercambiamos el Valor de A, con el Valor de C: %d\n",c);

return 0;



 }
