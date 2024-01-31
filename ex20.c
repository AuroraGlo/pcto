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


if(operazione == '+' || operazione == '-' || operazione == '*' || operazione == '/')
{
    if(operazione == '+')
    {
        printf("somma = %d", x+y);
    }
    
}

}

int main()
{
    operazioni();
}