#include <stdio.h>
#include <stdlib.h>

int main()
{
    // DECLARACION DE VARIABLES //

    int num1 = 0;
    int num2 = 0;

    printf("Ingresar numero 1: ");
    scanf("%i" , &num1);
    printf("Ingresar numero 2: ");
    scanf("%i" , &num2);

    if(num1 < num2){
        printf("\nLos numeros ingresados son: %i - %i \n" , num1 , num2);
    }else{
        printf("\nLos numeros ingresados son: %i - %i \n" , num2 , num1);
    }
    return 0;
}
