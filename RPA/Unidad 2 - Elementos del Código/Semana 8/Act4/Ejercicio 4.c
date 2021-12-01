/**
(1649) Resolucion de problemas y algoritmos
Clase Nro: 08
Tema: Sentencia de seleccion if-else

Descripcion: EJERCICIO DESAFÍO: En una elección presidencial se presentaron 3 candidatos.
Para que un cantidato gane en primera vuelta debe obtener más votos que cada uno de los otros cantidatos. Pero eso no alcanza:
además, debe obtener al menos el 45% de todos los votos, o al menos el 40% de todos los votos y al menos un 10% más de votos que cada uno de los otros candidatos.
Un periodista requiere tener la primicia y necesita un programa para procesar datos boca de urna. Obtener la cantidad de votos de los tres candidatos y
decir si algún candidato ganó en primera vuelta o si hay segunda vuelta.
Autor: Angel Alvarez
Año: 2021
*/
#include <stdio.h>

int main ()
{
    //Definiciones (aux 45 y aux40 los voy a usar para el 45 y 40 porciento del total, y los candi_aux los voy a usar para medir el 10 porciento de los votos en la condicion de victoria 2)
    int candidato1 , candidato2 , candidato3 , total , aux45 , aux40 , candi1aux, candi2aux , candi3aux;
    //Inicio
    printf("Hola, mucho gusto, ahora voy a pedirle la cantidad de votos de 3 candidatos a presidencia y...\n");
    printf("...decirle si alguno gano o si hay segunda vuelta. \n");
    printf("--------------------\n");
    printf("Por favor, digame la cantidad de votos de el primer candidato: ");
    //Entrada
    scanf("%d" , &candidato1);
    printf("--------------------\n");
    printf("Por favor, digame la cantidad de votos de el segundo candidato: ");
    scanf("%d" , &candidato2);
    printf("--------------------\n");
    printf("Por favor, digame la cantidad de votos de el tercer candidato: ");
    scanf("%d" , &candidato3);
    printf("--------------------\n");
    //Calculo (Con los datos conseguidos voy a conseguir los totales y porcentajes para saber si alguien gana)
    total = candidato1 + candidato2 + candidato3;
    aux45 = total;
    aux40 = total;
    aux45 = total * 45 / 100;
    aux40 = total * 40 / 100;
    candi1aux = candidato1 * 90 / 100;
    candi2aux = candidato2 * 90 / 100;
    candi3aux = candidato3 * 90 / 100;
    //(Ahora voy a identificar si alguien cumple las condiciones para ganar, empezando por la condicion 1 y el candidato 1)
    if (candidato1 >= aux45)
    {
        printf("El primer candidato gano con %d de entre %d de los votos ya que obtuvo mas del 45 porciento del total" , candidato1 , total);
    }
    else
    {
        if (candidato2 >= aux45)
        {
            printf("El segundo candidato gano con %d de entre %d de los votos ya que obtuvo mas del 45 porciento del total" , candidato2 , total);
        }
        else
        {
            if (candidato3 >= aux45)
            {
                printf("El tercer candidato gano con %d de entre %d de los votos ya que obtuvo mas del 45 porciento del total" , candidato3 , total);
            }
            else
            {
                if (candidato1 >= aux40 && candi1aux >= candidato2 && candi1aux >= candidato3)
                {
                    printf("El primer candidato gano con %d de entre %d de los votos ya que obtuvo mas del...\n" , candidato1 , total);
                    printf("...40 porciento del total y un 10 porciento mas que sus rivales");
                }
                else
                {
                    if (candidato2 >= aux40 && candi2aux >= candidato1 && candi2aux >= candidato3)
                    {
                        printf("El segundo candidato gano con %d de entre %d de los votos ya que obtuvo mas del...\n"  , candidato2 , total);
                        printf("...40 porciento del total 10 porciento mas que sus rivales");
                    }
                    else
                    {
                        if (candidato3 >= aux40 && candi3aux >= candidato1 && candi3aux >= candidato2)
                        {
                            printf("El tercer candidato gano con %d de entre %d de los votos ya que obtuvo mas del...\n" , candidato3 , total);
                            printf("...40 porciento del total y un 10 porciento mas que sus rivales");
                        }
                        else
                        {
                            printf("No gano nadie y hay segunda vuelta");
                        }
                    }
                }
            }
        }
    }
}
