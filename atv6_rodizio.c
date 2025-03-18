#include <stdio.h>
#include <stdlib.h>

int main(){

    system("cls");
    //agora limpa o terminal, pois foi add #include <stdlib.h>
 
    int finalPlaca;

    printf("\nDigite o ultimo digito da placa do carro (0-9): ");
    scanf("%d", &finalPlaca);

    switch(finalPlaca){
        case 1: case 2:
            printf("\nDia de rodizio do carro: Segunda-Feira.");
        break;

        case 3: case 4:
            printf("\nDia de rodizio do carro: Terca-Feira.");
        break;

        case 5: case 6:
            printf("\nDia de rodizio do carro: Quarta-Feira.");
        break;

        case 7: case 8:
            printf("\nDia de rodizio do carro: Quinta-Feira.");
        break;

        case 9: case 0:
            printf("\nDia de rodizio do carro: Sexta-Feira.");
        break;
    }

    return 0;

}