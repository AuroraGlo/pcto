#include <stdio.h>
#include <math.h>

int perimetro(int a, int b, int c)
{
    int risultato;
   
    risultato = a + b + c;
    return(risultato);
}

int area(int a, int b, int c, int p)
{
    int area;

    area = sqrt((p)*(p/2-a)*(p/2-b)*(p/2-c));
}

int main()
{
    int x;
    int y;
    int z;
    int p;
    int a;

    printf("inserisci il primo lato\n");
    scanf(" %d", &x);

    printf("inserisci il secondo lato\n");
    scanf(" %d", &y);

    printf("inserisci il terzo lato\n");
    scanf(" %d", &z);

    p = perimetro(x, y, z);
    printf("il perimetro è: %d\n", p);

    a = area(x, y, z, p);
    printf("l'area è: %d\n", a);
 
return(0);
}