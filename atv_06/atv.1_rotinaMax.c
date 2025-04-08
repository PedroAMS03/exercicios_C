#include <stdio.h>
#include <stdlib.h>

//Funcao para retornar o maior de dois numeros
double max(double a, double b) { 
    if (a > b)
        return a;
    return b;
}

int main(){

    system("cls");

    double n1, n2, resultado;

    printf("\nDigite o primeiro valor: ");
    scanf("%lf", &n1);
    printf("Digite o segundo valor: ");
    scanf("%lf", &n2);

    resultado = max(n1, n2);
    printf("O maior entre %.2f e %.2f %c: %.2f\n", n1, n2, 130, resultado);

    return 0;
}