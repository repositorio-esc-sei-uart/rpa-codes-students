 /**
 (1649) Resolución de Problemas y Algoritmos
 Clase N° 7
 Tema: Lenguaje C

 Descripción: Obtener dos caracteres car1 y car2, intercambiarlos y mostrarlos.

 Autor: Ochoa Andrea Daniela
 Año:2021
 **/
#include<stdio.h>
int main()
{

char car1;
char car2;
char aux;

printf("Digite una Letra\n");

scanf("%c",&car1);

printf("Digite otra Letra\n");

scanf("%c",&car2);

printf("\nAhora intercambiare los caracteres: %c por %c",car1,car2);

aux=car1;
car1=car2;
car2=aux;

printf("Finalmente quedan asi intercambiados: \n");

printf("%c pasa a ser: %c",car1);

printf("%c pasa a ser: %c",car2);

return 0;

}

/*No logro encontrar la forma en que me imprima por pantalla el caracter 2*/
