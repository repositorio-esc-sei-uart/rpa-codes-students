/**********
  (1649) Resoluci�n de Problemas y Algoritmos.
  Clase N�: 10
  Tema: El lenguaje C

  Descripci�n: Promedio.
  Autor: Gabriel Isa�as Rivera.
  A�o: 2021
  **********/

  #include <stdio.h>
  #include <stdlib.h>
  #include <time.h>

  int main()

  {
      float numazar, suma, promedio;
      int cont, num;
      srand(time(0));

      printf("Hola, voy a tirar 20 n�meros entre 0 y 1 al azar. \n ");
      printf("Luego sacar� el promedio. \n");
      for (cont=1; cont <=20;cont++)
      {
          numazar= (rand()%100)/100.0;
          printf("Aleatorio entre 0.0 y 1.0: %.3f \n", numazar);
          suma=suma+numazar;
          promedio= suma/20;
          num=num+1;


      }
      //printf ("La suma total es de: %f \n", suma);
      printf ("Y el promedio es: %f \n", promedio);





  }
