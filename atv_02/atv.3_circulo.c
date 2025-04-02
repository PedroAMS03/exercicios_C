#include <stdio.h>
#include <stdlib.h>
#define pi 3.1415

int main(){

    system("cls");

    float raio, area, perimetro;
    
    printf("\nDigite o raio do c%crculo(cm): ", 161);
    scanf("%f", &raio);
    
    area = pi * (raio * raio);
    perimetro = 2 * pi * raio;
    
    printf("\n%crea do c%crculo = %.2fcm", 181, 161, area);
    printf("\nPer%cmetro do c%crculo = %.2fcm\n", 161, 161, perimetro);

    //%c lendo decimais 181 e 161 para digitar os caracteres especiais

    return 0;
}
