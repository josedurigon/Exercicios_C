#include<stdio.h>
#include<stdlib.h>

int main()
{
    float equity, share1, share2, share3;

    printf("\nPlace the total amount please: ");
    scanf("%f",&equity);

    share1= equity*0.46;
    equity = equity *0.54;

    share2 = equity*0.32;
    equity= equity*0.68;

    share3=equity*1;

    printf("\n\nThe total shares where distibuted in %.2f for person 1, %.2f for person 2 and %.2f for person 3.", share1, share2, share3);

    return 0;
}
