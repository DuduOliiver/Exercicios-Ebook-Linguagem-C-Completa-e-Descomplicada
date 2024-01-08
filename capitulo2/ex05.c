#include <stdio.h>

/*
5) Faça um programa que leia um valor do tipo float e depois o imprima usando o operador “%d”. Veja o que aconteceu.
*/

int main(){
    float n1;
    printf("Digite um valor do tipo float: ");
    scanf("%f", &n1);
    printf("Valor digitado: %f", n1);
    return 0;
}