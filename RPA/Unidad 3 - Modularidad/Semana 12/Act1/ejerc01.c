/**********
  (1649) Resolución de Problemas y Algoritmos.
  Clase N°: 12
  Tema: El lenguaje C

  Descripción: Factorial.
  Autor: Gabriel Isaías Rivera.
  Año: 2021
  **********/

  #include <stdio.h>
  //Declaración de función.
  long factorial (int num);

  int main()
  {
      // Variables locales de main:
      int a;
      long fact;

      printf ("Por favor ingrese el número a factorizar. \n");
      scanf ("%d", &a);
      //Invocación de la función.
      fact=factorial (a);
      printf (" El factorial del número es: %ld \n", fact);

      return 0;
  }

  //Definición de la función.
  long factorial (int num)
  {
      long factorial=1;
      int i=1;
      for (i=1; i<=num; i++)
        factorial=factorial*i;
      return factorial;
  }
