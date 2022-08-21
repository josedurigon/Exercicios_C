#include<stdio.h>
#include<stdlib.h>

int main()
{
    float horario, tempo_passado;
    printf("\nQue horas sao? ");
    scanf("%f", &horario);

    tempo_passado=horario*60;
     printf("\nJa se passaram, portanto, %.2f minutos ate agora!!!", tempo_passado);
     return 0;


}
