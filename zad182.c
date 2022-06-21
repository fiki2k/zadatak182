/*  Program treba izracunat : 1 + 3^2/3^3 + 5^2/5^3 + 7^2/7^3 + ... do N koraka.  */

#include<stdio.h>
#include<math.h>

int main()
{
    int i,N;
    float suma;
    int brojac;


    printf("Unesi koliko koraka da radi : ");
    scanf("%d",&N);

    suma=0.0f;

    brojac=1;
    for(i=1;i<=N;i++)
    {
        suma = suma +  ( (float)(pow(brojac,2)) / (float)(pow(brojac,3)) );
        brojac+=2;
    }


    printf("\nUkupna suma je : %f\n",suma);

    return 0;
}
