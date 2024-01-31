#include <stdio.h>

int main()
{
    int costo=5;
    int pezzi=1;
    float prezzoScont;
    int totprezzo;
    
    while( pezzi > 0 )
    {
    printf("quanti pezzi hai preso?\n");
    scanf(" %d" , &pezzi);
    totprezzo = costo * pezzi;

    if(pezzi >= 30 && pezzi < 50) 
    {
        printf("hai sconto del 10\n");
        prezzoScont = totprezzo - (10 * totprezzo / 100);
        printf("%f\n" , prezzoScont);
    }  
    else if(pezzi >= 50) 
    {
        printf("hai sconto del 15\n");
        prezzoScont = totprezzo - (15 * totprezzo / 100);
        printf("%f" , prezzoScont);
    }
    else if(pezzi > 0 && pezzi < 30)
    {
        printf("%d\n" , totprezzo);
    }
    } 
    
return(0);
}  