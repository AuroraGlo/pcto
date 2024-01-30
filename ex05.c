#include <stdio.h>

int main()
{
    float numero1;
    float numero2;
    float numero3;

    printf("inserisci tre numeri\n");
    scanf("%f" , &numero1);
    scanf("%f" , &numero2);
    scanf("%f" , &numero3);

    if(numero3 - numero2 == numero2 - numero1)
    {
        printf("è una progressione\n");
    }
    else {
        printf("non è una progressione\n");
    }
}