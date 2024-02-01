#include <stdio.h>

void massimo(int a, int b)
{
    if(a == b)
    {
        printf("%d è uguale a %d\n", a, b);
    }
    else
    {
        if(a > b)
        {
            printf("%d è più grande di %d\n", a, b);
        }
        else(a < b);
        {
            printf("%d è più piccolo di %d\n", a, b);
        }
    }
}

int main()
{
    int x;
    int y;
    printf("inserisci due numeri\n");
    scanf("%d %d", &x, &y);
    massimo(x, y);
}