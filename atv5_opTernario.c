#include <stdio.h>
#include <stdlib.h>

int main(){

    system("cls");

    int numero;
    char *parImpar;
    //alterado para char *parImpar, porque estamos tratando de uma string, que é um ponteiro para o primeiro caractere de uma sequência de caracteres.

    printf("\nDigite um numero: ");
    scanf("%d", &numero);

    parImpar = numero % 2 == 0? "Par": "Impar";

    printf("\n%d = %s", numero, parImpar);

    return 0;
}