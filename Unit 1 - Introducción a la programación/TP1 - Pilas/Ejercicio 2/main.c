#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "pila.h"

int main()
{
    // DECLARACION DE VARIABLES //

    Pila origen, destino;
    char continuar = 's';

    inicpila(&origen);
    inicpila(&destino);

    // ALGORITMO //

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
        apilar(&destino , desapilar(&origen));
    }

    printf("PILA DESTINO \n");
    mostrar(&destino);

    return 0;
}
