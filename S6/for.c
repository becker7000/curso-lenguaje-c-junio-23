#include<stdio.h>

int main(){

    int i;

    for(i=1;i<=10;i++){ // Variable de control, condición, incremento
        printf("\n\t %d %s ",i,(i%2==0)? "par" : "impar");
    }

    printf("\n");
    return 0;
}