#include <stdio.h>
#include <stdlib.h>

/**
1) Faça um programa que leia um número inteiro e retorne seu antecessor e seu sucessor.
*/

int main(){
    int n1=0;
    printf("Digite um numero inteiro: ");
    scanf("%d",&n1);
    printf("Sucessor: %d\n",n1+1);
    printf("Antecessor: %d",n1-1);
    return 0;
}