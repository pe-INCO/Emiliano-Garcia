#include <stdio.h>

int main(){

    // ===== Declaración de variables =====
    int opcion;
    float cal;
    char continuar;

    // Contadores
    int total = 0;
    int aprobados = 0;
    int reprobados = 0;

    // Acumuladores
    float suma_total = 0;
    float suma_aprobados = 0;
    float suma_reprobados = 0;

    // ===== Ciclo principal del menú =====
    do{

        printf("\n--- Programa de Calificaciones ---\n\n");
        printf("1. Ingresar calificaciones\n");
        printf("2. Ver estadisticas\n");
        printf("3. Reiniciar datos\n");
        printf("4. Salir\n");
        printf("Ingresa una opcion: ");
        scanf("%d", &opcion);

        switch(opcion){

            // OPCION 1: INGRESAR CALIFICACIONES
            case 1:

                do{
                    printf("\nEntrada de calificaciones\n\n");
                    printf("Ingresa la calificacion (0-100): ");
                    scanf("%f", &cal);

                    // Validar rango
                    if(cal < 0 || cal > 100){
                        printf("Error. La calificacion debe estar entre 0 y 100\n");
                        continue; // vuelve al inicio del ciclo
                    }

                    // Actualizar contadores y acumuladores
                    total++;
                    suma_total += cal;

                    if(cal >= 60){
                        aprobados++;
                        suma_aprobados += cal;
                    }else{
                        reprobados++;
                        suma_reprobados += cal;
                    }

                    printf("Quieres continuar? (s/n): ");
                    scanf(" %c", &continuar); 
                    // espacio antes de %c para limpiar el buffer

                }while(continuar == 's' || continuar == 'S');

                break;

            // OPCION 2: MOSTRAR ESTADISTICAS
            case 2:

                printf("\n--- Estadisticas ---\n\n");

                if(total == 0){
                    printf("No se han ingresado calificaciones.\n");
                }else{

                    float promedio_total = suma_total / total;
                    float promedio_aprobados = 0;
                    float promedio_reprobados = 0;

                    // Evitar división entre cero
                    if(aprobados > 0)
                        promedio_aprobados = suma_aprobados / aprobados;

                    if(reprobados > 0)
                        promedio_reprobados = suma_reprobados / reprobados;

                    printf("Total de calificaciones: %d\n", total);
                    printf("Numero de aprobados: %d\n", aprobados);
                    printf("Numero de reprobados: %d\n", reprobados);
                    printf("Suma total: %.2f\n", suma_total);
                    printf("Suma aprobados: %.2f\n", suma_aprobados);
                    printf("Suma reprobados: %.2f\n", suma_reprobados);
                    printf("Promedio general: %.2f\n", promedio_total);
                    printf("Promedio aprobados: %.2f\n", promedio_aprobados);
                    printf("Promedio reprobados: %.2f\n", promedio_reprobados);
                }

                break;

            // OPCION 3: REINICIAR DATOS
            case 3:

                total = 0;
                aprobados = 0;
                reprobados = 0;
                suma_total = 0;
                suma_aprobados = 0;
                suma_reprobados = 0;

                printf("Datos reiniciados correctamente.\n");
                break;

            // OPCION 4: SALIR
            case 4:
                printf("Saliendo del programa...\n");
                break;

            default:
                printf("Opcion no valida.\n");
        }

    }while(opcion != 4);

    return 0;
}
