#include<stdio.h>

int main(){

    char letra;
    printf("\n\t Escribe una letra: ");
    scanf("%c",&letra);

    switch(letra){

        case 'a': case 'A':
        case 'e': case 'E':
        case 'i': case 'I':
        case 'o': case 'O':
        case 'u': case 'U':
            printf("\n\t El caracter es una vocal.");
            break;
        default:
            printf("\n\t El caracter no es ninguna vocal.");    

    }    

    return 0;
}

// Tarea: hacer un programa que pida un numero del 1 al 12.
// e imprima el mes correspondiente: Ejemplo: si se digita "1" entonces se imprime "Enero".