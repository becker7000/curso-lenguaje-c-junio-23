#include<stdio.h>
#include "mis_funciones.h" // Mandando a llamar el archivo con las funciones.

int main(){

    saludarUsuarios();
    printf("\n\t Imc con masa: 70 y estatura: 1.8 es: %.2f",calcularIMC(70,1.8));
    printf("\n\t Area de un circulo de radio 7 es: %.2f",calcularArea(7));

    return 0;
}

/*

    Tarea: 
        Hacer un archivo de cabecera con varias funciones que calculen
        cantidades comunes en geometría.
        Incluir al menos 2 formulas del tríangulo, círculo y pentágono. (6 funciones).
        Probarlo en otro archivo.

*/