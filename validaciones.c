#include <stdio.h>

int main(){
    int opcion, edad;
    float cal;
    char nombre[41];   // 40 caracteres + 1 para '\0'
    int i, valido;

    do{
        printf("\n---VALIDACIONES MENU---\n\n");
        printf("1. Ingresa tu edad (18 y 80)\n");
        printf("2. Ingresar calificacion (0 y 100)\n");
        printf("3. Ingresa tu nombre\n");
        printf("4. Salir\n");
        printf("Elige una opcion: ");
        scanf("%d", &opcion);

        switch(opcion){

            case 1:
                printf("Ingresa tu edad: ");
                scanf("%d", &edad);
                
                if(edad >= 18 && edad <= 80){
                    printf("Edad valida\n");
                }else{
                    printf("Edad invalida\n");
                }
                break;

            case 2:
                printf("Ingresa tu calificacion: ");
                scanf("%f", &cal);
                
                if(cal >= 0 && cal <= 100){
                    printf("Calificacion valida\n");
                }else{
                    printf("Calificacion invalida\n");
                }
                break;

            case 3:
                printf("Ingresa tu nombre: ");
                getchar(); // limpiar salto de línea pendiente
                fgets(nombre, 41, stdin);

                i = 0;
                valido = 1;

                while(nombre[i] != '\0' && nombre[i] != '\n'){
                    
                    if(!((nombre[i] >= 'A' && nombre[i] <= 'Z') ||
                         (nombre[i] >= 'a' && nombre[i] <= 'z') ||
                         (nombre[i] == ' '))){
                        valido = 0;
                    }
                    i++;
                }

                if(i == 0){
                    printf("Nombre invalido (vacio)\n");
                }
                else if(valido == 1){
                    printf("Nombre valido\n");
                }
                else{
                    printf("Nombre invalido (solo letras y espacios)\n");
                }
                break;

            case 4:
                printf("Saliendo...\n");
                break;

            default:
                printf("Opcion invalida\n");
        }

    }while(opcion != 4);
    
    return 0;
}