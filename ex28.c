#include <stdio.h>

int main()
{
    int x = 0;
    char parola[100];
    printf("inserisci una parola\n");
    scanf("%s", parola);

    while(parola[x] != 0)
    if(parola[x] <= 97 && parola[x] <= 122)
    {
        parola[x]= parola[x] - 32;
        x = x + 1;
    }
    printf("la tua parola è %s\n", parola);
    return(0);
}