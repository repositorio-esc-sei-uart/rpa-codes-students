#include<stdio.h>
int main(){
int a, b, c, may,med,men, total;
printf("\n-----Eleccion presidencial-----\n");

printf("\nVotos del candidato 1:");
scanf("%d",&a);
printf("\nVotos del candidato 2:");
scanf("%d",&b);
printf("\nVotos del candidato 3:");
scanf("%d",&c);
/*Intento saber cuál de los candidatos es el de mayor voto */

    if(a>b)    //a mayor c
    {   if(a>c)   //a mayor c
        {
            if(b>c)  //
            {
                may=a;
                med=b;
                men=c;
            }
            else   //a mayor que c mayor que b
            {
                may=a;
                med=c;
                men=b;
            }
        }
        else    //c es mayor que a, a mayor que b
        {
            may=c;
            med=a;
            men=b;
        }
    }
    else   //b mayor que a
    {
        if(b>c)   //b es mayor que c
        {
            if(a>c)   //b es mayor que a, y, a en mayor que c
            {
                may=b;
                med=a;
                men=c,
            }
            else    // b es mayor que c, y, c es mayor que a
            {
                may=b;
                med=c;
                men=a;
            }
        }
        else     // c es mayor que b, y, b es mayor que a
        {
            may=c;
            med=b;
            men=a;
        }
    }


    printf("\nEl candidato con mayor voto es el: %d.\n",may);

/*Ganar Primera vuelta*/

total=a+b+c;





























