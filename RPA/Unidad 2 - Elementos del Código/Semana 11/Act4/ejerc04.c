/**********
  (1649) Resolución de Problemas y Algoritmos.
  Clase N°: 11
  Tema: El lenguaje C

  Descripción: Adivinar el número.
  Autor: Gabriel Isaías Rivera.
  Año: 2021
  **********/

  #include <stdio.h>
  #include <stdlib.h>
  #include <time.h>

  int main()
  {
      int num, numazar, intento, oport;
      numazar=0;
      intento=1;
      oport=10;
      srand(time(0));
      numazar= 1+rand()% (60-(1+1));

      printf ("Hola, vamos a jugar!\n");
      printf ("Tiene 10 intentos para adivinar el número en el rango [1-60].\n");
      printf ("Ingrese el primer número.\n");
      scanf ("%d", &num);


       while (num!=numazar && intento<10)
       {if (num<=0 || num>60)
            printf("El número ingresado es inválido. \n");
        if (num<numazar && (num>0 && num<=60) )
            printf("El número es más alto. \n");
        if (num>numazar && (num>0 && num<=60) )
            printf ("El número es más bajo. \n");
        oport--;
        printf(" Le quedan %d, intentos. \n", oport);
        intento++;
        scanf ("%d", &num);
       }
      if (num=numazar)
        printf("Felicitaciones! Has conseguido adivinar el número en %d intentos. \n", intento);


  }
