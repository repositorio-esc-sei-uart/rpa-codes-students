/**********
  (1649) Resolución de Problemas y Algoritmos.
  Clase N°: 10
  Tema: El lenguaje C

  Descripción: Número aleatorios.
  Autor: Gabriel Isaías Rivera.
  Año: 2021
  **********/

  #include <stdio.h>
  #include <stdlib.h>
  #include <time.h>

  int main()

  {
      int azar, vueltas,cant,band,band2;
      band=-50;
      band2=50;
      srand(time(0));

      printf ("Hola, cuántos números al azar entre [-50,50] desea? \n");
      scanf ("%d", &vueltas);
      for ( cant=1; cant<=vueltas; cant++)
      {azar= -50+ rand()%(50-(-50+1));
      printf ("Número: %d\n", azar);
      if (azar>band)
        band=azar;
      if (azar<band2)
        band2=azar;}

      printf ("El número más alto es: %d \n", band);
      printf ("El número más bajo es: %d \n", band2);

  }
