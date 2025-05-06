#include <stdio.h>
#include <stdlib.h>
#define ALUNOS 10
#define NOTAS 2

// Função para obter as notas dos alunos e calcular médias individuais
void obtemNotas(float notas[][NOTAS], float medias[]) {
    for (int i = 0; i < ALUNOS; i++) {
        printf("Aluno %d:\n", i + 1);
        for (int j = 0; j < NOTAS; j++) {
            printf("  Nota %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
        medias[i] = (notas[i][0] + notas[i][1]) / 2;
    }
}

// Função para calcular a média da turma
float mediaTurma(float medias[]) {
    float soma = 0;
    for (int i = 0; i < ALUNOS; i++) {
        soma += medias[i];
    }
    return soma / ALUNOS;
}

// Função para imprimir os resultados
void imprimeResultados(float medias[], float media_geral) {
    printf("\n Resultados \n");
    for (int i = 0; i < ALUNOS; i++) {
        printf("Aluno %2d - Media: %.2f - ", i + 1, medias[i]);
        if (medias[i] > media_geral) {
            printf("Acima da media\n");
        } else if (medias[i] < media_geral) {
            printf("Abaixo da media\n");
        } else {
            printf("Na media\n");
        }
    }

    printf("\nMedia da turma: %.2f\n", media_geral);
}

int main() {

    system("cls");

    float notas[ALUNOS][NOTAS], medias[ALUNOS], media_geral;

    obtemNotas(notas, medias);
    media_geral = mediaTurma(medias);
    imprimeResultados(medias, media_geral);

    return 0;
}