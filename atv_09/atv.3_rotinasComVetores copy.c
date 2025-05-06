#include <stdio.h>
#include <stdlib.h>
#define max 7

// Função que obtém as temperaturas da semana
void obtem(float t[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Digite a temperatura do dia %d: ", i + 1);
        scanf("%f", &t[i]);
    }
}

// Função que calcula a média das temperaturas
float media(float t[], int n) {
    float soma = 0;
    for (int i = 0; i < n; i++) {
        soma += t[i];
    }
    return soma / n;
}

// Função que conta quantos dias estão acima da média
int conta(float t[], int n, float m) {
    int cont = 0;
    for (int i = 0; i < n; i++) {
        if (t[i] > m) {
            cont++;
        }
    }
    return cont;
}

int main() {

    system("cls");

    float temp[max], m;
    obtem(temp, max);
    m = media(temp, max);
    printf("Estatistica: %d\n", conta(temp, max, m));
    return 0;
}