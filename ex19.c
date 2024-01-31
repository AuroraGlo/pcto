#include <stdio.h>

void caratteri()
{
    char lettera;

    printf("scrivi una lettera:\n");
    scanf(" %c" , &lettera);

    if(lettera == 'a'|| lettera == 'e' || lettera == 'i' || lettera == 'o' || lettera == 'u')
    {
        printf("è una vocale\n");
    }
    else 
    {
        printf("non è una vocale\n");
    }
    } 

int main() 
{
    caratteri();
}