#include <stdio.h>

/*Leia uma velocidade em km/h (quilômetros por hora) e apresente convertida em m/s (metros por segundo). A fórmula
de conversão é M = K/36, sendo K a velocidade em km/h e M em m/s.*/

int main(){
    float kmh=0,msh=0;
    printf("Digite a velocidade em km/h: ");
    scanf("%f", &kmh);
    msh=kmh/3.6;
    printf("%f", msh);
    return 0;
}