#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "pila.h"

int main()
{

    // DECLARACION DE VARIABLES //

    Pila modelo , dada , auxDada , auxModelo , descarte;
    char continuar = 's';

    inicpila(&modelo);
    inicpila(&dada);
    inicpila(&auxDada);
    inicpila(&auxModelo);
    inicpila(&descarte);

    do{
        system("cls");
        printf("CARGANDO PILA MODELO... \n\n");
        leer(&modelo);
        printf("\n�Quieres seguir cargando la pila? s=SI / n=NO \n");
        fflush(stdin);
        continuar = getch();

    }while(continuar != 'n');

      do{
        system("cls");
        printf("CARGANDO PILA DADA... \n\n");
        leer(&dada);
        printf("\n�Quieres seguir cargando la pila? s=SI / n=NO \n");
        fflush(stdin);
        continuar = getch();

    }while(continuar != 'n');

    system("cls");

    printf("PILA MODELO CARGADA... \n");
    mostrar(&modelo);
    printf("PILA DADA CARGADA... \n");
    mostrar(&dada);

    while(!pilavacia(&modelo)){
        while(!pilavacia(&dada)){
            if(tope(&dada) == tope(&modelo)){
                apilar(&descarte , desapilar(&dada));
            }else{
                apilar(&auxDada , desapilar(&dada));
            }
        }
        while(!pilavacia(&auxDada)){
            apilar(&dada , desapilar(&auxDada));
        }

        apilar(&auxModelo , desapilar(&modelo));
    }

    printf("ELEMENTOS ELIMINADOS DE LA PILA DADA \n");
    mostrar(&descarte);
    printf("PILA DADA CON LOS ELEMENTOS ELIMINADOS \n");
    mostrar(&dada);

    return 0;
}
