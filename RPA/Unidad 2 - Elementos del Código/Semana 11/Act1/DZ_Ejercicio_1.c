/**

(1649) Resolucion de problemas y algoritmos
Clase Nro: 11
Tema: le lenguaje C

Descripcion: Ingresar números enteros hasta que se hayan obtenido 5 números positivos
múltiplos de 3.

Autor: DAVID ZERPA
Año: 2021
*/
#include <stdio.h>
int main()
{
int num=0, cont=0;
printf("Ingrese numeros enteros positivos \n");
printf("El programa se detendra cuando se haya ingresado 5 multiplos positivos de 3 \n");
printf("Numeros ingresados: \n");
    //  VERSION WHILE
    while(cont<5)
    {
    scanf("%d", &num);
    if((num>0) && (num%3==0))
        {
        cont++;
        }
    }
    // VERSION DO-WHILE
    /**
do
    {
    scanf("%d", &num);
    if((num>0) && (num%3==0))
        {
        cont++;
        }
    }
while (cont<5);
 */
    return 0;
}
