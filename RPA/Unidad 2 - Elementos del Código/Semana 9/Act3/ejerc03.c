/**********
  (1649) Resolución de Problemas y Algoritmos.
  Clase N°: 09
  Tema: El lenguaje C

  Descripción: Letras y dígitos.
  Autor: Gabriel Isaías Rivera.
  Año: 2021
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
       printf ("Escoja una opción del menú: \n");
       printf (" [1] Intercambiar. \n");
       printf (" [2] Convertir a mayúscula. \n");
       printf (" [3] Convertir a minúscula. \n");
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
        printf (" Conversión a mayúscula: %c \n", toupper (a));
        printf (" Conversión a mayúscula: %c \n", toupper (b));
        break;

       case 3:
        printf (" Conversión a mayúscula: %c \n", tolower (a));
        printf (" Conversión a mayúscula: %c \n", tolower (b));
        break;

       case 4:
            if (isdigit (a), isdigit (b))
            suma=a+b;
            printf ("La suma es: %d \n", suma);
            break;

       default: printf (" La opción es inválida.");


       }



  }


