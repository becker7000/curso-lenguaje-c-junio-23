#include<stdio.h>

int main(){

    // Este programa nos dirá si un número entero es múltiplo de 7 o no.

    int numero;
    printf("\n\t Escribe un numero: ");
    scanf("%d",&numero);

    if(numero%7==0){ // 0,7,14,21,28,35,42,49,56,...
        printf("\n\t El numero es multiplo de 7.");
    }else{
        printf("\n\t El numero no es multiplo de 7.");
    }

    return 0;
}

/*

    A   A   A   A   A
    A   A   A   A   A
    A   A   A   A   A

    si elemento%5==0 entonces haz un salto de línea

*/