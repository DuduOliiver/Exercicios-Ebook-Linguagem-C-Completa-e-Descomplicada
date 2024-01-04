/*
Além de char,int,float,double,void, a linguagem C possui quatro modificadores de tipos que permitem alterar o significado do tipo.

signed char x = determina variável declarada do tipo char ou int. Pode ter valores positivos e negativos, como o modo padrão já é dessa forma, quase nunca é utilizado explicitamente.
unsigned char x = variável do tipo char ou int poderá somente ter valores positivos e o valor zero. uma variável char armazena valor de -128 até 127, se for declarada como unsigned, será capaz de armazenar 0 até 255.
short int i = determina que uma variável do tipo int terá apenas 16bits (inteiro pequeno).
long int/double n = faz o inverso de short, determina que a variável int tenha 32 bits (inteiro grande) independente do processador e também determina que o tipo double possua maior precisão.
*/

signed char x;
unsigned char x;
short int i;
long int n;
long double n2;
