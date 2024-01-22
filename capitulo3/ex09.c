#include <stdio.h>

/*Leia um ângulo em graus e apresente-o convertido em radianos. 
A fórmula de conversão é R = G * π/180, sendo G o ângulo em graus e R em radianos e π = 3.141592.*/

int main(){
    float graus, rad, pi = 3.141592;
    scanf("%f", &graus);
    rad = graus * pi/180;
    printf("%f", rad);
    return 0;
}