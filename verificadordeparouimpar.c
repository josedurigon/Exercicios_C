#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    int numero, divisao;
    printf("\nNúmero: ");
    scanf("%d", &numero);
    fflush(stdout);


    int n,t;
    n=0;
    t=3;
    printf("\n\n----------VERIFICANDO----------");

    while (n<t)
    {
        printf("\n\t\t*");
        n= n+1;
        sleep(1);
    }
     divisao = numero%2;
     if (divisao==0)
     {
         printf("\nO numero %.1d é par", numero);

     }
     else
     {
         printf("\nO numero %d é ímpar", numero);
     }

}
