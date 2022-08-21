#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<locale.h>
//Terminar

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    float quantidade,divisao;
    int cedulas;
    int t,n;


    printf("\n\t\tQuanto você deseja sacar?");
    scanf("%f", &quantidade);
    fflush(stdout);

    t=0;
    n=4;

    while (t<=n)
    {
        t++;
        printf("\n * * * * Contando cédulas... * * * *");
        sleep(1);
    }

    divisao=quantidade%2;
    if (divisao==0)
    {
        printf("R$2")
    }

    else
        {
            divisao=quantidade%5;
            if (divisao==0)
            {
                printf("R$5");
            }
            else
            {
                divisao=quantidade%10;
                if(divisao==0)
                {
                    printf("R$10");

                }
                else
                {
                    divisao=quantidade%20;
                    if(divisao==0)
                    {
                        printf("R$20");
                    else
                    {
                        divisao=quantidade%50;
                            if(divisao==0)
                            {
                                printf("R$50");

                            }
                            else
                            {
                                divisao=quantidade%100;
                                if (divisao==0)
                                {
                                    printf("R$100");
                                }
                            }



                        }
                    }
                }
            }
        }

    return 0;
}
