/**********
  (1649) Resolución de Problemas y Algoritmos.
  Clase N°: 08
  Tema: El lenguaje C

  Descripción: Definiendo el entero.
  Autor: Gabriel Isaías Rivera.
  Año: 2021
  **********/

  #include <stdio.h>

  int main ()

  {
      int a=0;
      printf ("Hola, ingrese un numero entero por favor. \n");
      scanf ("%d", &a);

      if (a==0)
         printf ("El valor ingresado es cero.\n");
      else
      {
        if (a<0)
           printf ("El valor ingresado es negativo. \n");
        else
           printf ("El valor ingresado es positivo. \n");
      }

      if (a%2==0)
         printf ("Y el numero es par. \n");
      else
        printf ("Y el numero es impar.");

  }

