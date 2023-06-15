#include<stdio.h>

int main(){

    float monto_sin_iva, monto_con_iva;

    printf("\n\t Escribe un monto sin IVA: $");
    scanf("%f",&monto_sin_iva);

    // $200 sin iva, pero ya con iva son $232 
    // Si $200 es el 100%, entonces $232 es el 116%

    monto_con_iva = monto_sin_iva*(1.16);

    printf("\n\t El monto con IVA es: $%.2f",monto_con_iva);

    return 0;
}