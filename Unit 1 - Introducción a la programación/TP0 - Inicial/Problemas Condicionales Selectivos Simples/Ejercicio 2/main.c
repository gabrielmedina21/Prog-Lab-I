#include <stdio.h>
#include <stdlib.h>

int main()
{
    // DECLARACION DE VARIABLES //

    float totalCompra = 0;
    int porcentajeDescuento = 20;
    float montoFinal = 0;

    // ALGORITMO //

    printf("Bienvendio a SUPER MARKET MDQ \n");
    printf("\nIngesar el monto total de la compra: $");
    scanf("%f" , &totalCompra);
    printf("\nEl monto total de la compra es de: $%.2f \n" , totalCompra);

    if(totalCompra > 5000){
        montoFinal = totalCompra - (totalCompra * porcentajeDescuento) / 100;
        printf("El monto final con el descuento es de: $%.2f \n" , montoFinal);
    }else{
        printf("El monto final es de: $%.2f \n" , totalCompra);
    }
    return 0;
}
