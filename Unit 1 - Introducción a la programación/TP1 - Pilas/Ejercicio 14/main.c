#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "pila.h"

int main()
{
    Pila dada , par , impar , aux;
    char continuar = 's';
    int i = 0;

    inicpila(&dada);
    inicpila(&par);
    inicpila(&impar);
    inicpila(&aux);

    do{
        system("cls");
        printf("CARGANDO PILA DADA... \n\n");
        leer(&dada);
        printf("\n�Quieres seguir cargando la pila? s=SI / n=NO \n");
        fflush(stdin);
        continuar = getch();

    }while(continuar != 'n');

    system("cls");

    printf("PILA DADA CARGADA... \n");
    mostrar(&dada);

    while(!pilavacia(&dada)){
        apilar(&aux , desapilar(&dada));
        if(!pilavacia(&dada)){
            apilar(&aux , desapilar(&dada));
        }else{
            apilar(&impar , desapilar(&aux));
        }
    }

    if(!pilavacia(&impar)){
        printf("La pila DADA tiene una cantidad de elementos impar. \n");
        printf("\nPILA IMPAR \n");
        mostrar(&impar);
    }else{
        apilar(&par , desapilar(&aux));
        printf("La pila DADA tiene una cantidad de elementos par. \n");
        printf("\nPILA PAR \n");
        mostrar(&par);
    }

    printf("PILA AUX \n");
    mostrar(&aux);

    return 0;
}
