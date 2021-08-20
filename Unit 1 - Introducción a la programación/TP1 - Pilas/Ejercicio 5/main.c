#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "pila.h"

int main()
{
    // DECLARAICON DE VARIABLES //

    Pila dada , auxDada1 , auxDada2;
    char continuar = 's';

    inicpila(&dada);
    inicpila(&auxDada1);
    inicpila(&auxDada2);

    // ALGORTIMO //

    do{
        system("cls");
        printf("CARGANDO PILA DADA... \n\n");
        leer(&dada);
        printf("\n¿Quieres seguir cargando la pila? s=SI / n=NO \n");
        fflush(stdin);
        continuar = getch();

    }while(continuar != 'n');

    system("cls");

    printf("PILA DADA CARGANDA... \n");
    mostrar(&dada);

    while(!pilavacia(&dada)){
        apilar(&auxDada1 , desapilar(&dada));
    }

    while(!pilavacia(&auxDada1)){
        apilar(&auxDada2 , desapilar(&auxDada1));
    }

    while(!pilavacia(&auxDada2)){
        apilar(&dada , desapilar(&auxDada2));
    }

    printf("PILA DADA \n");
    mostrar(&dada);

    return 0;
}
