#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    // DECLARACION DE VARIABLES //

    int calificacion = 0;
    int cantCalificaciones = 0;
    int i = 0;
    int sumaCalificaciones = 0;
    int calificacionBaja = 500;
    float calificacionMedia = 0;

    // ALGORTIMO //

    printf("¿Que cantidad de califiaciones deseas ingresar?: ");
    scanf("%d" , &cantCalificaciones);

    for(i = 1 ; i <= cantCalificaciones ; i++){
        printf("\nIngresar calificacion %d: " , i);
        scanf("%d" , &calificacion);

        if(calificacionBaja > calificacion){
            calificacionBaja = calificacion;
        }

        sumaCalificaciones += calificacion;
    }

    calificacionMedia = (float)sumaCalificaciones / cantCalificaciones;

    printf("\nLa calificacion medina del grupo es de: %.2f \n\n" , calificacionMedia);
    printf("La calificacion mas baja del grupo es de: %d \n" , calificacionBaja);

    return 0;
}
