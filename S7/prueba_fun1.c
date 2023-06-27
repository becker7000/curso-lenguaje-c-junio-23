#include<stdio.h>

void saludar(); // Prototipo...

int main(){

    saludar(); // Llamado...
    saludar();
    saludar();

    return 0;
}

void saludar(){ // Definición...
    static int contador=1;
    printf("\n\t Hola desde llamada a la funcion -> %d",contador++);
}

/*
    Nota: static hace que el valor del contador sólo se 
          inicialice una única vez, por toda la ejecución del programa.
*/