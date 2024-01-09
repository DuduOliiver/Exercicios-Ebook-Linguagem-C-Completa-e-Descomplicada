#include <stdio.h>

/*8) Faça um programa que leia dois números inteiros e depois os imprima na ordem inversa em que eles foram lidos.*/

int main(){
    int n1,n2;
    printf("Digite o valor 1: ");
    scanf("%d",&n1);
    printf("Digite o valor 2: ");
    scanf("%d",&n2);
    printf("Ordem reversa: %d,%d",n2,n1);
    return 0;
}