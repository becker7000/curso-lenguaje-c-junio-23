#include<stdio.h>

float calcularIMC(float masa,float estatura);

int main(){

    float imc;
    // Llamada: se reciben los valores directos.
    imc = calcularIMC(65,1.56);
    printf("\n\t El imc es: %.2f",imc);

    return 0;
}

float calcularIMC(float masa,float estatura){
    float imc; // Variable local.
    imc = masa/(estatura*estatura);
    return imc;
}