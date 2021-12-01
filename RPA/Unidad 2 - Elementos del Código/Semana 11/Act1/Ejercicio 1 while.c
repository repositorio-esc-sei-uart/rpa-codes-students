/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 11
Tema: Sentencias iterativas while y do-while

Descripcion: Ingresar números enteros hasta que se hayan obtenido 5 números positivos múltiplos de 3.
Autor: Angel Alvarez
Año: 2021
*/

#include <stdio.h>

int main ()
{
    //Definiciones
    int num, cont, multi3, nomulti3;
    //Inicializaciones
    cont = 0;
    multi3 = 0;
    nomulti3 = 0;
    //Inicio
    printf("Ejercicio 1 (Version while)\n");
    printf("---------------\n");
    printf("Hola, mucho gusto, ahora ahora voy a pedirle numeros enteros hasta que consiga 5 positivos mutiplos de 3\n");
    printf("---------------\n");
    printf("Por favor, ingrese un numero ");
    //Entrada
    while (multi3 < 5)
    {
        cont++;
        if (cont != 1)
        printf("Ingrese el siguiente numero ");
        scanf("%d" , &num);
        if (num % 3 == 0)
            multi3++;
        else
        {
            nomulti3++;
        }
        printf("---------------\n");
    }
    //Salida
    printf("Usted ingreso un total de [%d] numeros\n" , cont);
    printf("[%d] de ellos fueron multiplos de 3\n" , multi3);
    printf("[%d] de ellos no fueron multiplos de 3\n" , nomulti3);
    //Fin
}
