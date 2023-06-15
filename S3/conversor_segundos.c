
#include<stdio.h>

int main(){

    int segundos=200;
    int minutos;

    // %d es un código de formato que sirve para prentar números enteros.
    printf("\n\t %d segundos son equivalentes a: ",segundos);

    // Cálculos:
    minutos=segundos/60; // 200/60 = 3
    segundos=segundos%60; // 200%60 = 20

    printf("%d minutos con %d segundos",minutos,segundos);

    printf("\n\n");
    
    return 0;
}

