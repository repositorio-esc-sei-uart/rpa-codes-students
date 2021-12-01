/**********
  (1649) Resolución de Problemas y Algoritmos.
  Clase N°: 10
  Tema: El lenguaje C

  Descripción: Secuencia de números impares.
  Autor: Gabriel Isaías Rivera.
  Año: 2021
  **********/

  #include <stdio.h>
  int main()
{
      short suma=0, num=0;
      long producto=1;


      printf ("Hola, voy a generar números impares hasta 11. \n");
      for (num=1; num<=11; num+=2)
      {
        printf("Número: %d \n", num);
        suma= suma+num;
        producto= producto*num;

      }

      printf ("La suma de los números es: %d \n", suma);
      printf ("El producto de todos los números es: %d \n", producto);


}



