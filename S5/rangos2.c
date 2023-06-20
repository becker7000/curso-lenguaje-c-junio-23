#include<stdio.h>
#include<stdlib.h>

int main(){

    float gradosC;
    
    system("cls"); // Limpiar la consola (Windows) (Si tenemos MacOS o Linux se usa "clear")
    printf("\n\t Escribe los grados C: ");
    scanf("%f",&gradosC);

    if(gradosC>=35 && gradosC<=40 || gradosC>=50 && gradosC<=55){
        printf("\n\t Temperatura dentro del rango para algun experimento...");
    }else{
        printf("\n\t La temperatura fuera de rango...");
    }

    return 0;
}