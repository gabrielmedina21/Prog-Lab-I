#include <stdio.h>
#include <stdlib.h>

int main()
{
    // DECLARAICION DE VARIABLES //

    int num = 0;
    int numOpuesto = 0;
    int i = 0;

    // ALGORITMO //

    printf("Ingresar 15 numeros negativos \n");

    for(i = 1 ; i <= 15 ; i++){
        printf("\nIngresar numero %i: " , i);
        scanf("%i" , &num);

        numOpuesto = abs(num);

        printf("\nEl numero opuesto de %i es: %i \n" , num , numOpuesto);
    }

    return 0;
}
