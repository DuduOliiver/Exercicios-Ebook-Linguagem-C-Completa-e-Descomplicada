#include <stdio.h>

/*
A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso, sendo que:
i. O primeiro ganhador receberá 46% do total.
ii. O segundo receberá 32% do total.
iii. O terceiro receberá o restante.
*/

int main(){
    float ganhador1, ganhador2, ganhador3, premio;
    premio = 780000.00;
    ganhador1 = premio * 0.46; // 46% de 780.000
    ganhador2 = premio * 0.32; // 32% de 780.000
    ganhador3 = premio - (ganhador1 + ganhador2);
    /* %0.2f ou %.2f significa que o numero de casas decimais sera 
    arrendondada p/ ter apenas 2 casas */
    printf("Ganhador 1 recebera: %0.2f\n", ganhador1);
    printf("Ganhador 2 recebera: %.2f\n", ganhador2);
    printf("Ganhador 3 recebera: %.2f\n", ganhador3);

    return 0;
}