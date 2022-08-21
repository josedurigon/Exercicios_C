#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>


int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("\nPrograma para calcular lados de triangulos!");

    float lado1, lado2, lado3, perimetro;
    int n,t;
    printf("\nInsira os lados do triangulo...");
    n=0;
    t=4;
    while(n<t)
    {
        printf("\n*");
        n =n+1;
        sleep(1);
    }
    printf("\nPrimeiro lado: ");
    scanf("%f", &lado1);
    if (lado1<=0)
    {
        printf("\n--------ERRO!!---------");
    }
    else
    {
        printf("\nSegundo lado: ");
        scanf("%f%", &lado2);
        fflush(stdout);
        if(lado2<=0)
        {
            printf("\n-------ERRO!!!--------");
        }
        else
            {
                printf("\nLado 3: ");
                scanf("%f", &lado3);
                fflush(stdout);
                if (lado3<=0)
                {
                    printf("\n\n ----------ERRO----------");
                }
                else
                    {
                        perimetro= lado1+lado2+lado3;
                        printf("\n o perimetro é de %f.2 cm", perimetro);
                    }
            }
    }


}
