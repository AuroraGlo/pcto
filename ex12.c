#include <stdio.h>

int main()
{
    int x;
    int y = 1;
    scanf("%d" , &x);
    
    while(x >= 1) 
    {
        y = y * x;
        x = x - 1;
    }
    printf("%d" , y);

return(0);
}  