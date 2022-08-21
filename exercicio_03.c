#include<stdio.h>
#include<stdlib.h>

int main()
{
    float horario, hora, minuto, segundo;

    printf("\nInsira o horario em 24h: ");
    scanf("%f",&horario);

    segundo = horario*3600;
    minuto = horario*60;
    hora = horario;

    printf("\nAgora sao exatamente %.2f horas, ou %.2f minutos, ou %.2f segundos", hora, minuto, segundo);

    return 0;

}

