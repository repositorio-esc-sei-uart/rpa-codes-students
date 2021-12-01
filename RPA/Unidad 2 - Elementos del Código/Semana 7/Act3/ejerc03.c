/**********
  (1649) Resolución de Problemas y Algoritmos.
  Clase N°: 07
  Tema: El lenguaje C

  Descripción: Intercambio de valores.
  Autor: Gabriel Isaías Rivera.
  Año: 2021
  **********/

  #include <stdio.h>


  int main()

  {
      // Variables.
      int a, b, c;
      // Variable auxiliar.
      int aux;

      // Ingreso de valores.
      printf ("Hola, voy a intercambiar los valores entre 3 variantes. \n");
      printf("Los valores iniciales son: a=2, b=10 y c=40 : \n");
      a=2;
      b=10;
      c=40;
      aux=0;

      // Intercambio de valores.
      aux=a;
      a=b;
      b=c;
      c=aux;

      // Salida con nuevos valores.
      printf ("Los nuevos valores son: \n");
      printf("a= %d \n", a);
      printf("b= %d \n", b);
      printf("c= %d ", c);

  }
