#include<stdio.h>

int main(){

    int niveles,i,j;

    printf("\n\t Escribe el numero de niveles: ");
    fflush(stdin); // Limpia el buffer de entrada.
    scanf("%d",&niveles);

    i=1;
    while(i<=niveles){ // Imprime cada nivel.

        printf("\n\n"); // Cada nivel estará en una línea.
        j=1;
        while(j<=i){ // Imprime asteriscos
            printf("\t #");
            j++;
        }

        i++;

    }


    printf("\n\n");
    return 0;
}


/*

    RETO 1:

    niveles: 5

    a
    a   b
    a   b   c
    a   b   c   d
    a   b   c   d   e


    RETO 2: (triagulo centrado), niveles: 4

            *
          *   *
        *   *   *
      *   *   *   *
    
    RETO 3: (rombo), niveles: 4

            *
          *   *
        *   *   *
      *   *   *   *
        *   *   *
          *   *
            *

    ARTE ASCII...


*/