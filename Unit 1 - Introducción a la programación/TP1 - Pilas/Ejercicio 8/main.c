#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "pila.h"

int main()
{
    // DECLARACION DE VARIABLES //

    Pila mazo , jugador1 , jugador2;
    char continuar = 's';

    inicpila(&mazo);
    inicpila(&jugador1);
    inicpila(&jugador2);

    // ALGORITMO //

    do{
        system("cls");
        printf("CARGANDO MAZO... \n\n");
        leer(&mazo);
        printf("\n�Quieres seguir cargando el mazo? s=SI / n=NO \n");
        fflush(stdin);
        continuar = getch();

    }while(continuar != 'n');

    system("cls");

    printf("PILA MAZO CARGADA... \n");
    mostrar(&mazo);

    while(!pilavacia(&mazo)){
        apilar(&jugador1 , desapilar(&mazo));
        if(!pilavacia(&mazo)){
            apilar(&jugador2 , desapilar(&mazo));
        }
    }

    printf("PILA JUGADOR 1 \n");
    mostrar(&jugador1);
    printf("PILA JUGADOR 2 \n");
    mostrar(&jugador2);

    return 0;
}
