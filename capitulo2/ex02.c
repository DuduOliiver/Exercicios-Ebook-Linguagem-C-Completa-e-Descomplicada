#include <stdio.h>
#include <stdlib.h>
int main(){
    int a = 125; //valor em decimal
    int b = 0435; //valor em octal
    int c = 0x1FA; //valor em hexadecimal
    printf("Valor de a: %d\n",a);
    printf("Valor de b: %d\n",b);
    printf("Valor de c: %d\n",c);
    system("pause");
    return 0;
}

/*
Saída:
valor de a: 125
valor de b: 285
valor de c: 506
*/