#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    float lado1,lado2,lado3;
    unsigned int t=0;
    float soma1, soma2, soma3;
    while(t==0)
    {

        printf("\nDigite o lado do tri�ngulo: ");
        scanf("%f", &lado1);
        fflush(stdout);

        printf("\nDigite o segundo lado do tri�ngulo: ");
        scanf("%f", &lado2);
        fflush(stdout);

        printf("\nDigite o terceiro lado do tri�ngulo: ");
        scanf("%f", &lado3);
        fflush(stdout);

        soma1= lado1 + lado2;
        soma2 = lado2+lado3;
        soma3= lado1+lado3;


        if(lado1 <= 0 || lado2<= 0 || lado3 <= 0)
        {
            t=0;
            printf("\n---------ERRO!---------");
            printf("\nPor favor, digite os lado novamente usando n�meros maiores que zero.");
        }
        else if(soma1<= lado3 || soma2<= lado1 || soma3 <= lado2)
        {
            printf("\nErro!! Os lados sao muito pequenos e insuficientes para formar um tri�ngulo minimamente aceito. Tente novamente");

        }
        else
        {
            t=1;
        }
    }

    if (lado1==lado2 && lado2==lado3)
    {
        printf("\nSeu tri�ngulo � equil�tero.");
    }
    else if (lado1==lado2 && lado1 != lado3)
    {
        printf("\nSeu tri�ngulo � is�sceles.");
    }
    else
    {
        printf("\nSeu tri�ngulo � escaleno.");
    }

    return 0;
}

