#include <stdio.h>

/*Faça um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade e do ano atual.*/

int main(){
    int idade,ano;
    int nascimento=0;
    printf("Digite sua idade e ano atual: ");
    scanf("%d %d",&idade,&ano);
    nascimento = ano-idade;
    printf("nascimento = %d",nascimento); //pode dar errado caso a pessoa não tenha feito aniversário. 
    return 0;
}