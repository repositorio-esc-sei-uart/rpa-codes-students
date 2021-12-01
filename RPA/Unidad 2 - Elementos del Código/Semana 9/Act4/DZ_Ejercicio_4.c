/**

(1649) Resolucion de problemas y algoritmos
Clase Nro: 09
Tema: le lenguaje C

Descripcion: Ingrese 3 palabras por teclado y compare si las cadenas son distintas. Si alguna
palabra es repetida, mostrar el aviso de palabra duplicada o triplicada. Finalmente
concatenar las palabras separadas por un espacio, y mostrar la cadena resultante
por pantalla.
Autor: DAVID ZERPA
Año: 2021
*/
#include <stdio.h>
#include <string.h>
int main()
{
char p1[20], p2[20], p3[20];
printf("Ingrese palabra 1: \n");
gets(p1);
printf("Ingrese palabra 2: \n");
gets(p2);
printf("Ingrese palabra 3: \n");
gets(p3);
if((strcmp(p1, p2)==0))
{
if((strcmp(p1,p3)==0))
{
printf("Palabra triplicada: %s %s %s\n", p1, p2, p3);
printf("Palabras ingresadas: %s %s %s", p1, p2 ,p3);
}
else
{
printf("Palabra duplicada: %s %s \n", p1, p2);
printf("Palabras ingresadas: %s %s %s", p1, p2 ,p3);
}
}
else
{
if((strcmp(p2,p1)==0))
{
if((strcmp(p2,p3)==0))
{
printf("Palabra triplicada: %s %s %s\n", p1, p2, p3);
printf("Palabras ingresadas: %s %s %s", p1, p2 ,p3);
}
else
{
printf("Palabra duplicada: %s %s \n", p1, p2);
printf("Palabras ingresadas: %s %s %s", p1, p2 ,p3);
}
}
else
{
if((strcmp(p3,p1)==0))
{
if((strcmp(p3,p2)==0))
{
printf("Palabra triplicada: %s %s %s\n", p1, p2, p3);
printf("Palabras ingresadas: %s %s %s", p1, p2 ,p3);
}
else
{
printf("Palabra duplicada: %s %s \n", p3, p1);
printf("Palabras ingresadas: %s %s %s", p1, p2 ,p3);
}
}
else
{
printf("No se repitio ninguna palabra \n");
printf("Palabras ingresadas: %s %s %s", p1, p2 ,p3);
}
}
}
return 0;
}




