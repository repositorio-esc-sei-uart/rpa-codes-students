/**********
  (1649) Resoluci�n de Problemas y Algoritmos.
  Clase N�: 12
  Tema: El lenguaje C

  Descripci�n: El Mayor.
  Autor: Gabriel Isa�as Rivera.
  A�o: 2021
  **********/

  #include <stdio.h>

  int mayor (int a, int b, int c);

  int main ()
  {
      int num1, num2, num3;
      printf (" Ingrese tres n�meros enteros y le dir� cual es el mayor. \n");
      printf ("Primer n�mero: \n");
      scanf ("%d", &num1);
      printf ("Segundo n�mero: \n");
      scanf ("%d", &num2);
      printf ("Tercer n�mero: \n");
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
