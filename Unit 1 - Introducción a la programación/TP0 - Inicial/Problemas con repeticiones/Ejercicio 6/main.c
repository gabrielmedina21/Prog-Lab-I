#include <stdio.h>
#include <stdlib.h>

int main()
{
    // DECLARACION DE VARIABLES //

    int num = 0;
    int i = 0;
    int resMultiplicacion = 0;

    // ALGORITMO //

    printf("¿Que tabla de multiplicar necesitas?: ");
    scanf("%i" , &num);

    printf("\n");

    for(i = 1 ; i <= 10 ; i++){
        resMultiplicacion = num * i;
        printf("%d x %d = %d \n" , num , i , resMultiplicacion);
    }

    return 0;
}
