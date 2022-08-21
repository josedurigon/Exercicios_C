#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    int t=0,n=90;
    while (t<=n)
    {
        funcao();
        t++;
    }


    return 0;
}

void funcao()
{
    setlocale(LC_ALL,"Portuguese_brazil");
    printf("\nFunção executada carai!!");


}
