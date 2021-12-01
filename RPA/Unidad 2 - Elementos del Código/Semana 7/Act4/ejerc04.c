/**********
  (1649) Resolución de Problemas y Algoritmos.
  Clase N°: 07
  Tema: El lenguaje C

  Descripción: Intercambio de caracteres.
  Autor: Gabriel Isaías Rivera.
  Año: 2021
  **********/

  #include <stdio.h>

  int main()

  {
      // Variables.
      char car1, car2;
      // Variable auxiliar.
      char aux;

      // Ingreso de variables.
      printf("Hola, ingrese dos caracteres por favor. \n");
      printf("El primer caracter es: ");
      scanf("%c", &car1);
      printf("El segundo caracter es: ");
      fflush(stdin);
      scanf("%c", &car2);

      // Intercambio y muestra de resultado.
      aux=car1;
      car1=car2;
      car2=aux;
      printf("Ahora los voy a intercambiar: \n");
      printf("El primer caracter ahora es: %c \n", car1);
      printf("Y el segundo caracter es: %c", car2);

  }
