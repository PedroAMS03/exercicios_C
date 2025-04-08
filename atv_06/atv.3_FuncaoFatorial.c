#include <stdio.h>
#include <stdlib.h>

int fatorial(int n){
    int fat = 1, i;
    i = n;
    while(i > 1){
        fat = fat * i;
        i--;
    }
    return fat;
}

int main(){

    system("cls");

    int n, fat;

    printf("Digite um numero para descobrir seu fatorial: ");
    scanf("%d", &n);

    fat = fatorial(n);
    printf("\n\nFatorial de %d(%d!)= %d\n\n", n, n, fat);
    return 0;
}