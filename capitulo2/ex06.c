#include <stdio.h>

/*
6) Faça um programa que leia um valor do tipo double e depois o imprima na forma de notação científica.
*/

int main(){
    double n1;
    printf("Digite um valor double: ");
    scanf("%lf", &n1);
    printf("Valor digitado: %f\n", n1);
    printf("notacao cientifica: %E", n1);
    return 0;
}