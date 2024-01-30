#include <stdio.h>

int main()
{
    int numero1, numero2, numero3;

    printf("scrivi tre numeri\n");
    scanf("%d" , &numero1);
    scanf("%d" , &numero2);
    scanf("%d" , &numero3);

    if(numero1 == numero2 && numero1 == numero3 && numero3 == numero2) 
    {
        printf("il triangolo è equilatero\n");
    }
    if(numero1 != numero2 && numero2 != numero3 && numero3 != numero1) 
    {
        printf("il triangolo è scaleno\n");
    }
    if(numero1 == numero2 && numero1 != numero3) 
    {
        printf("il triangolo è isoscele\n");
    }
    if(numero1 == numero3 && numero1 != numero2)
    {
        printf("il triangolo è isoscele\n");
    }
    if(numero3 == numero2 && numero2 != numero1)
    {
        printf("il triangolo è isoscele\n");
    }
    return(0);
}