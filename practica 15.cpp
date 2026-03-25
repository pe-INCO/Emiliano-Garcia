#include <stdio.h>
    int arreglo[10] = {1,23,13,4,25,64,7,38,29,12};
    int buscar;
    int encontrado = 0;    
    int main()
    {
        printf("Dime el numero a buscar: ");
        scanf("%d", &buscar);
       
    for (int i = 0; i < 10; i++) {
        if (arreglo[i] == buscar) {
            printf("Número encontrado en la posicion: %d\n", i);
            encontrado = 1;
            break;
        }
    }

    if (encontrado==0) {
        printf("Número no encontrado en el arreglo.\n");
    }

    return 0;
}
