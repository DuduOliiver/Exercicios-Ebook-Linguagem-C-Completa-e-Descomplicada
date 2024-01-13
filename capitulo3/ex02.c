#include <stdio.h>

/*2) Faça um programa que leia um número real e imprima a quinta parte desse número.*/

int main(){
    float num=0.0,quintaParte;
    printf("Digite um numero real: ");
    scanf("%f", &num);
    quintaParte=num/5;
    printf("%f",quintaParte);
    return 0;
}