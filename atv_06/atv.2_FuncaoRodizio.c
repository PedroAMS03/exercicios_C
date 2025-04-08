#include <stdio.h>
#include <stdlib.h>

const char* rodizio(int placa){         //se feito com VOID
    switch(placa){
        case 1: case 2:
            return "Segunda-Feira";     //printf("Rodízio: Segunda-feira\n");
        break;

        case 3: case 4:
            return "Terca-Feira";
        break;

        case 5: case 6:
            return "Quarta-Feira";
        break;

        case 7: case 8:
            return "Quinta-Feira";
        break;

        case 9: case 0:
            return "Sexta-Feira";
        break;

        //adicionado para sumir a mensagem de aviso(control reaches end of non-void function [-Wreturn-type])
        //significa que a função promete retornar um valor(porque não é void), mas nem todos os caminhos da função garantem um return.
        default:
            return "Digito invalido";
    }
}

int main(){

    system("cls");

    int finalPlaca;                                                 //
    const char* diaRodizio;                                         //int finalPlaca;

    printf("Digite o ultimo digito da placa do carro(0-9): ");
    scanf("%d", &finalPlaca);

        diaRodizio = rodizio(finalPlaca);                           //
        printf("\nDia de rodizio do carro: %s\n\n", diaRodizio);    //rodizio(finalPlaca);  Só chama e deixa a função imprimir

    return 0;
}