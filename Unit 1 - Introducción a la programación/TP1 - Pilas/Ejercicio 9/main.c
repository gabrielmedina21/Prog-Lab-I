#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "pila.h"

int main()
{
    // DECLARACION DE VARIABLES //

    Pila a , b , aux;
    int contA = 0;
    int contB = 0;
    char continuar = 's';

    inicpila(&a);
    inicpila(&b);
    inicpila(&aux);

    // ALGORTIMO //

    do{
        system("cls");
        printf("CARGANDO PILA A... \n\n");
        leer(&a);
        printf("\n�Quieres seguir cargando la pila? s=SI / n=NO \n");
        fflush(stdin);
        continuar = getch();

    }while(continuar != 'n');

    do{
        system("cls");
        printf("CARGANDO PILA B... \n\n");
        leer(&b);
        printf("\n�Quieres seguir cargando la pila? s=SI / n=NO \n");
        fflush(stdin);
        continuar = getch();

    }while(continuar != 'n');

    system("cls");

    printf("PILA A CARGADA... \n");
    mostrar(&a);
    printf("PILA B CARGADA... \n");
    mostrar(&b);

    while((!pilavacia(&a)) && (!pilavacia(&b))){
        apilar(&aux , desapilar(&a));
        apilar(&aux , desapilar(&b));
    }

    if((pilavacia(&a)) && (pilavacia(&b))){
        printf("La cantidad de elementos de las pilas son iguales. \n");
    }else{
        printf("La cantidad de elementos de las pilas son distintos. \n");
    }

    return 0;
}
