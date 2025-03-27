#include <stdio.h>
#include <stdlib.h>

int main(){

    system("cls");

    int n, i, fat = 1;

    printf("\nDigite um numero para descobrir seu fatorial: ");
    scanf("%d", &n);

    i = n;

    printf("\nFatoracao: %d", n);
    while(i > 1){//coloquei >1 para n imprimir o 0 na fatoracao
        fat = fat * i;
        i--; // i - 1, apos processamento das instrucoes
        printf(" * %d", i);
    }
    printf("\n\nFatorial de %d(%d!)= %d", n, n, fat);
    return 0;
}