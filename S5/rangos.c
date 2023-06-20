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

    if(opcion>=1 && opcion<=5){
        printf("\n\t Opcion valida...");
    }else{
        printf("\n\t Opcion no valida...");
    }

    return 0;
}