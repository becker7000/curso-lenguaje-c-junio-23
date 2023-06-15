#include<stdio.h>

int main(){

    float numero;
    printf("\n\t Escribe un numerito: ");
    scanf("%f",&numero);

    if(numero>0)
        printf("\n\t El numero es positivo...");

    if(numero<0)
        printf("\n\t El numero es negativo...");

    if(numero==0){
        printf("\n\t El numero es exactamente cero.");
        printf("\n\t Esta es una instruccion compuesta.");
    }

    return 0;
}

/*
    En el español, una oración simple es: 
        > Hoy es miércoles.
    Y otra es:
        > Mañana es jueves.
    En cambio si las juntamos:
        > Hoy es miércoles y mañana es jueves.
    Entonces se transforma las oraciones simples en una oración compuesta.   

    Sucede lo mismo en la programación:
        > printf("\n\t Hola a todos hoy miércoles"); 
    Es una instrucción simple, en cambio:
        > {
            printf("\n\t Hola a todos hoy miércoles");
            printf("\n\t Que tenga buen día mañana jueves");
        }     
    Es una instrucción compuesta.
    El lenguaje C, toma esa instruccin como si fuese una sola dado que están dentro de "{}".

*/