#include <stdio.h>
#include <stdlib.h>

void imprime_invertido(unsigned int n) {

    if (n < 10) {
        printf("%u", n);
    }
    else {
        
        printf("%u", n % 10);       
        imprime_invertido(n / 10); 
    }
}

int main() {

    system("cls");

    unsigned int num;

    printf("Digite um numero: ");
    scanf("%u", &num);

    printf("Digitos invertidos: ");
    imprime_invertido(num);
    printf("\n");
    
    return 0;
}