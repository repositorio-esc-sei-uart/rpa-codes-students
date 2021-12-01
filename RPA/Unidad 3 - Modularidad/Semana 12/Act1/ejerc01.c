/**********
  (1649) Resoluci�n de Problemas y Algoritmos.
  Clase N�: 12
  Tema: El lenguaje C

  Descripci�n: Factorial.
  Autor: Gabriel Isa�as Rivera.
  A�o: 2021
  **********/

  #include <stdio.h>
  //Declaraci�n de funci�n.
  long factorial (int num);

  int main()
  {
      // Variables locales de main:
      int a;
      long fact;

      printf ("Por favor ingrese el n�mero a factorizar. \n");
      scanf ("%d", &a);
      //Invocaci�n de la funci�n.
      fact=factorial (a);
      printf (" El factorial del n�mero es: %ld \n", fact);

      return 0;
  }

  //Definici�n de la funci�n.
  long factorial (int num)
  {
      long factorial=1;
      int i=1;
      for (i=1; i<=num; i++)
        factorial=factorial*i;
      return factorial;
  }
