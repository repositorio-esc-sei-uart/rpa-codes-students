/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 09
Tema: Sentencia de seleccion multiple switch

Descripcion: Escriba un programa que permita elegir una opción de menú para el cálculo de  área de una figura: a-círculo, b-cuadrado, c-triángulo.
Una vez elegida la opción, se le debe solicitar los datos necesarios para calcular el área de la figura elegida y mostrar el resultado por pantalla.

Autor: Angel Alvarez
Año: 2021
*/
#include <stdio.h>

//Constante
#define PI 3.141592

int main ()
{
    //Definiciones
    float num1, num2, area, aux;
    char opcion;
    //Inicio
    printf("Hola, mucho gusto, ahora le voy a pedir una opcion para medir el area de un circulo, cuadrado, o triangulo\n");
    printf("---------------\n");
    printf("Por favor, digame la figura que desea (ingrese el caracter correspondiente)\n");
    printf("[A] Circulo\n");
    printf("[B] Cuadrado\n");
    printf("[C] Triangulo\n");
    //Entrada
    scanf("%c" , &opcion);
    switch (opcion)
    {
        case 'A':
        case 'a':
            printf("Eligio circulo\n");
            printf("---------------\n");
            //num1 es el diametro y num2 es el radio
            printf("¿Cual es el diametro de su circulo?\n");
            scanf("%f" , &num1);
            num2 = num1 / 2;
            area = PI * (num2 * num2);
            printf("El area de su circulo es de: %f" , area);
            break;
        case 'B':
        case 'b':
            printf("Eligio cuadrado\n");
            printf("---------------\n");
            printf("¿canto miden los lados de su cuadrado?");
            scanf("%f" , &num1);
            area = num1 * num1;
            printf("El area de su cuadrado es de: %f" , area);
            break;
        case 'C':
        case 'c':
            printf("Eligio triangulo\n");
            printf("---------------\n");
            //num1 es la altura y num2 es el ancho
            printf("¿Cual es la altura de su triangulo?\n");
            scanf("%f" , &num1);
            printf("¿Y su ancho?\n");
            scanf("%f" , &num2);
            aux = num1 * num2;
            area = aux / 2;
            printf("El area de su triangulo es de: %f" , area);
            break;
        default:
            printf("Ingreso un caracter invalido");
            break;
    }
}
