#include<stdio.h>

int main(){

    int edad;

    printf("\n\t Escribe tu edad: ");
    scanf("%d",&edad);

    // %s es el código de formato que se usa para presentar cadenas (texto) 
    printf("\n\t %s ",(edad>=18)? "Eres mayor de edad" : "Eres menor de edad" );

    return 0;
}