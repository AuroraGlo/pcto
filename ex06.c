#include <stdio.h>

int main()
{
    int numero1;

    printf("inserisci un anno\n");
    scanf("%d" , &numero1);

    if(numero1 % 4 == 0 && numero1 % 100 != 0)
    {
        printf("è un anno bisestile\n");
    }
    else 
    {
        printf("non è un anno bisestile\n");
    }
    return(0);
}
