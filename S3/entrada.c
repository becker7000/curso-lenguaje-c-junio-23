#include<stdio.h>

int main(){

    // Entradas:
    int x, cuadrado;

    printf("\n\t Escribe un n\xa3mero: "); // Instrucción para el usuario.
    scanf("%d",&x); // Formato y la dirección donde va a guardar el dato.
    // & significa "dame tu dirección"

    // Calculos:
    cuadrado=x*x;

    // Salidas:
    printf("\n\t El cuadrado de %d es %d",x,cuadrado);

    return 0;
}