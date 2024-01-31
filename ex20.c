#include <stdio.h>

void operazioni()
{
    int x;
    int y;
    char operazione;

    printf("inserisci un numero:\n");
    scanf(" %d" , &x);

    printf("inserisci un secondo numero:\n");
    scanf(" %d" , &y);

    printf("che operazione vuoi eseguire su x e y?\n");
    scanf(" %c" , &operazione);


    if(operazione == '+')
    {
        printf("somma = %d\n", x+y);
    }
    else if(operazione == '-')
    {
        printf("sottrazione = %d\n", x-y);
    }
    else if(operazione == '*')
    {
        printf("moltiplicazione = %d\n", x*y);
    }
    else if(operazione == '/')
    {
        printf("divisione = %d\n", x/y);
    }

}

int main()
{
    operazioni();
}