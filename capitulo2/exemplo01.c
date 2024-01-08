#include <stdio.h>
#include <stdlib.h>
int main(){
    int x; //declara a variável mas não define o valor
    printf("x = %d\n",x);
    x = 5; //define o valor de x como sendo 5
    printf("x = %d\n",x);
    system("pause");
    return 0;
}

/*
Saída:
x = qualquer valor.
x = 5

Motivo dá primeira saída ser um valor aleatório é que uma variável é uma posição de memória em que podemos guardar dados porém não existe memória "vazia", 
pois a posição de memória está preenchido com números binários, o que muda é estar em uso ou não, quando não utilizada já é preenchido por padrão com "lixo de memória".
*/