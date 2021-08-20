#include <stdio.h>
#include <stdlib.h>

int main()
{
    // DECLARACION DE VARIABLES //

    int num = 0;
    int i = 0;

    // ALGORITMO //

    for(i = 1 ; i <= 10 ; i++){
        printf("Ingresar numero %d: " , i);
        scanf("%d" , &num);

        if(num < 0){
            printf("\nEl numero ingresado es negativo. \n\n");
        }else{
            printf("\nEl numero ingresado es: %d \n\n" , num);
        }
    }
    return 0;
}
