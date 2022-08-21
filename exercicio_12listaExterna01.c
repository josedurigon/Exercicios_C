#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    int saque;
    int valor;
    float divisao;

    printf("\nQuanto você deseja sacar? Escolha uma das alternativas abaixo: ");
    printf("\n [1]-R$1");
    printf("\n [2]-R$2");
    printf("\n [3]-R$5");
    printf("\n [4]-R$10");
    printf("\n [5]-R$20");
    printf("\n [6]-R$50");
    printf("\n [7]-R$100");
    printf("\n [8]-R$200");
    printf("\n [9]- Outro valor\n");

    scanf("%d", &saque);
    fflush(stdout);

    switch(saque)
    {
        case 1:
            printf("\n R$1");
            break;
        case 2:
            printf("\n R$2");
            break;
        case 3:
            printf("\n R$5");
            break;
        case 4:
            printf("\n R$10");
            break;
        case 5:
            printf("\n R$20");
            break;
        case 6:
            printf("\n R$50");
            break;
        case 7:
            printf("\n R$100");
            break;
        case 8:
            printf("\n R$200");
            break;
        case 9:
            printf("\nDigite o valor que deseja retirar: ");
            scanf("%d", &valor);
            sleep(1);
            printf("\n%d", valor);
            if (valor>=200)
            {
                divisao = valor%200;
            }



    }

}
