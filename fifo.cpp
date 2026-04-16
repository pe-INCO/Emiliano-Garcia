#include <stdio.h> 
#define MAX 5        

int cola[MAX];

int frente = 0, final = -1;


 //Función: encolar
void encolar(int valor) {
    // Verifica si la cola está llena
    if (final == MAX - 1) {
        printf("La cola esta llena\n");
    } else {
        final++;                 
        cola[final] = valor;     
        printf("Elemento agregado: %d\n", valor);
    }
}

 //Función: desencolar
 
void desencolar() {
    // Verifica si la cola está vacía
    if (frente > final) {
        printf("La cola esta vacia\n");
    } else {
        printf("Elemento eliminado: %d\n", cola[frente]);
        frente++; 
    }
}


 //Función: mostrar

void mostrar() {
    if (frente > final) {
        printf("La cola esta vacia\n");
    } else {
        printf("Cola: ");
        for (int i = frente; i <= final; i++) {
            printf("%d ", cola[i]);
        }
        printf("\n");
    }
}

 //Función principal
 
int main() {
    int opcion, valor;

    do {
        printf("\n--- MENU FIFO (COLA) ---\n");
        printf("1. Encolar\n");
        printf("2. Desencolar\n");
        printf("3. Mostrar\n");
        printf("4. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                printf("Ingrese un valor: ");
                scanf("%d", &valor);
                encolar(valor); 
                break;

            case 2:
                desencolar(); 
                break;

            case 3:
                mostrar(); 
                break;

            case 4:
                printf("Saliendo...\n");
                break;

            default:
                printf("Opcion invalida\n");
        }

    } while(opcion != 4); 

    return 0;
}