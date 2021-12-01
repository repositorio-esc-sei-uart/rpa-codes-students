/**********
  (1649) Resolución de Problemas y Algoritmos.
  Clase N°: 09
  Tema: El lenguaje C

  Descripción: Cálculo de área de una figura.
  Autor: Gabriel Isaías Rivera.
  Año: 2021
  **********/

  #include <stdio.h>
  #define PI 3.141592

  int main ()
{
    char opcion;
    float areacir, areacuad, areatri, radio, lado, base, altura;
    printf ("Hola, elija una opción del menú por favor: \n");
    printf (" [A] Calcular área de círculo. \n");
    printf (" [B] Calcular área de cuadrado. \n");
    printf (" [C] Calcular área de triáangulo. \n");
    scanf ("%c", &opcion);

    switch (opcion)
    {

       case 'a':
       case 'A':
            printf( "El radio es: \n");
            scanf("%f", &radio);
            areacir=PI*(radio*radio);
            printf("El área del círculo es: %f\n", areacir);
             break;

       case 'b':
       case 'B':
            printf ( "Uno de los lados mide:\n");
            scanf ("%f", &lado);
            areacuad= lado*lado;
            printf (" El área del cuadrado es: %f \n", areacuad);
            break;

       case 'c':
       case 'C':
            printf ( "Ingresar la base: \n");
            scanf ("%f", &base);
            printf ( "Ahora la altura: \n");
            scanf ("%f", &altura);
            areatri= (base*altura)/2;
            printf( "El área del triángulo es: %f \n", areatri);
            break;

       default: printf ( "La opción ingresada no es válida.");




    }





}
