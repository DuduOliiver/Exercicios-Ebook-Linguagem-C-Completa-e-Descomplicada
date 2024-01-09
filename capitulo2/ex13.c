#include <stdio.h>

/*13) Faça um programa que leia um caractere do tipo char e depois o imprima entre aspas duplas. Assim, se o caractere lido for a letra A, deverá ser impresso “A”.*/

int main(){
    char c1;
    printf("Digite um char: ");
    scanf("%c", &c1);
    printf("Valor: \"%c\" ",c1); //sequência de escape.
    return 0;
}