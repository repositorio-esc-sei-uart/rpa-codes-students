/**

(1649) Resolucion de problemas y algoritmos
Clase Nro: 11
Tema: le lenguaje C

Descripcion: Crear un algoritmo que permita adivinar un n�mero. El algoritmo debe
generar un n�mero aleatorio del 1 al 60. El usuario solo tendr� 10
intentos para adivinar. El algoritmo va pidiendo n�meros al usuario y
va respondiendo si el n�mero a adivinar es mayor o menor que el
introducido a modo de pistas, y cu�ntos intentos le quedan. El
algoritmo termina cuando se acierta el n�mero y decir en cuantos
intentos lo logr�. Si se llega al limite de 10 intentos y no adivina,
mostrar el n�mero aleatorio y un mensaje de que perdi� el juego.

Autor: DAVID ZERPA
A�o: 2021
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
int cont=10, inte=0, win=0, sc;
srand(time(0));

sc=1+rand()%60;
printf("%d \n", sc);
printf("JUEGO: Advina el numero \n");
printf("Debe adivinar el numero secreto entre 1 y 60 \n");
printf("Solo tiene 10 intentos para lograr el objetivo \n");
printf("Que comience el juego \n");

    //VERSION WHILE

while(cont>0)
    {
    printf("\nTiene %d intentos \n", cont);
        scanf("%d", & inte);
        cont--;
        if(sc==inte)
            {
            cont=0;
            printf("Felicidades lograste adivinar el numero");
            }
        else
        {
            if(sc<inte)
                {
                printf("\nEl numero secreto es menor al ingresado\n");
                }
                else
                    printf("\nEl numero secreto es mayor al ingresado\n");
        }
    }
    //VERSION DO-WHILE
/**
do
    {
    printf("\nTiene %d intentos \n", cont);
        scanf("%d", & inte);
        cont--;
        if(sc==inte)
            {
            cont=0;
            printf("Felicidades lograste adivinar el numero");
            }
        else
        {
            if(sc<inte)
                {
                printf("\nEl numero secreto es menor al ingresado\n");
                }
                else
                    printf("\nEl numero secreto es mayor al ingresado\n");
        }
    }
while(cont>0);
*/
    if((cont==0)&& (sc!=inte))
    {
    printf("\n Te quedaste sin intentos\n");
    printf("Perdiste, intentalo de nuevo");
    }
return 0;
}
