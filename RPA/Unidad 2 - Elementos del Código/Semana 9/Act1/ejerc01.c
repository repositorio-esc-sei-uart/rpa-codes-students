/**********
  (1649) Resoluci�n de Problemas y Algoritmos.
  Clase N�: 09
  Tema: El lenguaje C

  Descripci�n: C�lculo de �rea de una figura.
  Autor: Gabriel Isa�as Rivera.
  A�o: 2021
  **********/

  #include <stdio.h>
  #define PI 3.141592

  int main ()
{
    char opcion;
    float areacir, areacuad, areatri, radio, lado, base, altura;
    printf ("Hola, elija una opci�n del men� por favor: \n");
    printf (" [A] Calcular �rea de c�rculo. \n");
    printf (" [B] Calcular �rea de cuadrado. \n");
    printf (" [C] Calcular �rea de tri�angulo. \n");
    scanf ("%c", &opcion);

    switch (opcion)
    {

       case 'a':
       case 'A':
            printf( "El radio es: \n");
            scanf("%f", &radio);
            areacir=PI*(radio*radio);
            printf("El �rea del c�rculo es: %f\n", areacir);
             break;

       case 'b':
       case 'B':
            printf ( "Uno de los lados mide:\n");
            scanf ("%f", &lado);
            areacuad= lado*lado;
            printf (" El �rea del cuadrado es: %f \n", areacuad);
            break;

       case 'c':
       case 'C':
            printf ( "Ingresar la base: \n");
            scanf ("%f", &base);
            printf ( "Ahora la altura: \n");
            scanf ("%f", &altura);
            areatri= (base*altura)/2;
            printf( "El �rea del tri�ngulo es: %f \n", areatri);
            break;

       default: printf ( "La opci�n ingresada no es v�lida.");




    }





}
