#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{
    // DECLARACION DE VARIABLES //

    Pila dada , auxDada , topeDada;

    inicpila(&dada);
    inicpila(&auxDada);
    inicpila(&topeDada);

    // ALGORITMO //

    apilar(&dada , 6);
    apilar(&dada , 15);
    apilar(&dada , 7);
    apilar(&dada , 14);
    apilar(&dada , 30);

    system("cls");

    printf("PILA DADA CARGADA... \n");
    mostrar(&dada);

    if(!pilavacia(&dada)){
       apilar(&topeDada , desapilar(&dada));
    }

    while(!pilavacia(&dada)){
        apilar(&auxDada , desapilar(&dada));
    }

    if(!pilavacia(&dada)){
        apilar(&dada , desapilar(&topeDada));
    }

    while(!pilavacia(&auxDada)){
        apilar(&dada , desapilar(&auxDada));
    }

    printf("PILA DADA - NUEVO ORDEN \n");
    mostrar(&dada);

    return 0;
}
