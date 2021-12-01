/**********
  (1649) Resoluci�n de Problemas y Algoritmos.
  Clase N�: 12
  Tema: El lenguaje C

  Descripci�n: Formatear fecha.
  Autor: Gabriel Isa�as Rivera.
  A�o: 2021
  **********/

  #include <stdio.h>

  char formatearfecha (int dia, int mes, int year);

  int main ()
  {
      int dia=0, mes=0, year=0;
      printf ("Por favor ingrese un n�mero de d�a. \n");
      scanf ("%d", &dia);
      printf ("Ahora ingrese el mes por favor. \n");
      scanf ("%d", &mes);
      printf ("Por �ltimo ingrese el a�o. \n");
      scanf ("%d", &year);
      formatearfecha(dia, mes, year);



      return 0;
  }

  char formatearfecha (int dia, int mes, int year)
  {
    switch (mes)
      {
          case 1:
            if (dia>=1 && dia<=31)
                printf ("La fecha es %d de enero de %d. \n", dia, year);
            else printf("El d�a es inv�lido. \n"); break;

          case 2:
            if (year%4==0 && year%100!=0 || year%400==0)
                if (dia>=1 && dia<=29)
                printf ("La fecha es %d de febrero de %d. \n", dia, year);
                else printf("El d�a es inv�lido. \n");
            else
                if (dia>=1 && dia<=28)
                printf ("La fecha es %d de febrero de %d. \n", dia, year);
                else printf("El d�a es inv�lido. \n"); break;

          case 3:
            if (dia>=1 && dia<=31)
                printf ("La fecha es %d de marzo de %d. \n", dia, year);
            else printf("El d�a es inv�lido. \n"); break;

          case 4:
            if (dia>=1 && dia<=30)
                printf ("La fecha es %d de abril de %d. \n", dia, year);
            else printf("El d�a es inv�lido. \n"); break;

          case 5:
            if (dia>=1 && dia<=31)
                printf ("La fecha es %d de mayo de %d. \n", dia, year);
            else printf("El d�a es inv�lido. \n"); break;

          case 6:
            if (dia>=1 && dia<=30)
                printf ("La fecha es %d de junio de %d. \n", dia, year);
            else printf("El d�a es inv�lido. \n"); break;

          case 7:
            if (dia>=1 && dia<=31)
                printf ("La fecha es %d de julio de %d. \n", dia, year);
            else printf("El d�a es inv�lido. \n"); break;

          case 8:
            if (dia>=1 && dia<=31)
                printf ("La fecha es %d de agosto de %d. \n", dia, year);
            else printf("El d�a es inv�lido. \n"); break;

          case 9:
            if (dia>=1 && dia<=30)
                printf ("La fecha es %d de septiembre de %d. \n", dia, year);
            else printf("El d�a es inv�lido. \n"); break;

          case 10:
            if (dia>=1 && dia<=31)
                printf ("La fecha es %d de octubre de %d. \n", dia, year);
            else printf("El d�a es inv�lido. \n"); break;

          case 11:
            if (dia>=1 && dia<=30)
                printf ("La fecha es %d de noviembre de %d. \n", dia, year);
            else printf("El d�a es inv�lido. \n"); break;

          case 12:
            if (dia>=1 && dia<=31)
                printf ("La fecha es %d de diciembre de %d. \n", dia, year);
            else printf("El d�a es inv�lido. \n"); break;

         default: printf ("El mes ingresado es inv�lido. \n");
      }

     return formatearfecha;

  }
