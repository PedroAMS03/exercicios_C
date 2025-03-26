#include <stdio.h>
#include <stdlib.h>//necessario para system("cls") = limpar terminal

int main(){

    system("cls");

	int expoente, i;
	float base, resultado;

	printf("Digite o valor que sera a base da potencia: ");
	scanf("%f", &base);
	
	printf("Digite o valor do expoente da potencia: ");
	scanf("%d", &expoente);

	//Iniciar resultado com 1, pois qualquer número elevado a 0 = 1
	resultado = 1;

	if (expoente >= 0) {
		for (i = 1; i <= expoente; i++){
			resultado *= base;
		}
	}
	else {
		printf("\nValor do expoente deve ser: >= 0\n");
		
		return 1; //erro
	}

	printf("\nResultado de %.2f elevado a %d = %.2f\n", base, expoente, resultado);

	return 0;
}