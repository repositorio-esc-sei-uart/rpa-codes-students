/**********
  (1649) Resolución de Problemas y Algoritmos.
  Clase N°: 12
  Tema: El lenguaje C

  Descripción: Aleatorios.
  Autor: Gabriel Isaías Rivera.
  Año: 2021
  **********/

  #include <stdio.h>
  #include <time.h>
  #include <stdlib.h>

  int aleatorio (int azar);

  int main()
  {
      int numazar;
      printf ("Le mostraré 30 números al azar en el rango [1-99].\n");
      printf ("Y luego le daré el promedio. \n");
      aleatorio (numazar);
      return 0;
  }

  int aleatorio (int azar)
  {
      int numazar, vuelta, suma;
      float promedio;
      suma=0;
      numazar=0;
      srand(time(0));
      for (vuelta=1; vuelta<=30; vuelta++)
      {numazar= 1+rand()% (99-(1+1));
      printf ("El número es: %d \n", numazar);
      suma=suma+numazar;}
      promedio= suma/30.0;
      printf ("El promedio es: %.2f\n", promedio);

      return aleatorio ;

  }

