#include <stdio.h>

int main()
{
    int numero1, numero2, numero3;

    printf("scivi tre numeri\n");
    scanf("%d" , &numero1);
    scanf("%d" , &numero2);
    scanf("%d" , &numero3);

    if(numero1+numero2>numero3 && numero2+numero3>numero1 && numero1+numero3>numero2) {
        printf("è un triangolo\n");
    }
    else {
        printf("non è un triangolo\n");
    }
    return(0);

}