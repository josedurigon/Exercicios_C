#include<stdio.h>
#include<stdlib.h>
#include<time.h>




int main()
{
    int myNumbers[]={25,50,75,100};
    printf("\n%d", myNumbers[0]);
    myNumbers[0]=33;
    printf("\n%d", myNumbers[0]);

    int i;
    for(i=0; i<4; i++)
    {
        printf("\n%d", myNumbers[i]);
        sleep(1);
    }



    return 0;
}
