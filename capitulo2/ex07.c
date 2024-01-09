#include <stdio.h>

/*7) Elabore um programa que leia um caractere e depois o imprima como um valor inteiro.*/

int main(){
    char ch1;
    printf("Digite um caracter: ");
    scanf("%c",&ch1);
    printf("Digitado: %d",ch1);
    //printf("Digitado: %c",ch1); jeito certo
    return 0;
}

/*
ao utilizar %d para imprimir um caractere, você está exibindo o valor numérico associado a esse caractere de acordo com a tabela ASCII.
*/