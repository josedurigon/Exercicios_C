#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{

    setlocale(LC_ALL, "portuguese_Brazil");


    int numero, divisao;



    printf("\nVerificador de par ou impar");
    printf("\nDigite seu numero: ");
    scanf("%d", &numero);

    divisao= numero%2;

    if (divisao==0)
    {
        printf("\nSeu numero � par");
    }
    else
    {
        printf("\nSeu n�mero � �mpar");
    }


    return 0;
}
