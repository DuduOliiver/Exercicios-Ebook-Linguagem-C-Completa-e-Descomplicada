#include <stdio.h>

/*
Leia o valor do raio de um círculo. Calcule e imprima a área
do círculo correspondente. A área do círculo é A = π* raio2,
sendo π = 3.141592.
*/

int main(){
    float pi = 3.141592;
    float raio=0;
    float area = 0;
    printf("Digite o valor raio do circulo: ");
    scanf("%f", &raio); 
    area = pi*(raio*raio); 
    printf("Area = %f", area);
    return 0;
}