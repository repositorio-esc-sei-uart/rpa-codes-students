/**********
  (1649) Resolución de Problemas y Algoritmos.
  Clase N°: 12
  Tema: El lenguaje C

  Descripción: Año bisiesto.
  Autor: Gabriel Isaías Rivera.
  Año: 2021
  **********/

  #include <stdio.h>

  int esbisiesto(int aa);

  int main ()
  {
      int aa=0;
      printf ("Hola, ingrese un año y le diré si es bisiesto. \n");
      scanf ("%d", &aa);
      esbisiesto(aa);

      return 0;
  }

  int esbisiesto(int aa)
  {
     if (aa%4==0 && aa%100!=0 || aa%400==0)
        printf ("Es un año bisiesto. \n");
     else
        printf ("No es un año bisiesto. \n");

    return esbisiesto;
  }
