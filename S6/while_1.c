#include<stdio.h>

int main(){

    int i=1; // Variable de control

    printf("\n\t Tabla del 7. \n\n");
    while(i<=10){ // Condición

        printf("\n\t 7 * %d = %d",i,7*i);
        i++; // Incremento (postincremento)

    }

    return 0;
}