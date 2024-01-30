#include <stdio.h>

int main()
{
    float numero1, numero2, numero3;

    printf("inserisci la temperatura in Celsius\n");
    scanf("%f" , &numero1);
    if(numero1 < -273.15 ) {
        printf("errore\n");
        return(0);
    }
    numero2 = 1.8 * numero1 + 32;
    numero3 = numero1 + 273.15;

    printf("il tuo valore in Fareneheit è %f\n" , numero2);
    printf("il tuo valore in Kelvin è %f\n" , numero3);

    return(0);
}