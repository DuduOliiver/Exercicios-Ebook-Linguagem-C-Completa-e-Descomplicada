#include <stdio.h>
#include <stdlib.h>

/*

Os operadores bit a bit permitem que o programador faça operações em cada bit do número de maneira direta.
Os operadores bit a bit não podem ser aplicados sobre valores dos tipos float e double.

    Basicamente, o operador de complemento bit a bit “∼” serve para inverter o valor dos 0s e 1s que compõem o número. Assim: 
    00101100 = x (valor igual a 44)
    11010011 = ∼x (valor igual a 211)

    Operadores:
        ~ == complemento bit a bit == ~x
        & == E bit a bit == x & 167
        | == OU bit a bit == x | 129
        ^ == OU exclusivo == x ^ 167
        << == deslocamento de bits à esquerda == x << 2
        >> == deslocamento de bits à direita == x >> 2
*/

int main(){
    unsigned char x,y;
    x = 44;
    printf("x = %d\n",x); // output: 44
    y = ~x;
    printf("~x = %d\n",y); // output: 211
    system("Pause");
    return 0;
}