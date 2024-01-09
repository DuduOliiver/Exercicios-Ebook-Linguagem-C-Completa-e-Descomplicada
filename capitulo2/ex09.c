#include <stdio.h>

/*
9) Faça um programa que leia dois valores do tipo float. Use um único comando de leitura para isso.
Em seguida, imprima os valores lidos na ordem inversa em que eles foram lidos.
*/

int main(){
    float f1,f2;
    printf("Digite 2 valores do tipo float: ");
    scanf("%f %f", &f1,&f2);
    printf("Ordem reversa: %f %f",f2,f1);
    return 0;
}