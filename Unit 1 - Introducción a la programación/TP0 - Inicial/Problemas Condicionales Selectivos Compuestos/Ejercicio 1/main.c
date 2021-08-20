#include <stdio.h>
#include <stdlib.h>

int main()
{
    // DECLARACION DE VARIABLES //

    int num1 = 0;
    int num2 = 0;
    int resMultiplicacion = 0;
    int resResta = 0;
    int resSuma = 0;

    // ALGORITMO //

    printf("Ingresar numero 1: ");
    scanf("%i" , &num1);
    printf("Ingresar numero 2: ");
    scanf("%i" , &num2);
    printf("\nLos numeros ingreados son: %i ; %i \n\n" , num1 , num2);

    if(num1 == num2){
        printf("Los numeros ingresados son iguales, entonces se multiplica. \n");
        resMultiplicacion = num1 * num2;
        printf("\n %i x %i = %i \n" , num1, num2 , resMultiplicacion);
    }else if(num1 > num2){
        printf("El numero 1 es mayor que el numero 2, entonces se resta. \n");
        resResta = num1 - num2;
        printf("\n %i - %i = %i \n" , num1, num2 , resResta);
    }else if(num1 < num2){
        printf("El numero 1 es menor que el numero 2, entonces se suma. \n");
        resSuma = num1 + num2;
        printf("\n %i + %i = %i \n" , num1, num2 , resSuma);
    }

    return 0;
}
