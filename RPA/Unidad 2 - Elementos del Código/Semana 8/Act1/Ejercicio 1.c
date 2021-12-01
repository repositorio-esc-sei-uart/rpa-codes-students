/**
(1649) Resolucion de problemas y algoritmos
Clase Nro: 08
Tema: Sentencia de seleccion if-else

Descripcion: Obtener un entero por teclado y decir si es un positivo par, negativo par, positivo impar, negativo impar, ó cero.
Autor: Angel Alvarez
Año: 2021
*/
#include <stdio.h>

int main ()
{
    //Definiciones
    int num;
    //Inicio
    printf("Hola, mucho gusto, ahora voy a pedirle un numero y le dire si es negativo o positivo ademas de par o impar\n");
    printf("Por favor, ingrese el numero: ");
    //Entrada
    scanf("%d" , &num);
    printf("--------------------\n");
    //Salida
    if (num != 0)
    {
        if (num > 0)
        {
            if (num % 2 == 0)
            {
                printf("El numero es un par positivo");
            }
            else
            {
                printf("El numero es un impar positivo");
            }
        }
        else
        {
            if (num % 2 == 0)
            {
                printf("El numero es un par negativo");
            }
            else
            {
                printf("El numero es un impar negativo");
            }
        }
    }
    else
    {
        printf("El numero es cero");
    }
}
