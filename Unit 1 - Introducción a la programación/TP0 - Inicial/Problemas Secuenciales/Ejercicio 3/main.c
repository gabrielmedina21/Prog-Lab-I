#include <stdio.h>
#include <stdlib.h>

int main()
{
    // DECLARACION DE VARIABLES //

    int cantAlumnosMujeres = 0;
    int cantAlumnosHombres = 0;
    int totalEstudiantes = 0;
    float promedioAlumnosMujeres = 0;
    float promedioAlumnosHombres = 0;

    // ALGORITMO //

    printf("Ingresar cantidad de alumnos mujeres: ");
    scanf("%i" , &cantAlumnosMujeres);
    printf("La cantidad de alumnos mujeres ingresada es de: %i \n" , cantAlumnosMujeres);
    printf("\nIngesar cantidad de alumnos hombres: ");
    scanf("%i" , &cantAlumnosHombres);
    printf("La cantidad de alumnos hombres ingresada es de; %i \n" , cantAlumnosHombres);

    totalEstudiantes = cantAlumnosMujeres + cantAlumnosHombres;
    promedioAlumnosMujeres = (float)cantAlumnosMujeres * 100 / totalEstudiantes;
    promedioAlumnosHombres = (float)cantAlumnosHombres * 100 / totalEstudiantes;

    printf("\nEl promedio de alumnos mujeres es de: %.2f%% de un total de %i alumnos \n" , promedioAlumnosMujeres , totalEstudiantes);
    printf("El promedio de alumnos hombres es de: %.2f%% de un total de %i alumnos \n" , promedioAlumnosHombres , totalEstudiantes);
    return 0;
}
