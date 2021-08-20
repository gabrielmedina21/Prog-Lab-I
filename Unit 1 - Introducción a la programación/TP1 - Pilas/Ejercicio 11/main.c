#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "pila.h"

int main()
{
    // DECLARACION DE VARIABLES //

    Pila dada , modelo , auxDada , descarte;
    char continuar = 's';

    inicpila(&dada);
    inicpila(&modelo);
    inicpila(&auxDada);
    inicpila(&descarte);

    apilar(&modelo , 30);
    apilar(&modelo , 13);
    apilar(&modelo , 25);
    apilar(&modelo , 11);
    apilar(&modelo , 5);

    do{
        system("cls");
        printf("CARGANDO PILA DADA... \n\n");
        leer(&dada);
        printf("\n�Quieres seguir cargando la pila? s=SI / n=NO \n");
        fflush(stdin);
        continuar = getch();

    }while(continuar != 'n');

    system("cls");

    printf("PILA MODELO CARGADA \n");
    mostrar(&modelo);
    printf("PILA DADA CARGADA \n");
    mostrar(&dada);

    while(!pilavacia(&dada)){
        if(tope(&dada) == tope(&modelo)){
            apilar(&auxDada , desapilar(&dada));
        }else{
            apilar(&descarte , desapilar(&dada));
        }
    }

    while(!pilavacia(&descarte)){
        apilar(&dada , desapilar(&descarte));
    }

    printf("PILA DADA \n");
    mostrar(&dada);

    return 0;
}
