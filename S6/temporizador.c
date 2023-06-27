#include<stdio.h>
#include<stdlib.h>
#include<windows.h> // Sleep

int main(){

    int segundos; // Variable de control

    printf("\n\t Escribe los segundos: ");
    fflush(stdin);
    scanf("%d",&segundos);

    while(segundos>0){ // Condición
        printf("\n\t\a seg: %d ",segundos);
        Sleep(1000); // Pone pausas un milisegundos.
        segundos--; // Decremento
    }

    printf("\n\t Cuenta finalizada... \n\n");
    system("pause");
    return 0;
}