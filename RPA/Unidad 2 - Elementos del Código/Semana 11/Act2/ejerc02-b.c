/**********
  (1649) Resoluci�n de Problemas y Algoritmos.
  Clase N�: 11
  Tema: El lenguaje C

  Descripci�n: Aleatorios.
  Autor: Gabriel Isa�as Rivera.
  A�o: 2021
  **********/

  #include <stdio.h>
  #include <stdlib.h>
  #include <time.h>


  int main()
  {
      int pares, total,n ;
      pares=0;
      total=0;
      srand(time(0));

    printf("Hola, de los n�meros generados al azar en el rango [1-100], estos son los pares.\n ");
    printf("(cuando llega a 20 pares corta la generaci�n de n�meros) \n");
    do {n= 1+ rand()%(100-(1+1));
      total++;
      if (n%2==0)
      {pares=pares+1;
      printf("%3d \n", n);}
      }
    while (pares<20);
    printf ("La cantidad de aleatorios generados es: %d", total);

  }
