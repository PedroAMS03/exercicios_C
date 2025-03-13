#include <stdio.h>
int main(){

    float peso, altura, imc;

    //system("cls");
    //limpa tela do terminal windows

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    printf("Digite sua altura(metros): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("IMC = %.2f", imc);

    return 0;

}