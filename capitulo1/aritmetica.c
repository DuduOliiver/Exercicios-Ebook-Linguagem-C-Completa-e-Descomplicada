#include <stdio.h>
#include <stdlib.h>
#include "aritmetica.h"
int main(){
    int x,y,z;
    char ch;
    printf("Digite uma operacao: \n");
    ch = getchar();
    printf("Digite dois valores: \n");
    scanf("%d %d",&x,&y);
    switch (ch)
    {
    case '+': z = soma(x,y); break;
    case '-': z= subtracao(x,y); break;
    case '/': z= divisao(x,y); break;
    default:  z= soma(x,y); break;
    }
    printf("Resultado: %d\n",z);
    system("Pause");
    return 0;
}
