#include <stdio.h>

/*
15) Escreva um programa que leia três variáveis:
char, int e float. Em seguida, imprima-as de três maneiras diferentes: separadas por espaços, por uma tabulação horizontal e uma em cada linha.
Use um único comando printf() para cada operação de escrita das três variáveis.
*/

int main(){
    char c1;
    int n1;
    float f1;
    printf("Digite 1 caracter: ");
    scanf("%c", &c1);
    printf("Digite 1 numero inteiro: ");
    scanf("%d", &n1);
    printf("Digite 1 numero float: ");
    scanf("%f", &f1);
    printf("Valor: %c %d %f\n", c1,n1,f1);
    printf("Valor: %c\t%d\t%f\n", c1,n1,f1);
    printf("Valor: \n%c\n%d\n%f\n", c1,n1,f1);
    return 0;
}