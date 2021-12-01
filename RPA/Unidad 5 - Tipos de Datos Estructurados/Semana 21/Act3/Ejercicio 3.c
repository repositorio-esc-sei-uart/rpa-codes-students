/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 21
Tema: Estructuras y Tipos derivados

Descripcion:
Un tipo de dato Fecha deriva de la siguente estructura:

struct TFecha
{
int dd;
int mm;
int aaaa;
};

Solicitar dos fechas al usuario, verificar si pertenecen a un año bisiesto y mostrar las fechas en formato
"<dia> de <nombre_mes> de <año>" con los siguientes requisitos para su solución:
a. Crear la función Fecha leerFecha() que obtenga una fecha por teclado.
b. Reutilizar su función int esBisiesto(int aa) resuelta como ejercicio 4 de clase 12. Luego invocar con el campo de su variable tipo Fecha.
c. Rediseñar la función formatearFecha resuelta como ejercicio 5 de clase 12, como void formatearFecha(Fecha f).

Autor: Angel Alvarez
Año: 2021
*/
//.h
#include <stdio.h>
#include <ctype.h>
#include <string.h>
//Struct
typedef struct TFecha
{
int dd;
int mm;
int aaaa;
} Fecha;
//Modulos
void saludodesiempre();
Fecha leerFecha();
int anobisiesto(int aa);
void formatearfecha(Fecha F);

int main ()
{
    //Inicio
    //Definiciones
    Fecha Fe;
    //Inicio
    saludodesiempre();
    //Entrada
    Fe = leerFecha();
    //Calculo&Salida
    formatearfecha(Fe);
    //Fin
    printf("\n");
    return 0;
}
//Modulos
void saludodesiempre()
{
    printf("Hola, mucho gusto, ahora voy a pedirle los datos de dos fechas y decirle si son bisienstas\n");
    printf("---------------\n");
    printf("Por favor, ");
}

Fecha leerFecha()
{
    Fecha F;

    printf("Ingrese el dia: ");
    scanf("%d", &F.dd);
    printf("Ingrese el mes: ");
    scanf("%d", &F.mm);
    printf("Ingrese el año: ");
    scanf("%d", &F.aaaa);

    return F;
}

int anobisiesto(int aa)
{
    int cont;
    cont = 0;
    if (aa % 4 == 0)
    {
        if (aa % 100 != 0)
        cont = 1;
    }
    if (aa % 400 == 0)
    cont = 1;
    return cont;
}

void formatearfecha(Fecha F)
{
    int bandbis = anobisiesto(F.aaaa);
    if (bandbis == 1)
        printf("El año es bisiesto\n");
    switch (F.mm)
    {
        case 1:
            if (F.dd > 0 && F.dd <= 31)
            printf("La fecha seria %d de enero de %d") , F.dd , F.aaaa;
            else
            printf("Fecha inválida");
            break;
        case 2:
            if (bandbis == 1)
            {
                if (F.dd > 0 && F.dd <= 29)
                printf("La fecha seria %d de febrero de %d" , F.dd , F.aaaa);
                else
                printf("Fecha inválida");
            }
            else
            {
                if (F.dd > 0 && F.dd <= 28)
                printf("La fecha seria %d de febrero de %d" , F.dd , F.aaaa);
                else
                printf("Fecha inválida");
            }
            break;
        case 3:
            if (F.dd > 0 && F.dd <= 31)
            printf("La fecha seria %d de marzo de %d") , F.dd , F.aaaa;
            else
            printf("Fecha inválida");
            break;
        case 4:
            if (F.dd > 0 && F.dd <= 30)
            printf("La fecha seria %d de abril de %d") , F.dd , F.aaaa;
            else
            printf("Fecha inválida");
            break;
        case 5:
            if (F.dd > 0 && F.dd <= 31)
            printf("La fecha seria %d de mayo de %d") , F.dd , F.aaaa;
            else
            printf("Fecha inválida");
            break;
        case 6:
            if (F.dd > 0 && F.dd <= 30)
            printf("La fecha seria %d de junio de %d") , F.dd , F.aaaa;
            else
            printf("Fecha inválida");
            break;
        case 7:
            if (F.dd > 0 && F.dd <= 31)
            printf("La fecha seria %d de julio de %d") , F.dd , F.aaaa;
            else
            printf("Fecha inválida");
            break;
        case 8:
            if (F.dd > 0 && F.dd <= 31)
            printf("La fecha seria %d de agosto de %d") , F.dd , F.aaaa;
            else
            printf("Fecha inválida");
            break;
        case 9:
            if (F.dd > 0 && F.dd <= 30)
            printf("La fecha seria %d de septiembre de %d") , F.dd , F.aaaa;
            else
            printf("Fecha inválida");
            break;
        case 10:
            if (F.dd > 0 && F.dd <= 31)
            printf("La fecha seria %d de octubre de %d") , F.dd , F.aaaa;
            else
            printf("Fecha inválida");
            break;
        case 11:
            if (F.dd > 0 && F.dd <= 30)
            printf("La fecha seria %d de noviembre de %d") , F.dd , F.aaaa;
            else
            printf("Fecha inválida");
            break;
        case 12:
            if (F.dd > 0 && F.dd <= 31)
            printf("La fecha seria %d de diciembre de %d") , F.dd , F.aaaa;
            else
            printf("Fecha inválida");
            break;
        default:
            printf("Fecha inválida");
            break;
    }
}
