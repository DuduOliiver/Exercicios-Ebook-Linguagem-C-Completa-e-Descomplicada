#include <stdio.h>

/*10) Elabore um programa que solicite ao usuário entrar com o valor do dia, mês e ano (inteiros).
Em seguida, imprima os valores lidos separados por uma barra (\).*/

int main(){
    int dia,mes,ano;
    printf("Insira o dia: ");
    scanf("%d", &dia);
    printf("Insira o mes: ");
    scanf("%d", &mes);
    printf("Insira o ano: ");
    scanf("%d", &ano);
    printf("Data: %d/%d/%d",dia,mes,ano);
    return 0;
}