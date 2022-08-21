#include<stdlib.h>
#include<stdio.h>

int main()
{
    int numero, dobro;


    printf("\n Insira um numero inteiro: ");
    scanf("%i", &numero);

    dobro = numero*2;
    fflush(stdout);
    printf("\nO dobro de %i é %i", numero, dobro);
    return 0;
}
