#include <stdio.h>

int main() {
    // n: cantidad de términos que el usuario desea
    // t1 y t2: primeros dos términos de la secuencia
    // siguiente: almacena el próximo número de Fibonacci
    int n, t1 = 0, t2 = 1, siguiente;

    // Solicita al usuario la cantidad de términos
    printf("¿Cuántos términos de Fibonacci quieres?: ");
  if (scanf("%d", &n) != 1) {
        printf("Error: debes ingresar un número entero\n");
        return 1;
    }
    // Validación de entrada
    if (n <= 0) {
        printf("Error: selecciona un número mayor que 0.\n");
        return 1; // termina el programa
    }

    // Muestra un mensaje inicial
    printf("Secuencia de Fibonacci:\n");

    // Bucle que genera la secuencia
    for (int i = 1; i <= n; i++) {
        printf("%d ", t1);

        // Calcula el siguiente término
        siguiente = t1 + t2;

        // Actualiza los valores
        t1 = t2;
        t2 = siguiente;
    }

    printf("\n");
    return 0;
}