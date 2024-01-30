#include <stdio.h>

int main()
{
    int numero1;
    int numero2;

    printf("inserisci un numero\n");
    scanf("%d" , &numero1);
    printf("inserisci il secondo numero\n");
    scanf("%d" , &numero2);
    if(numero2%numero1 == 0)
    {
        printf("è un multiplo di numero1\n");
    }
    else{
        printf("non è un multiplo di numero1\n");
    }
    return(0);

}