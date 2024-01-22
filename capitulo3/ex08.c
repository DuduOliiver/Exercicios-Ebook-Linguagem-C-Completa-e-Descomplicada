#include <stdio.h>

/*Leia um valor que represente uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. 
A fórmula de conversão é: F = C * (9.0/5.0) + 32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.*/

int main(){
    float Celsius=0;
    printf("Digite a temperature em grau celsius: ");
    scanf("%f",&Celsius);
    printf("Convertendo para Fahrenheit...\n");
    printf("Valor: %f", Celsius*(9.0/5.0)+32);
    return 0;
}