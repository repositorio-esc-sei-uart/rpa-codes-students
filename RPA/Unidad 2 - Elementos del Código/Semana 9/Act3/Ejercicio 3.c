/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 09
Tema: Sentencia de seleccion multiple switch

Descripcion: Ingrese 2 caracteres y procesarlas de acuerdo a un conjunto de opciones:
(1) intercambiar
(2) convertir a mayúsculas: si son letras, convertirlas a mayusculas
(3) convertir a minúsculas: si son letras, convertirlas a minúsculas
(4) si son digitos, mostrar su suma.
Autor: Angel Alvarez
Año: 2021
*/
#include <stdio.h>
#include <ctype.h>

int main ()
{
    //Definiciones
    int opcion, num1, num2, sum;
    char caracter1, caracter2, aux;
    //Inicio
    printf("Hola, mucho gusto, ahora le voy a pedir dos caracteres y le dare unas opciones para interactuar con ellas\n");
    printf("---------------\n");
    printf("Por favor, digame el primer caracter: ");
    //Entrada
    caracter1 = getc(stdin);
    fflush(stdin);
    printf("Ahora digame el segundo caracter: ");
    caracter2 = getc(stdin);
    printf("---------------\n");
    printf("su primer caracter es [%c] y el segundo es [%c]\n" , caracter1 , caracter2);
    printf("¿Que desea hacer con ellos?\n");
    printf("[1] Intercambiarlas\n");
    printf("[2] Convertirlas en mayusculas\n");
    printf("[3] Convertirlas en minusculas\n");
    printf("[4] Sumarlas (Si son digitos)\n");
    scanf("%d" , &opcion);
    printf("---------------\n");
    //Salida
    switch (opcion)
    {
        case 1:
            aux = caracter1;
            caracter1 = caracter2;
            caracter2 = aux;
            printf("Ahora el primer caracter es [%c] y el segundo es [%c]" , caracter1 , caracter2);
            break;
        case 2:
            if (isupper(caracter1)== 0)
            {
                printf("Ahora el caracter [%c] " , caracter1);
                printf("es [%c]" , toupper(caracter1));
            }
            else
            {
                printf("El primer caracter ya es mayuscula o no es una letra");
            }
            printf(" y ");
            if (isupper(caracter2)== 0)
            {
                printf("Ahora el caracter [%c] " , caracter2);
                printf("es [%c]" , toupper(caracter2));
            }
            else
            {
                printf("El segundo caracter ya es mayuscula o no es una letra");
            }
            break;
        case 3:
            if (islower(caracter1)== 0)
            {
                printf("Ahora el caracter [%c] " , caracter1);
                printf("es [%c]" , tolower(caracter1));
            }
            else
            {
                printf("El primer caracter ya es minuscula o no es una letra");
            }
            printf(" y ");
            if (islower(caracter2)== 0)
            {
                printf("Ahora el caracter [%c] " , caracter2);
                printf("es [%c]" , tolower(caracter2));
            }
            else
            {
                printf("El segundo caracter ya es minuscula o no es una letra");
            }
            break;
        case 4:
            if (isdigit(caracter1)!= 0)
            {
                if (isdigit(caracter2)!= 0)
                {
                num1 = caracter1 - 48;
                num2 = caracter2 - 48;
                sum = num1 + num2;
                printf("La suma de %d y %d es de %d" , num1 , num2 , sum);
                }
                else
                {
                printf("Uno o ambos caracteres no son digitos y no puede realizarse una suma");
                }
            }
            else
            {
                printf("Uno o ambos caracteres no son digitos y no puede realizarse una suma");
            }
            break;
        default:
            printf("No ingreso una opcion valida");
            break;
    }
}
