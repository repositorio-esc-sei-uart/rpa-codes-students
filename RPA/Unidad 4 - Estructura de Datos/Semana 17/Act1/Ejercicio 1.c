/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 17
Tema: Procesamiento de cadenas de caracteres

Descripcion:  Obtener una frase por teclado y convertirla a las siguientes opciones:
1 MAYÚSCULAS
2 minúsculas
3 Tipo oración
4 Poner En Mayusculas Cada Palabra
El programa termina cuando el usuario seleccione la opción Salir.
Autor: Angel Alvarez
Año: 2021
*/
//.h
#include <stdio.h>
#include <ctype.h>
#include <string.h>
//Modulos
void saludodesiempre();
void mostrarvector(char V[], int L);
void menu(char V[], int L);
//Definiciones fijas
#define  VECL 50

int main ()
{
    //Inicio
    //Definiciones
    char frase[VECL];
    int fraselongitud;
    //Inicio
    saludodesiempre();
    //Entrada
    gets(frase);
    fflush(stdin);
    fraselongitud = strlen(frase);
    //Calculo
    menu(frase, fraselongitud);
    //Salida
    //Fin
    printf("\n");
    return 0;
}
//Modulos
void saludodesiempre()
{
    printf("Hola, mucho gusto, ahora voy a pedir una frase y le voy a mostrar un menu con opciones\n");
    printf("---------------\n");
    printf("Por favor, ingrese una frase: ");
}

void mostrarvector(char V[] , int L)
{
    int contador;
    for (contador = 0; contador < L; contador++)
        printf("%c" , V[contador]);
}

void menu(char V[], int L)
{
    int opcion, contador;
    opcion = 0;

    while(opcion != 5)
    {
        printf("Su frase es: ");
        mostrarvector(V, L);
        printf("\n---------------\n");
        printf("Elija una opcion:");
        printf("\n[ 1 ]MAYUSCULAS\n[ 2 ]minusculas\n[ 3 ]Tipo oracion\n[ 4 ]Poner En Mayusculas Cada Palabra\n[ 5 ]Salir\n");
        scanf("%d", &opcion);
        switch(opcion)
        {
            case 1:
            {
                printf("---------------\n");
                printf("Trasformando todo en mayusculas...\n");
                for (contador = 0; contador < L; contador++)
                {
                    V[contador] = toupper(V[contador]);
                }
                break;
            }
            case 2:
            {
                printf("---------------\n");
                printf("Transformando todo en minusculas...\n");
                for (contador = 0; contador < L; contador++)
                {
                    V[contador] = tolower(V[contador]);
                }
                break;
            }
            case 3:
            {
                printf("---------------\n");
                printf("Transformando la primera letra de la frase en mayuscula...\n");
                for (contador = 0; contador < L; contador++)
                {
                    V[contador] = tolower(V[contador]);
                }
                V[0] = toupper(V[0]);
                break;
            }
            case 4:
            {
                printf("---------------\n");
                printf("Tranformando la primera letra de cada palabra en mayuscula...\n");
                for (contador = 0; contador < L; contador++)
                {
                    V[contador] = tolower(V[contador]);
                }
                V[0] = toupper(V[0]);
                for (contador = 0; contador < L; contador++)
                {
                    if(V[contador - 1] == 32)
                    V[contador] = toupper(V[contador]);
                }
                break;
            }
            case 5:
            {
                printf("---------------\n");
                printf("Saliendo...\n");
                break;
            }
        }
    }
}
