#include <stdio.h>
#define MAX 5        

// Arreglo que representa la pila
int pila[MAX];

// Variable que indica la cima de la pila
int tope = -1;

/*
 * Función: push
 * -------------
 * Inserta un elemento en la pila (LIFO).
 */
void push(int valor) {
    // Verifica si la pila está llena
    if (tope == MAX - 1) {
        printf("La pila esta llena\n");
    } else {
        tope++;              // Sube la cima
        pila[tope] = valor;  // Inserta el valor
        printf("Elemento agregado: %d\n", valor);
    }
}

/*
 * Función: pop
 * ------------
 * Elimina el último elemento agregado (LIFO).
 */
void pop() {
    // Verifica si la pila está vacía
    if (tope == -1) {
        printf("La pila esta vacia\n");
    } else {
        printf("Elemento eliminado: %d\n", pila[tope]);
        tope--;  // Baja la cima
    }
}

/*
 * Función: mostrar
 * ----------------
 * Muestra los elementos de la pila desde la cima hacia abajo.
 */
void mostrar() {
    if (tope == -1) {
        printf("La pila esta vacia\n");
    } else {
        printf("Pila: ");
        for (int i = tope; i >= 0; i--) {
            printf("%d ", pila[i]);
        }
        printf("\n");
    }
}

/*
 * Función principal
 */
int main() {
    int opcion, valor;

    do {
        printf("\n--- MENU LIFO (PILA) ---\n");
        printf("1. Push (Insertar)\n");
        printf("2. Pop (Eliminar)\n");
        printf("3. Mostrar\n");
        printf("4. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                printf("Ingrese un valor: ");
                scanf("%d", &valor);
                push(valor);
                break;

            case 2:
                pop();
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