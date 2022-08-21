#include<stdio.h>
#include<stdlib.h>

// Calculadora de notas
int main()
{
    float nota1, nota2, media;

    printf("Calculadora de notas \n");
    printf("\nInforme sua primeira nota: ");
    scanf("%f%",&nota1);
    printf("\n Informe sua segunda nota: ");
    scanf("%f", &nota2);
    media = (nota1+nota2)/2;

    printf("\nSua media e entre %f e %f = %f", nota1, nota2, media);
    return (0);
}
