/******************************************************************************

   Fazer codigo de nota
   se media menor que 5 e/ou presença menor que 75% reprova. Caso contrario aprovado

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    printf("\n\tVerificador de presença e nota");
    float nota1, nota2, nota3, media, freq;
    
    printf("\n\tInsira sua nota da P1: ");
    scanf("%f", &nota1);
    
    printf("\n\tInsira sua nota da P2: ");
    scanf("%f", &nota2);
    
    printf("\n\tInsira sua nota da P3: ");
    scanf("%f", &nota3);
    
    media = (nota1+nota2+nota3)/3;
    freq = 0.80;
    
    printf("\nSua media %.3f: .Sua presença e de %.2f", media, freq);
    
    if (media<5 || freq <0.75)
    {
        printf("\nSinto muito, porem sua presença foi de %.3f e sua media de %.2f; portanto INSUFICIENTE para a aprovação.", freq, media);
    }
    else 
    {
        printf("\nAprovado. Parabens!");
    }
     
    system("pause");
    return 0;
}