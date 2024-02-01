#include <stdio.h>

int fattoriale(int n1)
{
    int risultato=1;
    while(n1 > 0)
    {
        risultato = risultato * n1;
        n1 = n1 - 1;
    }
    return(risultato);
}

int main()
{
    int n2;
    printf("inserisci un numero\n");
    scanf(" %d", &n2);
    printf("risultato: %d \n", fattoriale(n2));
    return(0);
}