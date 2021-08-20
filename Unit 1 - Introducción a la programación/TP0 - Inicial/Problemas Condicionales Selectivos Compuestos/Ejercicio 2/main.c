#include <stdio.h>
#include <stdlib.h>

int main()
{
    // DECLARACION DE VARIABLES //

    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    // ALGORITMO //

    printf("Ingresar numero 1: ");
    scanf("%i" , &num1);
    printf("Ingresar numero 2: ");
    scanf("%i" , &num2);
    printf("Ingresar numero 3: ");
    scanf("%i" , &num3);

    if((num1 > num2) && (num1 > num3)){
        printf("\nEl numero mas grande de los 3 ingresados es: %i \n" , num1);
    }else if((num2 > num1) && (num2 > num3)){
        printf("\nEl numero mas grande de los 3 ingresados es: %i \n" , num2);
    }else if((num3 > num1) && (num3 > num2)){
        printf("\nEl numero mas grande de los 3 ingresados es: %i \n" , num3);
    }

    return 0;
}
