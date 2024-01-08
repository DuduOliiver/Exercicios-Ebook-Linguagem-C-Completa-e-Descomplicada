#include <stdio.h>

/*
4) Faça um programa que leia um número inteiro e depois o imprima usando o operador “%f”. Veja o que aconteceu.
*/

int main(){
    int n1;
    printf("Insira um valor: ");
    scanf("%d",&n1);
    printf("Valor lido: %f", n1);
    //printf("Valor lido: %d", n1);
    return 0;
}

/*
Saída: 
Valor lido: 0.000000
*/