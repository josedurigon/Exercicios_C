#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
void myfunction()

{
    printf("Minha primeira fun��o");
}

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    myfunction();
    return 0;
}
