#include <stdio.h>

int main()
{
    int x = 0;
    int somma;
    while(x < 100) 
    {
        x = x + 1;
        somma = x + somma;
    }
    printf("%d\n" , somma);

return(0);
}  
