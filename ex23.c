#include <stdio.h>

int calcolaPerimetro(int a, int b, int c)
{
    int risultato;
   
    risultato = a + b + c;
    return(risultato);
}

int area(int a)

int main()
{
    int x;
    int y;
    int z;
    int perimetro;

    printf("inserisci il primo lato\n");
    scanf(" %d", &x);

    printf("inserisci il secondo lato\n");
    scanf(" %d", &y);

    printf("inserisci il terzo lato\n");
    scanf(" %d", &z);

    perimetro = calcolaPerimetro(x, y, z);
    printf("il perimetro è: %d\n", perimetro);
 
return(0);
}