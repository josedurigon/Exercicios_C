#include<stdio.h>
#include<stdlib.h>

int main()
{
    int linha, coluna;
    printf("\nQuantas linhas de retangulo que voce quer: ");
    scanf("%d", &linha);
    fflush(stdout);


    coluna=0;
    while (coluna<=linha)
    {
        printf("O");
        coluna++;
        coluna=0;

        while(coluna<=linha)
        {
        printf("O");
        coluna++;
        }


    }





    return 0;

}


