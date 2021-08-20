#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "pila.h"

int main()
{
    // DECLARACION DE VARIABLES //

    Pila limite , dada , mayores , menores;
    char continuar = 's';
    int valorLimite = 0;

    inicpila(&limite);
    inicpila(&dada);
    inicpila(&mayores);
    inicpila(&menores);

    printf("Ingresar un valor para la pila LIMITE: ");
    scanf("%d" , &valorLimite);

    apilar(&limite , valorLimite);

    do{
        system("cls");
        printf("CARGANDO PILA DADA... \n");
        leer(&dada);
        printf("\n�Quires seguir cargando la pila? s=SI / n=NO \n");
        fflush(stdin);
        continuar = getch();

    }while(continuar != 'n');

    system("cls");

    printf("PILA LIMITE CARGADA... \n");
    mostrar(&limite);
    printf("PILA DADA CARGADA... \n");
    mostrar(&dada);

    while(!pilavacia(&dada)){
        if(tope(&dada) >= tope(&limite)){
            apilar(&mayores , desapilar(&dada));
        }else
            apilar(&menores , desapilar(&dada));
    }

    printf("PILA MENORES \n");
    mostrar(&menores);
    printf("PILA MAYORES \n");
    mostrar(&mayores);

    return 0;
}
