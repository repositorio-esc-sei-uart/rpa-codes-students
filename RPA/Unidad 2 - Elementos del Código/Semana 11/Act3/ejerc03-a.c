/**********
  (1649) Resoluci�n de Problemas y Algoritmos.
  Clase N�: 11
  Tema: El lenguaje C

  Descripci�n: Potencia y factorial.
  Autor: Gabriel Isa�as Rivera.
  A�o: 2021
  **********/

  #include <stdio.h>
  #include <math.h>


  int main()

  {
        int opc, base, expo, i, num,n,pot, potencia;
        opc=0;
        long fact;
        do{
          printf ("Seleccione una opci�n del men�: \n");
          printf ("[1] Calcular la potencia. \n");
          printf ("[2] Calcular factorial. \n");
          printf ("[3] Salir. \n");
          scanf ("%d", &opc);
        switch (opc)
        {
        case 1:
            printf ("Ingrese la base. \n");
            scanf ("%d", &base);
            printf ("Ingrese el exponente. \n");
            scanf ("%d", &expo);
            //n=1;
            //while (n<expo)
            //{  potencia= base*base;
            //potencia= potencia*base;
            //n++;}
            pot=pow(base, expo);
            printf ("La poencia es: %d \n", pot);
            break;
        case 2:
        fact=1;
        i=1;
        printf("Ingrese un n�mero. \n");
        scanf("%d", & num);
        for (i=1; i<=num; i++)
        fact=fact*i;
        printf("El factorial es: %d \n", fact);
        break;
        }
          } while (opc!=3);
              printf("Usted ha salido del men�. \n");
  }


