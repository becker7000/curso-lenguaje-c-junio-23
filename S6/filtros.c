#include<stdio.h>

int main(){

    int opcion; // Variable de control

    printf("\n\t +---------------+");
    printf("\n\t | 1. Moneda     |");
    printf("\n\t | 2. Dado       |");
    printf("\n\t | 3. Adivida    |");
    printf("\n\t | 4. Gato       |"); 
    printf("\n\t | 5. Salir      |");   
    printf("\n\t +---------------+");    

    // El bucle do-while: ejecuta al menos una vez su bloque...
    // Es bloque se repite si el usuario mete una opcion<1 o opcion>5
    do{ // Filtro para opciones de 1 a 5.
        printf("\n\t Opcion: ");
        fflush(stdin);
        scanf("%d",&opcion); // Variación de variable de control.
    }while(opcion<1 || opcion>5); // Condición


    printf("\n\n\t Opcion valida...");

    printf("\n\n");
    return 0;
}