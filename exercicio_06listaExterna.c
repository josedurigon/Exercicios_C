#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<locale.h>


void clear_buffer(void)
{
    int c=0;
    while((c=getchar()) != '\n' && c != EOF) {}
    return;
}

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    float valor1, valor2, valor3;

    printf("\nDigite um número real:  ");
    scanf("%f", &valor1);
    fflush(stdin);

    printf("\nDigite outro número real:  ");
    scanf("%f", &valor2);
    fflush(stdin);

    printf("\nDigite outro número real:  ");
    scanf("%f", &valor3);
    fflush(stdin);
    fflush(stdout);

    clear_buffer();

    if (valor1>valor2 && valor1>valor3)
    {
        printf("%f", valor1);
        if (valor2>valor3 && valor3<valor1)
        {
            printf("%f", valor3);

            if(valor2<valor1 && valor2>valor3)
            {
                printf("%f", valor2);
            }
        }
    }






    return 0;
}
