#include <stdio.h>
#include <stdlib.h>

int main()
{
    // DECLARACION DE VARIBALES //

    int cantCamisas = 0;
    int descuento1 = 20;
    int descuento2 = 10;
    float totalCompra = 0;
    float pagoFinal = 0;
    float precioCamisa = 0;

    printf("Bienvenido/a a Shirt Shop MDP \n");
    printf("\nIngresar la cantidad de camisas compradas: ");
    scanf("%i" , &cantCamisas);
    printf("Ingresar precio de la compra: $");
    scanf("%f" , &precioCamisa);

    system("cls");

    printf("La cantidad de camisas ingresada es de: %i \n" , cantCamisas);

    totalCompra = precioCamisa * cantCamisas;

    printf("El total de la compra es de: $%.2f \n" , totalCompra);

    if(cantCamisas >= 3){
        pagoFinal = (float)totalCompra - (totalCompra * descuento1) / 100;
        printf("El monto final a pagar con el descuento del 20%% es de: $%.2f \n" , pagoFinal);
    }else{
        pagoFinal = (float)totalCompra - (totalCompra * descuento2) / 100;
        printf("El monto final a pagar con el descuento del 10%% es de: $%.2f \n" , pagoFinal);
    }
    return 0;
}
