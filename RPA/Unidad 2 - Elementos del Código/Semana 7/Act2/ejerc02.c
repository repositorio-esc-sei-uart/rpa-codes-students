/**********
  (1649) Resolución de Problemas y Algoritmos.
  Clase N°: 07
  Tema: El lenguaje C

  Descripción: Operaciones algebraicas con dos números enteros.
  Autor: Gabriel Isaías Rivera.
  Año: 2021
  **********/

  #include <stdio.h>

  int main()
  {
      // Variables.
      int num1=0, num2=0, suma=0, resta=0, multiplicacion=0, modulo=0;
      float division=0;

      // Ingreso de variables.
      printf ("Hola, voy a realizar operaciones aritmeticas con dos numeros enteros igresados por teclado. \n");
      printf ("Ingrese un numero entero: ");
      scanf ("%d", &num1);
      printf ("Ingrese otro numero entero: ");
      scanf ("%d", &num2);

      // Operaciones.
      suma = num1+num2;
      resta = num1-num2;
      multiplicacion = num1*num2;
      division = (float)num1/(float)num2;
      modulo = num1%num2;

      // Salidas.
      printf ("La suma es :%d \n", suma);
      printf ("La resta es :%d \n", resta);
      printf ("La multiplicacion es : %d \n", multiplicacion);
      printf ("La division es : %.2f \n", division);
      printf ("El resto es: %d", modulo);



  }
