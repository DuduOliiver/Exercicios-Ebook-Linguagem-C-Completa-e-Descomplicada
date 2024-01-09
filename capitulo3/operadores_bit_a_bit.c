#include <stdio.h>
#include <stdlib.h>

/*
Basicamente, os operadores &, |, e ^ fazem uma comparação lógica para cada um dos bits dos valores avaliados.

    Operador E bit a bit (&): um bit terá valor 1 na expressão resultante somente se ambas as expressões unidas por esse operador também tiverem o valor 1 nos bits daquela posição:
        00101100 = x (valor igual a 44)
        10100111 = 167
        00100100 = x & 167 (valor igual a 36)

    Operador OU bit a bit (|): um bit terá valor 1 na expressão resultante se alguma das expressões unidas por esse operador também tiver o valor 1 no bit daquela posição:
        00101100 = x (valor igual a 44)
        10000001 = 129
        10101101 = x | 129 (valor igual a 173)

    Operador OU EXCLUSIVO bit a bit (^): um bit terá valor 1 na expressão resultante somente se ambas as expressões unidas por esse operador tiverem valores de bits diferentes naquela posição:
        00101100 = x (valor igual a 44)
        10100111 = 167
        10001011 = x ^ 167 (valor igual a 139
*/

int main(){
    unsigned char x,y;
    x = 44;
    printf("x = %d\n", x);
    y = x & 167;
    printf("x & 167 = %d\n", y);
    y = x | 129;
    printf("x | 129 = %d\n", y);
    y = x ^ 167;
    printf("x ^ 167 = %d\n", y);
    system("pause");
    return 0;
}