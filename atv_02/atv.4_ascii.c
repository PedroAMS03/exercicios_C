#include <stdio.h>
#include <stdlib.h>

int main(){

    system("cls");
    
    char caractere;

    printf("\nDigite um caracter: ");
    scanf("%c", &caractere);

    printf("\nC%cdigo em:", 162);
    printf("\nDecimal = %d", caractere);
    printf("\nHexadecimal = %x", caractere);
    printf("\nOctal = %o", caractere);

    return 0;    
}