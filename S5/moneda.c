#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    system("cls");

    srand(time(NULL)); // Se configura la semilla en función del reloj.
    int moneda = rand()%2; // 0%2, 21304%2, 28999, 45001, 50246, 65000.

    // printf("\n\t Moneda: %d",moneda);

    if(moneda==0){
        printf("\n\t Soooool");
    }else{
        printf("\n\t Aguilaaa");
    }

    return 0;
}


// 4%2 = 0
// 7%2 = 1
// 8%2 = 0
// 9%2 = 1
// 10%2 = 0