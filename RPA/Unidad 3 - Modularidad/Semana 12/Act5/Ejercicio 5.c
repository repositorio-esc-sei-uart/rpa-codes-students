/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 12
Tema: Funciones en C

Descripcion: Dise�ar una funci�n denominada [formatearfecha] que reciba como par�metros dia, mes, a�o, expresados en n�meros enteros.
Verificar si es una fecha v�lida y visualizar por pantalla la fecha con un formato "<dia> de <nombre_mes> de <a�o>"
o caso contrario mostrar un mensaje de "Fecha inv�lida".
Por ejemplo: si dia=29, mes=06, a�o=2020, entonces muestre mensaje "29 de junio de 2020".
Utilice la funci�n del ejercicio 4 para validar el d�a 29 de febrero.
Autor: Angel Alvarez
A�o: 2021
*/
#include <stdio.h>

void saludodesiempre();
int formatearfecha(int dia , int mes , int ano);
int anobisiesto(int num);

int main ()
{
    //Definiciones
    int dia, mes, ano;
    //Inicio
    saludodesiempre();
    //Entrada
    scanf("%d" , &dia);
    printf("ingrese el mes ");
    scanf("%d" , &mes);
    printf("ingrese el a�o ");
    scanf("%d" , &ano);
    //Calculo
    formatearfecha(dia , mes , ano);
    //Fin
    return 0;
}
//Modulos
int formatearfecha(int dia , int mes , int ano)
{
    int bandbis = anobisiesto(ano);
    switch (mes)
    {
        case 1:
            if (dia > 0 && dia <= 31)
            printf("La fecha seria %d de enero de %d") , dia , ano;
            else
            printf("Fecha inv�lida");
            break;
        case 2:
            if (bandbis == 1)
            {
                if (dia > 0 && dia <= 29)
                printf("La fecha seria %d de febrero de %d" , dia , ano);
                else
                printf("Fecha inv�lida");
            }
            else
            {
                if (dia > 0 && dia <= 28)
                printf("La fecha seria %d de febrero de %d" , dia , ano);
                else
                printf("Fecha inv�lida");
            }
            break;
        case 3:
            if (dia > 0 && dia <= 31)
            printf("La fecha seria %d de marzo de %d") , dia , ano;
            else
            printf("Fecha inv�lida");
            break;
        case 4:
            if (dia > 0 && dia <= 30)
            printf("La fecha seria %d de abril de %d") , dia , ano;
            else
            printf("Fecha inv�lida");
            break;
        case 5:
            if (dia > 0 && dia <= 31)
            printf("La fecha seria %d de mayo de %d") , dia , ano;
            else
            printf("Fecha inv�lida");
            break;
        case 6:
            if (dia > 0 && dia <= 30)
            printf("La fecha seria %d de junio de %d") , dia , ano;
            else
            printf("Fecha inv�lida");
            break;
        case 7:
            if (dia > 0 && dia <= 31)
            printf("La fecha seria %d de julio de %d") , dia , ano;
            else
            printf("Fecha inv�lida");
            break;
        case 8:
            if (dia > 0 && dia <= 31)
            printf("La fecha seria %d de agosto de %d") , dia , ano;
            else
            printf("Fecha inv�lida");
            break;
        case 9:
            if (dia > 0 && dia <= 30)
            printf("La fecha seria %d de septiembre de %d") , dia , ano;
            else
            printf("Fecha inv�lida");
            break;
        case 10:
            if (dia > 0 && dia <= 31)
            printf("La fecha seria %d de octubre de %d") , dia , ano;
            else
            printf("Fecha inv�lida");
            break;
        case 11:
            if (dia > 0 && dia <= 30)
            printf("La fecha seria %d de noviembre de %d") , dia , ano;
            else
            printf("Fecha inv�lida");
            break;
        case 12:
            if (dia > 0 && dia <= 31)
            printf("La fecha seria %d de diciembre de %d") , dia , ano;
            else
            printf("Fecha inv�lida");
            break;
        default:
            printf("Fecha inv�lida");
            break;
    }
}
int anobisiesto(int num)
{
    int cont;
    cont = 0;
    if (num % 4 == 0)
    {
        if (num % 100 != 0)
        cont = 1;
    }
    if (num % 400 == 0)
    cont = 1;
    return cont;
}
void saludodesiempre()
{
    printf("Hola, mucho gusto, ahora voy a pedirle un dia, un mes, y un a�o y le dire si es valido o no\n");
    printf("---------------\n");
    printf("Por favor, ingrese el dia ");
}
