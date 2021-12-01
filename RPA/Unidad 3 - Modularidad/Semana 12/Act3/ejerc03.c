/**********
  (1649) Resolución de Problemas y Algoritmos.
  Clase N°: 12
  Tema: El lenguaje C

  Descripción: El Mayor.
  Autor: Gabriel Isaías Rivera.
  Año: 2021
  **********/

  #include <stdio.h>

  int mayor (int a, int b, int c);

  int main ()
  {
      int num1, num2, num3;
      printf (" Ingrese tres números enteros y le diré cual es el mayor. \n");
      printf ("Primer número: \n");
      scanf ("%d", &num1);
      printf ("Segundo número: \n");
      scanf ("%d", &num2);
      printf ("Tercer número: \n");
      scanf ("%d", &num3);
      mayor (num1, num2, num3);


      return 0;
  }

   int mayor (int a, int b, int c)
   {
       if (a > b && a > c)
          printf (" %d es el mayor.\n", a);
       else
        if (b > c)
           printf (" %d es el mayor.\n", b);
        else
            printf ("%d es el mayor.\n", c);

    return mayor;
   }
