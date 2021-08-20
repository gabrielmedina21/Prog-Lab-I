#include <stdio.h>
#include <stdlib.h>

int main()
{
    // DECLARACION DE VARIABLES //

    float totalCompra = 0;
    int porcentajeDescuento = 15;
    float montoFinal = 0;

    // ALGORITMO //

    printf("Bienvenido a MARKETMDP \n");
    printf("\nIngrese el total de la compra realizada: ");
    scanf("%f" , &totalCompra);
    printf("\nEl monto total de la compra ingresada es de: $%.2f \n" , totalCompra);

    montoFinal = totalCompra - (totalCompra * porcentajeDescuento) / 100;

    printf("El monto final a pagar con el descuento es de: $%.2f \n" , montoFinal);
    return 0;
}
