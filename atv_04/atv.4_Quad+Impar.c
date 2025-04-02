#include <stdio.h>
#include <stdlib.h>

int main(){

    system("cls");

    int n, i, quad = 0, impar = 1;
    printf("Digite um numero para descobrir seu valor elevado ao quadrado atraves da soma de seus impares: ");
    scanf("%d", &n);

    printf("\nSoma dos impares: 1");
    for(i = 0; i < n; i++){
        quad = quad + impar;
        impar += 2;
        printf(" + %d", impar);
    }
    printf("\n\n%d elevado ao quadrado = %d", n, quad);

    return 0;
}