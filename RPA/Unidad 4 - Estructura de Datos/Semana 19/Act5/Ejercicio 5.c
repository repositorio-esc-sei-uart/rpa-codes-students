/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 19
Tema: Arreglos multidimensionales (matrices)

Descripcion: Crear una matriz cuadrada NxN inicializada en -1 y mediante un menú de opciones generar funciones para:
> Agregar un elemento con valor positivo en una posición dada.
> Retornar un elemento de una posición dada.
> Mostrar los elementos de la diagonal principal.
> Mostrar los elementos de una fila particular.
> Mostrar los elementos de una columna particular.
> Calcular la sumatoria del perímetro de la matriz.
El programa termina cuando el usuario selecciona la opción salir.
Autor: Angel Alvarez
Año: 2021
*/
//.h
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Definiciones fijas
#define  F 5
#define  C 5
//F = Fila y C = Columna
//Modulos
void saludodesiempre();
void mostrarmatrizAvanzada(int M[F][C]);
void inicializarMatriz(int M[F][C]);
void Menu(int M[F][C]);
int main ()
{
    //Inicio
    srand(time(0));
    //Definiciones
    int matriz[F][C];
    int buscar, cantidad;
    //Inicializaciones
    //Inicio
    saludodesiempre();
    //Entrada
    inicializarMatriz(matriz);
    //Calculo
    Menu(matriz);
    //Fin
    printf("\n");
    return 0;
}
//Modulos
void saludodesiempre()
{
    printf("Hola, mucho gusto, ahora voy a darle una matriz sin valores y un menu de opciones para que interactue\n");
    printf("---------------------------------------------------------------------------------------------------------\n");
}

void mostrarmatrizAvanzada(int M[F][C])
{
    int contador1, contador2;

    printf("        0     1     2     3     4\n");
    printf("    /-----------------------------\n");
    for (contador1 = 0; contador1 < F; contador1++)
    {
        printf(" %d | " , contador1);
        for (contador2 = 0; contador2 < C; contador2++)
            printf("[ %d ]" , M[contador1][contador2]);

        printf("\n");
    }
}

void inicializarMatriz(int M[F][C])
{
    int contador1, contador2;

    for (contador1 = 0; contador1 < F; contador1++)
    {
        for (contador2 = 0; contador2 < C; contador2++)
            M[contador1][contador2] = -1;
    }
}

void Menu(int M[F][C])
{
    int opcion, num, fila, columna, contador, suma;

    while (opcion != 0)
    {
    mostrarmatrizAvanzada(M);

    printf("\n[ 1 ]Agregar un elemento positivo\n[ 2 ]Retornar un elemento\n[ 3 ]Mostrar los elementos de la diagonal principal\n[ 4 ]Mostrar los elementos de una fila particular\n[ 5 ]Mostrar los elementos de una columna particular\n[ 0 ]Salir\n");
    scanf("%d" , &opcion);
    printf("-----------------------------------\n");

    switch(opcion)
        {
        case 1:
            {
            printf("Eligio agregar un elemento positivo\n\n");
            printf("¿Que numero desea ingresar?\n");
            scanf("%d", &num);
            printf("¿En que fila desea ingresarlo?\n");
            scanf("%d", &fila);
            printf("¿En que columna desea ingresarlo?\n");
            scanf("%d", &columna);
            if(num >= 0 && fila >= 0 && fila <= 4 && columna >= 0 && columna <= 4)
                M[fila][columna] = num;
            else
                printf("ERROR:Uno o varios de los datos ingresados son invalidos\n");
            break;
            }
        case 2:
            {
            printf("Eligio retornar un elemento\n\n");
            printf("¿Que fila desea retornar?\n");
            scanf("%d", &fila);
            printf("¿Que columna desea retornar?\n");
            scanf("%d", &columna);
            if(fila >= 0 && fila <= 4 && columna >= 0 && columna <= 4)
            {
                num = M[fila][columna];
                    if(num != -1)
                    printf("En la fila %d columna %d se encuentra el dato %d\n" , fila , columna , num);
                    else
                    printf("En la fila %d columna %d se encuentra un dato vacio\n" , fila , columna);
            }
            else
                printf("ERROR:Uno o varios de los datos ingresados son invalidos\n");
            break;
            }
        case 3:
            {
            printf("Eligio mostrar diagonal\n\n");
            for (contador = 0; contador < F; contador++)
            {
                printf("[ %d ]" , M[contador][contador]);
            }
            printf("\n");
            break;
            }
        case 4:
            {
            printf("Eligio mostrar fila\n\n");
            printf("¿Que fila desea ver?\n");
            scanf("%d" , &fila);
            if(fila >= 0 && fila <= 4)
                {
                    for (contador = 0; contador < C; contador++)
                    {
                        printf("[ %d ]" , M[fila][contador]);
                    }
                    printf("\n");
                }
            else
                printf("ERROR:La fila ingresada no es valida\n");
            break;
            }
        case 5:
            {
            printf("Eligio mostrar columna\n\n");
            printf("¿Que columna desea ver?\n");
            scanf("%d" , &columna);
            if(columna >= 0 && columna <= 4)
                {
                    for (contador = 0; contador < F; contador++)
                    {
                        printf("[ %d ]" , M[contador][columna]);
                    }
                    printf("\n");
                }
            else
                printf("ERROR:La columna ingresada no es valida\n");
            break;
            }
//No pude probar si el perimetro funciona, por alguna razon me cierra el CodeBlocks el tener este case activado
/**        case 6:
            {
            printf("Eligio sumatoria de perimetro\n\n");
            suma = 0;
            suma = M[0][0];
            suma = suma + M[F][0];
            suma = suma + M[0][C];
            suma = suma + M[F][C];
            for (contador = 1; contador < F-1; contador++)
            {
                suma = suma + M[contador][0];
            }
            for (contador = 1; contador < F-1; contador++)
            {
                suma = suma + M[contador][C];
            }
            for (contador = 1; contador < C-1; contador++)
            {
                suma = suma + M[0][contador];
            }
            for (contador = 1; contador < C-1; contador++)
            {
                suma = suma + M[F][contador];
            }
            printf("El total del perimetro es de %d" , suma);
            break;
            }
*/        case 0:
            {
            printf("Saliendo...\n");
            break;
            }
        default:
            {
            printf("ERROR:Opcion no valida\n");
            break;
            }
        }
    printf("-----------------------------------\n");
    }
}
