#include <stdio.h>
#include <stdlib.h>

int main()
{
    // DECLARACION DE VARIABLES //

    int cantHorasTrabajadas = 0;
    int horasSemanales = 40;
    int cantHorasExtras = 0;
    float salarioSemanal = 0;
    float salarioSemanalPorHora = 0;
    int salarioPorHora = 300;
    int salarioHorasExtras = 400;
    float salarioMasHorasExtras = 0;

    // ALGORITMO //

    printf("Por favor ingresar la cantidad de horas realizadas: ");
    scanf("%i" , &cantHorasTrabajadas);
    printf("\nLa cantidad de horas ingresada es de: %i \n" , cantHorasTrabajadas);

    if(cantHorasTrabajadas > horasSemanales){
        salarioSemanal = horasSemanales * salarioPorHora;
        cantHorasExtras = cantHorasTrabajadas - horasSemanales;
        salarioMasHorasExtras = (salarioHorasExtras * cantHorasExtras) + salarioSemanal;
        printf("El salario semanal que te correspnde es de: $%.2f \n" , salarioMasHorasExtras);
    }else{
        salarioSemanalPorHora = cantHorasTrabajadas * salarioPorHora;
        printf("El salario semanal que te corresponde es de: $%.2f \n" , salarioSemanalPorHora);
    }

    return 0;
}
