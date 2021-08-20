#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "pila.h"

int main()
{
    // DECLARACION DE VARIABLES //

    Pila dada, distinto, auxDada;
    char continuar = 's';

    inicpila(&dada);
    inicpila(&distinto);
    inicpila(&auxDada);

    // ALGORITMO //

    do{
        system("cls");
        printf("CARGANDO PILA DADA... \n\n");
        leer(&dada);
        printf("\n¿Quieres seguir cargando la pila? s=SI / n=NO \n");
        fflush(stdin);
        continuar = getch();

    }while(continuar != 'n');

    system("cls");

    printf("PILA DADA CARGADA... \n");
    mostrar(&dada);

    while(!pilavacia(&dada)){
        if(tope(&dada) != 8){
            apilar(&distinto , desapilar(&dada));
        }else{
            apilar(&auxDada , desapilar(&dada));
        }
    }

    printf("PILA DISTINTO \n");
    mostrar(&distinto);

    return 0;
}
