#include <stdio.h>

int main()
{
    int n1=0;
    int n2=0;
    int n3=0;
    
    while(n1 >= 0) 
    {
        printf("inserisci un numero\n");
        scanf("%d" , &n1);
        if(n1>0) 
        {
          n3=n3+1;  
          n2=n2+n1;
        }

    }
    n2=n2/n3;
    printf("la media è %d\n" , n2);

return(0);
}  