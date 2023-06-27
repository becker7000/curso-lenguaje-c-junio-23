#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    int control=1;
    srand(time(NULL));

    while(control!=2){
        printf("\n\t Aleatorio: %d ",rand()%50);
        printf("\n\t 1) Generar otro aleatorio 2) Salir ");
        printf("\n\t => ");
        scanf("%d",&control);
    }


    printf("\n");
    return 0;
}