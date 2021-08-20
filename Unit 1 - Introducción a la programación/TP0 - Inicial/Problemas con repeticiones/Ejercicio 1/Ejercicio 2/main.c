#include <stdio.h>
#include <stdlib.h>

int main()
{
    // DECLARACION DE VARIABLES //

    int num = 0;
    double cuboNum = 0;
    double cuartaNum = 0;
    int i = 0;

    // ALGORITMO //

    for(i = 1 ; i <= 10 ; i++){
        printf("Ingresar numero %d: " , i);
        scanf("%d" , &num);

        cuboNum = pow(num , 3);
        cuartaNum = pow(num , 4);

        printf("\nEl cubo de %d = %.0f" , num , cuboNum);
        printf("\nLa cuarta de %d = %.0f \n\n" , num , cuartaNum);
    }

    return 0;
}
