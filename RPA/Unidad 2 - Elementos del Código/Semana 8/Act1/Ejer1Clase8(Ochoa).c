 /**
 (1649) Resoluci�n de Problemas y Algoritmos
 Clase N� 7
 Tema: Lenguaje C

 Descripci�n: Obtener un entero por teclado y decir si es un positivo par, negativo par,
positivo impar, negativo impar, � cero

 Autor: Ochoa Andrea Daniela
 A�o:2021
 **/

#include <stdio.h>
int main(){
    int num,mod;

    printf("Ingrese un numero\n");
    scanf("%d",&num);

    mod=num%2;
    if (num==0)
    {
        printf("El numero ingresado es cero.");
    }
    else
    {
        if (num>0)
        {
            printf("El numero ingresado es positivo, ");
        }
        else
        {
            printf("El numero ingresado es negativo, ");
        }
        if (mod==0)
        {
            printf("par.");
        }
        else
        {
            printf("impar.");
        }
    }
    return 0;
}













