#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "pila.h"

int main()
{
    // DECLARACION DE VARIABLES //

    Pila a , b , auxA , auxB;
    char continuar = 's';

    inicpila(&a);
    inicpila(&b);
    inicpila(&auxA);
    inicpila(&auxB);

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

    while(!pilavacia(&a) && !pilavacia(&b) && tope(&a) == tope(&b)){
        apilar(&auxA , desapilar(&a));
        apilar(&auxB , desapilar(&b));
    }

    if(pilavacia(&a) && pilavacia(&b)){
        printf("Las pilas son iguales. \n");
    }else{
        printf("Las pilas son distintas. \n");
    }

    return 0;
}
