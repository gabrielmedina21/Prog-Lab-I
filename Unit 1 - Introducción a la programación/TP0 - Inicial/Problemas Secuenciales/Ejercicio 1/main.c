#include <stdio.h>
#include <stdlib.h>

int main()
{
    // DECLARACION DE VARIABLES //

    int monto = 0;
    int porcentaje = 2;
    float ganancia = 0;
    float gananciaFinal = 0;

    // ALGORITMO //

    printf("BIENVENIDO AL BANKCENTER \n");
    printf("\nIngresar monto: ");
    scanf("%i" , &monto);
    printf("\nEl monto que ha depositado es de: %i \n" , monto);

    ganancia = monto * porcentaje / 100;
    gananciaFinal =  ganancia + monto;

    printf("El monto final va a ser de: %.2f \n" , gananciaFinal);

    return 0;
}
