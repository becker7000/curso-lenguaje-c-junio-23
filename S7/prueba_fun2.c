#include<stdio.h>

int duplicar(int x);

int main(){

    int i;

    for(i=1;i<=10;i++){
        printf("\n\t %d * 2 = %d",i,duplicar(i));
    }

    return 0;
}

int duplicar(int x){
    return x*2;
}