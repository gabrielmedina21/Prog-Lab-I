#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{
    // DECLARACION DE VARIABLES //

    Pila dada , aux1 , aux2;

    inicpila(&dada);
    inicpila(&aux1);
    inicpila(&aux2);

    // ALGORITMO //

    for(i = 0 ; i < 5 ; i++){
        printf("CARGANDO PILA DADA... \n\n");
        leer(&dada);
    }

    printf("PILA DADA \n");
    mostrar(&dada);

    for(i = 0; i < 3 ; i++){
        apilar(&aux1 , desapilar(&dada));
    }

    printf("PILA AUX1 \n");
    mostrar(&aux1);

    for(i = 0; i < 2 ; i++){
        apilar(&aux2 , desapilar(&dada));
    }

    printf("PILA AUX2 \n");
    mostrar(&aux2);

    return 0;
}
