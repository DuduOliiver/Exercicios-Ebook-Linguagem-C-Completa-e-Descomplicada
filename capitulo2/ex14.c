#include <stdio.h>

/*14) Faça um programa que leia três caracteres do tipo char e depois os imprima um em cada linha. Use um único comando printf() para isso.*/

int main(){
    char c1,c2,c3;
    printf("Digite 3 caracteres (B B B): ");
    scanf("%c %c %c", &c1,&c2,&c3);
    printf("Valor 1: %c\nValor 2: %c\nValor 3: %c\n", c1,c2,c3);
    return 0;
}