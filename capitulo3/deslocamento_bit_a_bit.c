#include <stdio.h>
#include <stdlib.h>

/*
Esses operadores servem simplesmente para mover N bits para a esquerda ou para a direita
    00101100 = x (44)
    10110000 = x << 2 (valor igual a 176)
    00001011 = x >> 2 (valor igual a 11)
*/


int main(){
    unsigned char x,y;
    x = 44;
    printf("x = %d\n",x);
    y = x << 2;
    printf("x << 2 = %d\n",y);
    y = x >> 2;
    printf("x >> 2 = %d\n",y);
    system("pause");
    return 0;
}