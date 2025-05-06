#include <stdio.h>
#include <stdlib.h>

unsigned int produto_soma( int x,  int y) {

    if (y == 0) return 0;

    return x + produto_soma(x, y - 1);

}   

int main() {

    system("cls");

    unsigned int x, y;

    printf("\nDigite x e y:");
    scanf("%d %d", &x, &y);

    printf("%u * %u = %u\n", x, y, produto_soma(x, y)); 
    
    return 0;

}

/*
Respostas às Perguntas:
1. Quais são as soluções triviais?
a = 0: Qualquer número multiplicado por 0 é 0.

a = 1: Qualquer número multiplicado por 1 é ele mesmo (b).

2. Qual é a solução geral?
A solução geral é decompor o problema em somas sucessivas:
a×b=b+(a−1)×ba×b=b+(a−1)×b

3. O problema está diminuindo?
Sim, pois a cada chamada recursiva, o valor de a é reduzido em 1 (a - 1), aproximando-se de um caso trivial (a = 0 ou a = 1).
*/