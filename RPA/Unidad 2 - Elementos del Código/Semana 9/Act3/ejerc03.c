/**********
  (1649) Resoluci�n de Problemas y Algoritmos.
  Clase N�: 09
  Tema: El lenguaje C

  Descripci�n: Letras y d�gitos.
  Autor: Gabriel Isa�as Rivera.
  A�o: 2021
  **********/

  #include <stdio.h>
  #include <ctype.h>

  int main ()
  {
      char a, b, aux;
      int opcion, suma;
       printf (" Hola por favor ingrese el primer caracter. \n");
       scanf ("%c", &a);
       fflush (stdin);
       printf (" Ahora ingrese el segundo caracter. \n");
       scanf ("%c", &b);
       printf ("Escoja una opci�n del men�: \n");
       printf (" [1] Intercambiar. \n");
       printf (" [2] Convertir a may�scula. \n");
       printf (" [3] Convertir a min�scula. \n");
       printf (" [4] Sumar. \n");
       scanf ("%d", &opcion);

       switch (opcion)
       {
       case 1:
        aux=a;
        a=b;
        b=aux;
        printf ("El nuevo orden ahora es: \n");
        printf ("%c \n", a);
        printf ("%c \n", b);
        break;

       case 2:
        printf (" Conversi�n a may�scula: %c \n", toupper (a));
        printf (" Conversi�n a may�scula: %c \n", toupper (b));
        break;

       case 3:
        printf (" Conversi�n a may�scula: %c \n", tolower (a));
        printf (" Conversi�n a may�scula: %c \n", tolower (b));
        break;

       case 4:
            if (isdigit (a), isdigit (b))
            suma=a+b;
            printf ("La suma es: %d \n", suma);
            break;

       default: printf (" La opci�n es inv�lida.");


       }



  }


