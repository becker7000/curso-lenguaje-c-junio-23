#include<stdio.h>

int main(){

    int opcion;

    printf("\n\t +---------------+");
    printf("\n\t | 1. Moneda     |");
    printf("\n\t | 2. Dado       |");
    printf("\n\t | 3. Adivida    |");
    printf("\n\t | 4. Gato       |"); 
    printf("\n\t | 5. Salir      |");   
    printf("\n\t +---------------+");    
    printf("\n\t Opcion: ");
    scanf("%d",&opcion);

    switch(opcion){ // Sólo puede recibir tipos int y char.

        case 1:
            printf("\n\t Jugando a lanzar un volado.");
            break;
        case 2:
            printf("\n\t Jugando a lanzar el dado.");
            break;
        case 3:
            printf("\n\t Jugando a adivinar el numero.");
            break;
        case 4:
            printf("\n\t Jugando al gato.");
            break;
        case 5:
            printf("\n\t Saliendo de la sala de juegos.");
            break;
        default: // Es opcional (se recomienda que la opción ya venga filtrada)
            printf("\n\t Esa opcion no esta contemplada.");
            break;                    

    }

    return 0;
}

// Tarea: con la lógica de números aleatorios y con una estructura switch hacer un dado.