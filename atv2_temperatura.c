#include <stdio.h>
int main(){

    float tempFar, tempCel;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &tempFar);

    tempCel = (tempFar - 32) * 5 / 9;

    printf("Temperatura em Celsius: %.2f%cC", tempCel, 248);
    //%2.f = float com 2 casas decimais - %c usado para ler cod 248 referente ao sinal de grau.

    return 0;

}
