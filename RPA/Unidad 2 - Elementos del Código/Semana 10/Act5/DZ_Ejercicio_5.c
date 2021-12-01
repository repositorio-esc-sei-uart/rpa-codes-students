/**

(1649) Resolucion de problemas y algoritmos
Clase Nro: 09
Tema: le lenguaje C

Descripcion:Obtener 5 palabras por teclado. Mostrar cuántas vocales tiene cada
palabra y concatenar todas las palabras en una cadena separadas con
espacios y mostrar la cadena final por pantalla.

Autor: DAVID ZERPA
Año: 2021
*/
#include <stdio.h>

int main()
{
    int i, i2, v;
    char texto[20];
for(i2=0; i2<5; i2++)
{
v=0;
    printf("Introduzca una palabra:\n ");
    gets(texto);
fflush(stdin);
    for( i=0; texto[i]!='\0'; i++)
	{
      switch (texto[i])
	  {
           case 'a':
                v++;
                break;
           case 'e':
                v++;
                break;
           case 'i':
                v++;
                break;
           case 'o':
                v++;
                break;
           case 'u':
                v++;
                break;
		   case 'A':
                v++;
                break;
           case 'E':
                v++;
                break;
           case 'I':
                v++;
                break;
           case 'O':
                v++;
                break;
           case 'U':
                v++;
                break;

           default:
                break;
      }
    }
    printf("\n Hay: %d vocales. \n",v);
}
    return 0;
}
