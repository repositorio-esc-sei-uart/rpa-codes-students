/**********
  (1649) Resolución de Problemas y Algoritmos.
  Clase N°: 08
  Tema: El lenguaje C

  Descripción: Ecuación cuadrática.
  Autor: Gabriel Isaías Rivera.
  Año: 2021
  **********/

  #include <stdio.h>

  int main()
  {
      int a=0, b=0, c=0, d=0;

      printf ("Por favor ingrese tres valores para resolver la ecuacion cuadratica. \n");
      scanf ("%d", &a);
      scanf ("%d", &b);
      scanf ("%d", &c);

      d= b*b-4*a*c;

      if (d<0)
        printf ("La solucion no pertenece a los reales. \n");
        else
          if (d>0)
              printf ("Hay dos soluciones reales y distintas. \n");
          else printf ("Hay una unica solucion real");

  }
