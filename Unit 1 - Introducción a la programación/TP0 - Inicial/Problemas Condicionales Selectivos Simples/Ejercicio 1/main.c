#include <stdio.h>
#include <stdlib.h>

int main()
{
    // DECLARAICON DE VARIABKES //

    int nota1 = 0;
    int nota2 = 0;
    int nota3 = 0;
    float promedioNota = 0;
    int sumaNota = 0;
    int cantidadNotas = 3;

    printf("Bienvenido a ASISTENT VIRTUAL - UTN MDP \n");
    printf("\nIngresar nota 1: ");
    scanf("%i" , &nota1);
    printf("Ingresar nota 2: ");
    scanf("%i" , &nota2);
    printf("Ingresar nota 3: ");
    scanf("%i" , &nota3);

    sumaNota = nota1 + nota2 + nota3;
    promedioNota = (float)sumaNota / cantidadNotas;

    printf("\nEl promedio del alumno es de: %.2f \n" , promedioNota);

    if(promedioNota >= 7){
        printf("El alumno esta aprobado. \n");
    }else{
        printf("El alumno esta desaprobado. \n");
    }
    return 0;
}
