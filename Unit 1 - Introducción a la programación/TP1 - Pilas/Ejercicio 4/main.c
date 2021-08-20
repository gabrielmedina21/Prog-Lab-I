#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "pila.h"

int main()
{
    // DECLARAICON DE VARIABLES //

    Pila origen , destino , auxOrigen;
    char continuar = 's';

    inicpila(&origen);
    inicpila(&destino);
    inicpila(&auxOrigen);

    // ALGORTIMO //

    do{
        system("cls");
        printf("CARGANDO PILA ORIGEN... \n\n");
        leer(&origen);
        printf("\n¿Quieres seguir cargando la pila? s=SI / n=NO \n");
        fflush(stdin);
        continuar = getch();

    }while(continuar != 'n');

    system("cls");

    printf("PILA ORIGEN CARGADA... \n");
    mostrar(&origen);

    while(!pilavacia(&origen)){
        apilar(&auxOrigen , desapilar(&origen));
    }

    while(!pilavacia(&auxOrigen)){
        apilar(&destino , desapilar(&auxOrigen));
    }

    printf("PILA DESTINO \n");
    mostrar(&destino);

    return 0;
}
