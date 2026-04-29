#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char frase[200];  
    char aux[200];   
    int len, i;      

    // Pedimos una frase
    printf("Escribe una frase: ");
    fgets(frase, 200, stdin);

    // Quitamos el enter
    frase[strcspn(frase, "\n")] = '\0';

    // calculo de caracteres 
    len = strlen(frase);
    printf("\nLa longitud es: %d\n", len);

    // Mostrar los primeros 3 caracteres
    printf("Inicio: ");
    for(i = 0; i < 3 && i < len; i++) {
        printf("%c", frase[i]);
    }

    // Mostrar los ultimos 3 caracteres
    printf("\nFinal: ");
    if(len >= 3) {
        for(i = len - 3; i < len; i++) {
            printf("%c", frase[i]);
        }
    } else {
        printf("%s", frase);
    }

    // Pasar todo a mayusculas
    strcpy(aux, frase);
    for(i = 0; aux[i] != '\0'; i++) {
        aux[i] = toupper(aux[i]);
    }
    printf("\nEn mayusculas: %s", aux);

    // Pasar todo a minusculas
    strcpy(aux, frase);
    for(i = 0; aux[i] != '\0'; i++) {
        aux[i] = tolower(aux[i]);
    }
    printf("\nEn minusculas: %s", aux);

    // Cambiar letras a por arroba
    strcpy(aux, frase);
    for(i = 0; aux[i] != '\0'; i++) {
        if(aux[i] == 'a' || aux[i] == 'A') {
            aux[i] = '@';
        }
    }
    printf("\nCon reemplazo: %s\n", aux);

    return 0;
}