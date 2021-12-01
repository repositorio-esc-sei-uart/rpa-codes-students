/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 11
Tema: Sentencias iterativas while y do-while

Descripcion: Diseñar un menú con las siguientes opciones:
[1] Calcular la potencia de [A] a la [B] Ej: 24 = 2 * 2 * 2 * 2 = 16
[2] Calcular el factorial de un número. Ej: 4! = 4 * 3 * 2 * 1 = 24
[3] Salir
El programa termina cuando el usuario elige la opción salir. Diseñe los algoritmos de cáculos.
Autor: Angel Alvarez
Año: 2021
*/

#include <stdio.h>

int main ()
{
    //Definiciones
    int num, pot, opc, cont, aux;
    long resu;
    //Inicio
    printf("Ejercicio 3 (do-while)\n");
    printf("---------------\n");
    printf("Hola, mucho gusto, ahora voy a darle un menu con opciones para calcular potencia y factorial\n");
    printf("---------------\n");
    printf("(Ingrese el numero correspondiente para cada opcion)\n");
    //Entrada
    do
    {
        printf("[1] Calcular potencia\n");
        printf("[2] Calcular factorial\n");
        printf("[3] Salir\n");
        scanf("%d" , &opc);
        printf("---------------\n");
        switch (opc)
        {
            case 1:
                printf("Eligio calcular potencia\n");
                printf("Ingrese el numero a potenciar ");
                scanf("%d" , &num);
                printf("Ingrese la potencia ");
                scanf("%d" , &pot);
                cont = 0;
                resu = 1;
                do
                {
                    cont++;
                    resu = resu * num;
                }
                while (cont < pot);
                printf("El resultado de %d con potencia de %d es %d\n" , num , pot , resu);
                printf("---------------\n");
                break;
            case 2:
                printf("Eligio calcular factorial\n");
                printf("Ingrese el numero a factorizar ");
                scanf("%d" , &num);
                if (num > 0)
                {
                    cont = 0;
                    aux = 1;
                    do
                    {
                        cont++;
                        aux = aux * cont;
                    }
                    while (cont != num);
                    printf("El resultado de la factorizacion de %d es %d\n" , num , aux);
                }
                else
                {
                    printf("El numero ingresado no es valido");
                }
                printf("---------------\n");
                break;
            case 3:
                printf("Saliendo...\n");
                printf("---------------\n");
                break;
            default:
                printf("ERROR: opcion invalida\n");
                printf("Por favor, ingrese una opcion valida\n");
                printf("---------------\n");
                break;
        }
    }
    while (opc != 3);
    printf("~Adios~");
    //Fin
}
