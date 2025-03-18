#include <stdio.h>
#include <stdlib.h>

int main(){

    system("cls");

    int qtdFaltas;
    float media; 

    printf("\nDigite a quantidade de faltas: ");
    scanf("%d", &qtdFaltas);

    printf("\nDigite a media: ");
    scanf("%f", &media);

    if (qtdFaltas > 5) {
        printf("\nConceito F");
    } else {
        if (media < 6) {
            printf("\nConceito C");
        } else if (media < 7.5) {
            printf("\nConceito B");
        } else if (media < 9){
            printf("\nConceito A");
        } else {
            printf("\nConceito E");
        }
    }
    
    return 0;
}