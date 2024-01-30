#include <stdio.h>

int main()
{
    int numero1;
    int numero2 = 1969;

    printf("in che anno sei nato?\n");
    scanf("%d" , &numero1);

    if(numero1 == numero2) 
    {
    printf("sei nato l'anno in cui l'uomo è andato sulla luna\n");
    }

    else if(numero1 < numero2) 
    {
    printf("sei nato %d anni prima che l'uomo andasse sulla luna\n" , (numero2 - numero1));
    }

    else if(numero1 > numero2) 
    {
    printf("sei nato %d anni dopo che l'uomo andasse sulla luna\n" , (numero1 - numero2));
    }
    return(0);
}  