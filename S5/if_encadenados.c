#include<stdio.h>

int main(){

    int numero;
    printf("\n\t Escribe un numero: ");
    scanf("%d",&numero);

    if(numero<0){
        printf("\n\t El numero es negativo...");
    }else if(numero>0){
        printf("\n\t El numero es positivo...");
    }else {
        printf("\n\t El numero es exactamente cero...");
    }

    return 0;
}