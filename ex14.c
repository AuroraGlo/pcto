#include <stdio.h>

int main()
{
    int x , y = 1;
    int n = 0;

    printf("inserisci un numero\n");
    scanf("%d\n" , &x);
    
    while(n<3 && y<=x/2) 
    {
        if(x%y == 0)
        {
        n = n + 1;
        y = y + 1;  
        }
        
    }
    if(n == 1)
    {
        printf("il numero è primo\n");
    }
    else
    {
        printf("il numero non è primo\n");
    }

return(0);
}  