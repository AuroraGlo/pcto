#include <stdio.h>

void numeri(int n1)
{
    printf("inserisci un numero\n");
    scanf(" %d", &n1);

    if(n1 / 2 == 0)
    {
        printf("il numero è pari\n");
    }
    else if(n1 / 2 != 0)
    {
        printf("il numero è dispari\n");
    }
}

int main()
{
    int n1;
    printf("inserisci un numero\n");
    scanf("%d", &n1);
    numeri(n1);
}