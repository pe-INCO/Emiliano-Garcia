#include <stdio.h>

int main() {
    
    FILE *archivo;
    FILE *archivo1;

    // Abrir archivos en modo escritura "w"
    archivo = fopen("depositos.txt", "w");
    archivo1 = fopen("retiros.txt", "w");

    if (archivo == NULL) {
        printf("Error al abrir el archivo de depositos\n");
        return 1;
    }

    if (archivo1 == NULL) {
        printf("Error al abrir el archivo de retiros\n");
        return 1;
    }

    fprintf(archivo, "Aqui se mostraran los depositos\n");
    fprintf(archivo, "El Deposito es de: %d\n", 500);
    fprintf(archivo, "Deposito Hecho.\n");

    fprintf(archivo1, "Aqui se mostraran los Retiros\n");
    fprintf(archivo1, "El Retiro es de: %d\n", 500);
    fprintf(archivo1, "Retiro Hecho.\n");

    // ambos archivos 
    fclose(archivo);
    fclose(archivo1);

    printf("Archivo escrito exitosamente\n");

    return 0;
}