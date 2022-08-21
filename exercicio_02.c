#include<stdio.h>
#include<stdlib.h>

int main()
{
    int numero, antecessor, sucessor;

    printf("\nInsira um numero para que eu possa calcular o antecessor e o sucessor: ");
    scanf("%d", &numero);

    antecessor = numero -1;
    sucessor= numero +1;


    printf("\nO antecessor e o sucessor do numero %d eh %d e %d, respectivamente", numero, antecessor, sucessor);





    return 0;
}
