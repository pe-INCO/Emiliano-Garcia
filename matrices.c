#include <stdio.h>

#define FILAS 3
#define COLUMNAS 4

int main(){
    int i,j;
    float notas[3][4];
    float suma;
    int opcion;
    
    do {
        printf("\n--- MENU ---\n");
        printf("1. Ingresar notas\n");
        printf("2. Mostrar matriz\n");
        printf("3. Promedio por estudiante\n");
        printf("4. Promedio por materia\n");
        printf("5. Nota mas alta\n");
        printf("6. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);
        
        switch(opcion){
            case 1;
                for(i=0, i<FILAS;i++){
                    printf("\nEstudiante %d:\n", i+1);
                    for(j=0;j<COLUMNAS;j++){
                        printf("Ingrese la nota de la materia %d: ", j+1);
                        scanf("%f", &notas[i][j]);
                    }
                }
                datosIngresados =1;
                break;
        }

    return 0;
}       