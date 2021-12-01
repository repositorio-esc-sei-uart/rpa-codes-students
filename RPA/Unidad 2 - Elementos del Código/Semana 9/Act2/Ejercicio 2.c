/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 09
Tema: Sentencia de seleccion multiple switch

Descripcion: Se requiere diseñar una calculadora donde el usuario seleccione el operador matemático que va a utilizar
(suma, resta, multiplicación, división y modulo) para operar con dos valores (A y B) ingresados por pantalla y muestre el resultado.
Autor: Angel Alvarez
Año: 2021
*/
#include <stdio.h>

int main ()
{
    //Definiciones
    int num1, num2, igual;
    char opcion;
    //Inicio
    printf("Hola, mucho gusto, ahora le voy a pedir una opcion para hacer un calculo matematico\n");
    printf("---------------\n");
    printf("Por favor, digame el calculo que desea hacer (ingrese el caracter correspondiente)\n");
    printf("[1] Suma\n");
    printf("[2] Resta\n");
    printf("[3] Multiplicacion\n");
    printf("[4] Division\n");
    printf("[5] Modulo\n");
    //Entrada
    scanf("%c" , &opcion);
    switch (opcion)
    {
        case '1':
        case '+':
            printf("Eligio suma\n");
            printf("---------------\n");
            printf("Por favor ingrese el primer numero: ");
            scanf("%d" , &num1);
            printf("ahora ingrese el segundo numero: ");
            scanf("%d" , &num2);
            igual = num1 + num2;
            printf("El resultado de %d mas %d es de %d" , num1 , num2 , igual);
            break;
        case '2':
        case '-':
            printf("Eligio resta\n");
            printf("---------------\n");
            printf("Por favor ingrese el primer numero: ");
            scanf("%d" , &num1);
            printf("ahora ingrese el segundo numero: ");
            scanf("%d" , &num2);
            igual = num1 - num2;
            printf("El resultado de %d menos %d es de %d" , num1 , num2 , igual);
            break;
        case '3':
        case '*':
            printf("Eligio multiplicacion\n");
            printf("---------------\n");
            printf("Por favor ingrese el primer numero: ");
            scanf("%d" , &num1);
            printf("ahora ingrese el segundo numero: ");
            scanf("%d" , &num2);
            igual = num1 * num2;
            printf("El resultado de %d multiplicado %d es de %d" , num1 , num2 , igual);
            break;
        case '4':
        case '/':
            printf("Eligio division\n");
            printf("---------------\n");
            printf("Por favor ingrese el primer numero: ");
            scanf("%d" , &num1);
            printf("ahora ingrese el segundo numero: ");
            scanf("%d" , &num2);
            if (num1 == 0 || num2 == 0)
            {
                printf("No es posible divivir por 0");
            }
            else
            {
                igual = num1 / num2;
                printf("El resultado de %d dividido %d es de %d" , num1 , num2 , igual);
            }
            break;
        case '5':
        case '%':
            printf("Eligio modulo\n");
            printf("---------------\n");
            printf("Por favor ingrese el primer numero: ");
            scanf("%d" , &num1);
            printf("ahora ingrese el segundo numero: ");
            scanf("%d" , &num2);
            if (num1 == 0 || num2 == 0)
            {
                printf("No es posible sacar modulo de 0");
            }
            else
            {
                igual = num1 % num2;
                printf("El resultado de %d modulo %d es de %d" , num1 , num2 , igual);
            }
            break;
        default:
            printf("No ingreso una opcion valida");
            break;
    }
}
