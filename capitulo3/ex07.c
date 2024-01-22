#include <stdio.h>

/*Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida, imprima o valor correspondente em dólares.*/

int main(){
    float reais=0,cotacao=0,valor=0;
    printf("Digite o valor em R$: ");
    scanf("%f", &reais);
    printf("Digite a cotacao do dolar hoje: ");
    scanf("%f", &cotacao);
    valor = cotacao*reais;
    printf("Valor em $: %f", valor);
    return 0;
}