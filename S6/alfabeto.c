#include<stdio.h>

int main(){

    char letra = 'A'; // Variable de control

    printf("\n\t Alfabeto: ");
    while(letra<='Z'){ // Condición
        printf(" %c",letra);
        letra++; // Incremento
    }

    printf("\n\n");
    return 0;
}