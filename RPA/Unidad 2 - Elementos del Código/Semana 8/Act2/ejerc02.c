/**********
  (1649) Resolución de Problemas y Algoritmos.
  Clase N°: 08
  Tema: El lenguaje C

  Descripción: Pago de compra.
  Autor: Gabriel Isaías Rivera.
  Año: 2021
  **********/

  #include <stdio.h>

  int main()
  {
      float recargo=0, precio=0;
      char tarjeta;


      printf ("Cuanto es el precio a pagar? \n");
      scanf ("%f", &precio);

      if (precio<=0)
        printf ("El precio ingresado es invalido.");
      else
      {

        printf ("Si desea abonar con tarjeta de credito ingrese [T]\n");
        fflush(stdin);
        scanf ("%c", &tarjeta);


      }


       if (tarjeta=='T')

       {
           recargo=precio*0.1;
           recargo= precio+recargo;
           printf ("El precio a pagar esA: %.2f \n", recargo);
       }
        else printf ("El precio a pagar es: %.2f \n", precio);


  }
