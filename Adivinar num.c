#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int opcion=0;
    int puntuacion=0;
    srand(time(NULL));
    while(opcion!=4){
        printf("\n---MENU---\n\n");
        printf("1. Jugar a adivinar numeros\n");
        printf("2. Ver puntuacion\n");
        printf("3. Salir\n");
        printf("Selecciona una opcion: ");
        scanf("%d", &opcion);
        
        if(opcion==1){
            
            int numeroSecreto=1+rand()%100;
            int intento;
            int intentos=0;
            int adivinado=0;
            
            printf("\n---Tienes 5 intentos para adivinar el numero (1-100)---\n");
            while(intentos<5&&adivinado==0){
                printf("Intento %d: ", intentos + 1);
                scanf("%d", &intento); 
                
                if (intento==numeroSecreto){
                    printf("Adivinaste el numero!!!");
                    puntuacion+=10;
                    adivinado =1;
                }else{
                    if(intento < numeroSecreto){
                        printf("Pista: El numero es MAYOR\n");
                    }else{
                        printf("Pista: El numero es Menor\n");
                    }
                }
                
                intentos++;
            }
            
            if(adivinado ==0){
                printf("No adivinaste. El numero correcto era: %d\n", numeroSecreto);
                puntuacion-=5;
            }
        }else if (opcion==3){
            printf("Saliendo del juego...\n");
        }else{
            printf("Opcion invalida. Juega de nuevo\n");
        }
    }
    
    return 0;
}