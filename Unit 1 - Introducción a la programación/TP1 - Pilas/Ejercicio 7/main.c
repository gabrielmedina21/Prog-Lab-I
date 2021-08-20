#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{
    // DECLARACION DE VARIABLES //

    Pila dada , auxDada , baseDada;

    inicpila(&dada);
    inicpila(&auxDada);
    inicpila(&baseDada);

    // ALGORITMO //

    apilar(&dada , 6);
    apilar(&dada , 12);
    apilar(&dada , 8);
    apilar(&dada , 1);
    apilar(&dada , 21);

    printf("PILA DADA CARGADA... \n");
    mostrar(&dada);

    while(!pilavacia(&dada)){
        apilar(&auxDada , desapilar(&dada));
    }

    if(!pilavacia(&auxDada)){
        apilar(&baseDada , desapilar(&auxDada));
    }

    while(!pilavacia(&auxDada)){
        apilar(&dada , desapilar(&auxDada));
    }

    if(!pilavacia(&baseDada)){
         apilar(&dada , desapilar(&baseDada));
    }

    printf("PILA DADA - NUEVO ORDEN \n");
    mostrar(&dada);

    return 0;
}
