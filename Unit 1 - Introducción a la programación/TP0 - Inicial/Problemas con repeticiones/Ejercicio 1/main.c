#include <stdio.h>
#include <stdlib.h>

int main()
{
    // DECLARACION DE VARIABLES //

    int nota = 0;
    int sumaNota = 0;
    float promedioNota = 0;
    int i = 0;

    // ALGORITMO //

    for(i = 1 ; i <= 7 ; i++){
        printf("Ingresar nota %d: " , i);
        scanf("%d" , &nota);
        sumaNota += nota;
    }

    promedioNota = (float)sumaNota / 7;

    printf("\nEl promedio del alumno/a es de: %.2f \n" , promedioNota);

    return 0;
}
