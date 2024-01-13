#include <stdio.h>

/*3) Faça um programa que leia três valores inteiros e mostre sua soma.*/

int main(){
    int n1=0,n2=0,n3=0;
    printf("Digite 3 valores inteiros: ");
    scanf("%d %d %d", &n1,&n2,&n3);
    printf("Soma = %d", n1+n2+n3);
    return 0;
}