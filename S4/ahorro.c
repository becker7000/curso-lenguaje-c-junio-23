#include<stdio.h>

int main(){

    int ahorro=0;

    ahorro+=100;
    ahorro+=250;
    ahorro+=150;
    ahorro+=50;
    ahorro*=2; // $1100

    printf("\n\t Ahorraste finalmente $%d",ahorro);

    return 0;
}