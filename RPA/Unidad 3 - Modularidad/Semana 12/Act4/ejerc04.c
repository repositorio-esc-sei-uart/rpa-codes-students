/**********
  (1649) Resoluci�n de Problemas y Algoritmos.
  Clase N�: 12
  Tema: El lenguaje C

  Descripci�n: A�o bisiesto.
  Autor: Gabriel Isa�as Rivera.
  A�o: 2021
  **********/

  #include <stdio.h>

  int esbisiesto(int aa);

  int main ()
  {
      int aa=0;
      printf ("Hola, ingrese un a�o y le dir� si es bisiesto. \n");
      scanf ("%d", &aa);
      esbisiesto(aa);

      return 0;
  }

  int esbisiesto(int aa)
  {
     if (aa%4==0 && aa%100!=0 || aa%400==0)
        printf ("Es un a�o bisiesto. \n");
     else
        printf ("No es un a�o bisiesto. \n");

    return esbisiesto;
  }
