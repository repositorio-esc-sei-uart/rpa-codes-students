/**********
  (1649) Resoluci�n de Problemas y Algoritmos.
  Clase N�: 11
  Tema: El lenguaje C

  Descripci�n: Adivinar el n�mero.
  Autor: Gabriel Isa�as Rivera.
  A�o: 2021
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
      printf ("Tiene 10 intentos para adivinar el n�mero en el rango [1-60].\n");
      printf ("Ingrese el primer n�mero.\n");
      scanf ("%d", &num);


       while (num!=numazar && intento<10)
       {if (num<=0 || num>60)
            printf("El n�mero ingresado es inv�lido. \n");
        if (num<numazar && (num>0 && num<=60) )
            printf("El n�mero es m�s alto. \n");
        if (num>numazar && (num>0 && num<=60) )
            printf ("El n�mero es m�s bajo. \n");
        oport--;
        printf(" Le quedan %d, intentos. \n", oport);
        intento++;
        scanf ("%d", &num);
       }
      if (num=numazar)
        printf("Felicitaciones! Has conseguido adivinar el n�mero en %d intentos. \n", intento);


  }
