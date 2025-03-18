#include <stdio.h>
#include <stdlib.h>//necessario para system("cls") = limpar terminal
#include <math.h>// Necessário para usar a função sqrt()

int main(){

    system("cls");

    float a, b, c, delta, raiz1, raiz2;

    printf("Digite o valor do coeficiente a ('a' diferente de 0): ");
    scanf("%f", &a);

    printf("Digite o valor do coeficiente b: ");
    scanf("%f", &b);

    printf("Digite o valor do coeficiente c: ");
    scanf("%f", &c);

    delta = b * b - 4 * a * c;//calculo de delta

    if(delta > 0){ //se delta >0 terao duas raizes reais diferentes

        raiz1 = (-b + sqrt(delta)) / (2 * a);
        raiz2 = (-b - sqrt(delta)) / (2 * a);
        printf("\nAs raizes reais sao: %.2f e %.2f", raiz1, raiz2);

    } else if (delta == 0){ //se =0 tera uma raiz real(iguais)

        raiz1 = -b / (2 * a);
        printf("\nA raiz real e: %.2f", raiz1);

    } else { //nao ha raizes reais

        printf("\nNão há raízes reais.");

    }

    return 0;

}